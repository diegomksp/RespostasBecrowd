#include <stdio.h>
 
int main() {
    int cp1,cp2,np1,np2;
    double vp1,vp2,valorTotal;
    scanf("%d %d %lf",&cp1,&np1,&vp1);
    scanf("%d %d %lf",&cp2,&np2,&vp2);
    valorTotal=np1*vp1+np2*vp2;
    printf("VALOR A PAGAR: R$ %.2lf\n",valorTotal);
    return 0;
}