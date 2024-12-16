#include <stdio.h>
#define TAM (30)

int main() {
    char nome[TAM];
    double salario,vendas,comissao;
    fgets(nome,TAM,stdin);
    scanf("%lf %lf",&salario,&vendas);
    comissao=vendas*0.15;
    printf("TOTAL = R$ %.2lf\n",(salario+comissao));
    return 0;
}