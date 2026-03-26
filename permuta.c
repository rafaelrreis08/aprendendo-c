/*Um número a é dito permutação de um número b se os dígitos de a formam 
uma permutação dos dígitos de b.
Exemplo:   5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.
Obs.: Considere que o dígito 0 (zero) não aparece nos números.
Faça um programa que lê dois 
inteiros positivos a e b e responda se a é permutação de b.
*/



#include<stdio.h>
#include<stdlib.h>

int contaDigitos(int n, int d);

int main(int argc, char *argv[]){
 int n1, n2, i, verificador = 1;

    printf("Digite dois números inteiros positivos\n");
    scanf("%d %d", &n1, &n2);
    
    for(i = 1; i <= 9; i++) {
    if(contaDigitos(n1, i) != contaDigitos(n2, i)){
     verificador = 0;
     break;
    }
    }
    if(verificador == 1){
    printf("O número %d é permutação de %d\n", n1, n2);}
    else{
        printf("O número %d não é permutação de %d\n", n1, n2);
    }

    return 0;
}

int contaDigitos(int n, int d){
    int contd = 0;
    while(n > 10){
     if(n % 10 == d)
     contd ++;
     n /= 10;
   }

return contd;
}
