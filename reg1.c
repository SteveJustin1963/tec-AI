#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,i;
    double x,y,sumx=0,sumy=0,sumxy=0,sumx2=0;
    double a,b;
    printf("Enter the number of data points: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter x%d: ",i);
        scanf("%lf",&x);
        printf("Enter y%d: ",i);
        scanf("%lf",&y);
        sumx += x;
        sumy += y;
        sumxy += x*y;
        sumx2 += x*x;
    }
    b = (n*sumxy - sumx*sumy)/(n*sumx2 - sumx*sumx);
    a = (sumy - b*sumx)/n;
    printf("\nThe equation of the line is: y = %.2fx + %.2f\n",b,a);
    return 0;
}
