/*(a) Construa uma função encaixa que dados dois inteiros positivos 
a e b verifica se b corresponde aos últimos dígitos de a.
Usando a função do item anterior, faça um programa que lê 
dois inteiros positivos a e b e verifica se o menor deles é
 segmento do outro.
*/

#include<stdio.h>
#include<stdlib.h>
  
int encaixa( int a, int b);


int main(int argc, char *argv[]){
    int a, b;
    
    printf("Digite dois números a e b inteiros positivos\n");
    scanf("%d %d", &a, &b);
    if(encaixa(a, b) == 0)
    printf("O número %d corresponde aos últimos dígitos de %d\n", b, a);
    else
    printf("O número %d não corresponde aos últimos dígitos de %d\n", b, a);

    int n1, n2, maior, menor, vef = 1, m1, m2;
    printf("Digite mais 2 números inteiros positivos\n");
    scanf("%d %d", &n1, &n2);
    if(n1 >= n2){
    maior = n1;
    menor = n2;
  }
    else{
    maior = n2;
    menor = n1;
    }
    m1 = maior;
    m2 = menor;
    
    while(maior >= menor){
      if(encaixa(maior, n2) == 0){
      vef = 0;
      break;}
    maior /= 10;
   }
if(vef == 0)
    printf("O número %d corresponde a um segmento de %d\n", m2, m1);
    else
    printf("O número %d não corresponde a um segmento de %d\n", m2, m1);



   return 0;
  }
/*construir uma função que faz o que foi pedido, verificando o resultado
de b em a, b em a % (10^n) e etc, por exemplo
a = 1920
b = 20
testa a = 1920, a = 920, a = 20 = b, codigo para*/
  int encaixa(int a, int b){
    int resultado = 1;
    int n, i, pot = 1, cont = 0;
    n = a;  
    
    while(n > 0){
   n /= 10;
   cont++;
}
//101 e 5 cont = 3, pot = 1000
for(i = 0; i < cont; i++){
pot *= 10;
}

    while(a >= 0 && pot > 0){
       if(a == b){
       resultado = 0;
       break;
      }
     a %= pot;
     pot /= 10;
    }
       return resultado;
  }
