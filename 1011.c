#include <stdio.h>
#include <math.h>
#define pi (3.14159)
int main() {
    int r;
    scanf("%d",&r);
    double volume=(4.0/3)*pi*pow(r,3);
    printf("VOLUME = %.3lf\n",volume);
 
    return 0;
}