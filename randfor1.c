#include <stdio.h>
#include <stdlib.h>
#include "libforest.h"

int main() {
    int i;
    int n_samples = 1000;
    int n_features = 10;
    int n_trees = 100;
    double **X = (double **)malloc(n_samples * sizeof(double *));
    for (i = 0; i < n_samples; i++) {
        X[i] = (double *)malloc(n_features * sizeof(double));
    }
    double *y = (double *)malloc(n_samples * sizeof(double));
    // Fill X and y with data
    struct random_forest *rf = libforest_create_regressor(n_trees);
    libforest_fit(rf, X, y, n_samples, n_features);
    double *y_pred = libforest_predict(rf, X, n_samples, n_features);
    // Use y_pred for further processing
    libforest_destroy(rf);
    free(y);
    for (i = 0; i < n_samples; i++) {
        free(X[i]);
    }
    free(X);
    return 0;
}
