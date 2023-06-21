#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, n;
    float mean, variance;
    float sum = 0.0, sum1 = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float* x = malloc(n * sizeof(float));

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &x[i]);
        sum += x[i];
    }
    mean = sum/n;

    for(i = 0; i < n; i++) {
        sum1 += pow((x[i] - mean), 2);
    }
    variance = sum1/n;

    printf("\nThe variance of the elements is : %.2f", variance);

    free(x);

    return 0;
}

; the input numbers are stored in a dynamically allocated array x, 
    ;so that we can use the same numbers in the second loop. 
    ;After finishing the computation, we free the allocated memory with free(x).
