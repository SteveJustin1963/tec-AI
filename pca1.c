#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main() {
    int n_samples = 1000;
    int n_features = 10;

    // Initialize a matrix X with random values
    mat X = randu<mat>(n_samples, n_features);

    // Center the data by subtracting the mean of each column
    mat centered = X - repmat(mean(X, 0), n_samples, 1);

    // Calculate the covariance matrix
    mat cov_mat = cov(centered);

    // Perform the eigendecomposition
    vec eigval;
    mat eigvec;
    if(!eig_sym(eigval, eigvec, cov_mat)) {
        cerr << "Eigendecomposition failed!" << endl;
        return -1;
    }

    // Project data onto the last two principal components
    mat pca = centered * eigvec.cols(n_features - 2, n_features - 1);

    // TODO: Use pca for further processing

    return 0;
}
