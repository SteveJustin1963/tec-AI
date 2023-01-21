#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define K 3
#define N 20
#define MAX_ITERATIONS 100

void kMeans(int n, int k, double data[][2], double centroids[][2]) {
    int i, j, cluster_assignment[n], changed;
    double distance, min_distance;

    // Initialize cluster assignments randomly
    for (i = 0; i < n; i++) {
        cluster_assignment[i] = rand() % k;
    }

    // Perform k-means clustering
    for (i = 0; i < MAX_ITERATIONS; i++) {
        // Update centroids
        for (j = 0; j < k; j++) {
            centroids[j][0] = 0;
            centroids[j][1] = 0;
            int count = 0;
            for (int m = 0; m < n; m++) {
                if (cluster_assignment[m] == j) {
                    centroids[j][0] += data[m][0];
                    centroids[j][1] += data[m][1];
                    count++;
                }
            }
            if (count != 0) {
                centroids[j][0] /= count;
                centroids[j][1] /= count;
            }
        }
        // Assign each data point to the closest centroid
        changed = 0;
        for (int m = 0; m < n; m++) {
            min_distance = INFINITY;
            for (j = 0; j < k; j++) {
                distance = sqrt(pow(data[m][0] - centroids[j][0], 2) + pow(data[m][1] - centroids[j][1], 2));
                if (distance < min_distance) {
                    min_distance = distance;
                    cluster_assignment[m] = j;
                    changed = 1;
                }
            }
        }
       
        if (!changed) {
            break;
        }
    }
    // Print final cluster assignments
    for (i = 0; i < n; i++) {
        printf("Data point %d is in cluster %d\n", i, cluster_assignment[i]);
    }
}

int main() {
    double data[N][2], centroids[K][2];
    int i;

    // Initialize data points
    for (i = 0; i < N; i++) {
        data[i][0] = (double)rand() / RAND_MAX * 100;
        data[i][1] = (double)rand() / RAND_MAX * 100;
    }

    // Initialize centroids randomly
    for (i = 0; i < K; i++) {
        centroids[i][0] = (double)rand() / RAND_MAX * 100;
        centroids[i][1] = (double)rand() / RAND_MAX * 100;
    }

    kMeans(N, K, data, centroids);
    return 0;
}
