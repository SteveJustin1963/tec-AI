#include <stdio.h>
#include <stdlib.h>
#include "xgboost/c_api.h"

int main() {
    int i;
    int n_samples = 1000;
    int n_features = 10;
    int n_trees = 100;
    float *X = (float *)malloc(n_samples * n_features * sizeof(float));
    float *y = (float *)malloc(n_samples * sizeof(float));
    // Fill X and y with data
    DMatrixHandle h_train;
    XGDMatrixCreateFromMat(X, n_samples, n_features, -1, &h_train);
    XGDMatrixSetFloatInfo(h_train, "label", y, n_samples);
    BoosterHandle h_booster;
    XGBoosterCreate(h_train, 0, &h_booster);
    XGBoosterSetParam(h_booster, "objective", "reg:linear");
    XGBoosterSetParam(h_booster, "eval_metric", "rmse");
    XGBoosterSetParam(h_booster, "eta", "0.1");
    XGBoosterSetParam(h_booster, "max_depth", "3");
    XGBoosterSetParam(h_booster, "subsample", "0.5");
    XGBoosterSetParam(h_booster, "colsample_bytree", "0.5");
    XGBoosterSetParam(h_booster, "num_round", "10");
    XGBoosterUpdateOneIter(h_booster, 0, h_train);
    bst_ulong out_len;
    const float *f;
    XGBoosterPredict(h_booster, h_train, 0, 0, &out_len, &f);
    // Use f for further processing
    XGDMatrixfree(h_train);
XGBoosterFree(h_booster);
free(X);
free(y);
return 0;
}
