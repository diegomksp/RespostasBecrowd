#include <stdio.h>
 
int main() {
    double a,b;
    scanf("%lf %lf",&a,&b);
    a*=0.35;
    b*=0.75;
    printf("MEDIA = %.5lf\n",(a+b)/1.1);
    return 0;
}