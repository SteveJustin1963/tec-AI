#include <stdio.h>
#include <stdlib.h>
#include "libforest.h"

int main() {
    int i;
    int n_samples = 1000;
    int n_features = 10;
    int n_trees = 100;

    // Allocate memory for the data matrix X and the label vector y
    double **X = (double **)malloc(n_samples * sizeof(double *));
    if (X == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n_samples; i++) {
        X[i] = (double *)malloc(n_features * sizeof(double));
        if (X[i] == NULL) {
            printf("Memory allocation failed.\n");
            // Free previously allocated memory
            while (--i >= 0) free(X[i]);
            free(X);
            return 1;
        }
    }

    double *y = (double *)malloc(n_samples * sizeof(double));
    if (y == NULL) {
        printf("Memory allocation failed.\n");
        for (i = 0; i < n_samples; i++) free(X[i]);
        free(X);
        return 1;
    }

    // TODO: Replace this with your actual data filling code
    for (i = 0; i < n_samples; i++) {
        for (int j = 0; j < n_features; j++) {
            X[i][j] = rand() % 100; // Random value between 0 and 99
        }
        y[i] = rand() % 2; // Random value of 0 or 1
    }

    // Create the random forest regressor
    struct random_forest *rf = libforest_create_regressor(n_trees);

    // Fit the model to the data
    libforest_fit(rf, X, y, n_samples, n_features);

    // Predict the labels of the training data
    double *y_pred = libforest_predict(rf, X, n_samples, n_features);

    // TODO: Use y_pred for further processing

    // Free all allocated resources
    libforest_destroy(rf);
    free(y_pred);
    free(y);
    for (i = 0; i < n_samples; i++) {
        free(X[i]);
    }
    free(X);

    return 0;
}
