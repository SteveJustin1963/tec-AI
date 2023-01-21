#include <stdio.h>
#include <stdlib.h>
#include "svm.h"

int main() {
    int i;
    int n_samples = 1000;
    int n_features = 10;
    double **X = (double **)malloc(n_samples * sizeof(double *));
    for (i = 0; i < n_samples; i++) {
        X[i] = (double *)malloc(n_features * sizeof(double));
    }
    double *y = (double *)malloc(n_samples * sizeof(double));
    // Fill X and y with data
    struct svm_problem prob;
    prob.l = n_samples;
    prob.y = y;
    prob.x = (struct svm_node **)malloc(n_samples * sizeof(struct svm_node *));
    for (i = 0; i < n_samples; i++) {
        prob.x[i] = (struct svm_node *)malloc((n_features + 1) * sizeof(struct svm_node));
        for (int j = 0; j < n_features; j++) {
            prob.x[i][j].index = j;
            prob.x[i][j].value = X[i][j];
        }
        prob.x[i][n_features].index = -1;
    }
    struct svm_parameter param;
    param.svm_type = C_SVC;
    param.kernel_type = RBF;
    param.degree = 3;
    param.gamma = 0.5;
    param.coef0 = 0;
    param.nu = 0.5;
    param.cache_size = 100;
    param.C = 1;
    param.eps = 1e-3;
    param.p = 0.1;
    param.shrinking = 1;
    param.probability = 0;
    param.nr_weight = 0;
    param.weight_label = NULL;
    param.weight = NULL;
    struct svm_model *model = svm_train(&prob, &param);
// Use model for predictions
double *y_pred = (double *)malloc(n_samples * sizeof(double));
for (i = 0; i < n_samples; i++) {
y_pred[i] = svm_predict(model, prob.x[i]);
}
// Use y_pred for further processing
svm_free_and_destroy_model(&model);
free(y);
for (i = 0; i < n_samples; i++) {
free(prob.x[i]);
}
free(prob.x);
free(X);
return 0;
}
