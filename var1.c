#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,n,j;
    float x,mean,variance;
    float sum=0.0,sum1=0.0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x);
        sum+=x;
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        scanf("%f",&x);
        sum1=sum1+pow((x-mean),2);
    }
    variance=sum1/n;
    printf("\nThe variance of the elements is : %.2f",variance);
    return 0;
}
