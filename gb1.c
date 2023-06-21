#include <stdio.h>
#include <stdlib.h>
#include "xgboost/c_api.h"

int main() {
    int i;
    int n_samples = 1000;
    int n_features = 10;
    int n_rounds = 10;
    float *X = (float *)malloc(n_samples * n_features * sizeof(float));
    float *y = (float *)malloc(n_samples * sizeof(float));

    // TODO: Fill X and y with data

    DMatrixHandle h_train;
    XGDMatrixCreateFromMat((float *)X, n_samples, n_features, -1, &h_train);
    XGDMatrixSetFloatInfo(h_train, "label", y, n_samples);

    BoosterHandle h_booster;
    XGBoosterCreate(NULL, 0, &h_booster);
    XGBoosterSetParam(h_booster, "objective", "reg:linear");
    XGBoosterSetParam(h_booster, "eval_metric", "rmse");
    XGBoosterSetParam(h_booster, "eta", "0.1");
    XGBoosterSetParam(h_booster, "max_depth", "3");
    XGBoosterSetParam(h_booster, "subsample", "0.5");
    XGBoosterSetParam(h_booster, "colsample_bytree", "0.5");

    for (i = 0; i < n_rounds; i++) {
        XGBoosterUpdateOneIter(h_booster, i, h_train);
    }

    bst_ulong out_len;
    const float *f;
    XGBoosterPredict(h_booster, h_train, 0, 0, &out_len, &f);

    // TODO: Use f for further processing

    XGBoosterFree(h_booster);
    XGDMatrixFree(h_train);
    free(X);
    free(y);

    return 0;
}
; remember to replace // TODO: Fill X and y with data with the appropriate code to fill 
;your X and y arrays with training data. Also replace // TODO: Use f for further processing 
;with the code to process the prediction results.
