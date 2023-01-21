#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main() {
    int n_samples = 1000;
    int n_features = 10;
    mat X(n_samples, n_features);
    // Fill X with data
    mat centered = X - mean(X);
    mat cov_mat = cov(centered);
    vec eigval;
    mat eigvec;
    eig_sym(eigval, eigvec, cov_mat);
    mat pca = centered * eigvec.cols(n_features - 2, n_features - 1);
    // Use pca for further processing
    return 0;
}
