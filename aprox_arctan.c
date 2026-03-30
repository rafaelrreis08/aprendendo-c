#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double arctan(double x);
double angulo(double x, double y);


int main(int argc, char *argv[]){
    double x, x1, y1, xp, yp, max = 0.0, Xmax, Ymax;
    int n, i;

printf("Digite o valor de X para encontrar o arctan(x), 0 <= x <= 1\n");
 scanf("%lf", &x);

printf("Meu arctan: %f\n", arctan(x));
printf("math.h atan: %f\n", atan(x));
printf("Erro: %f\n", fabs(arctan(x) - atan(x)));
   
    

printf("Digite as coordenadas de uma posição de\num ponto do primeiro quadrante, x e y respectivamente\n");
scanf("%lf %lf", &x1, &y1);
printf("O valor aproximado do ângulo do vetor dado é %f\n", angulo(x1, y1));

printf("Digite a quantidade de pontos que deseja colocar:\n");
scanf("%d", &n);
printf("Digite a coordenada x e y de cada ponto\n");

for(i = 0; i < n; i++){
    printf("Digite o %d-ésimo ponto\n", i + 1);
    scanf("%lf %lf", &xp, &yp);
    if(angulo(xp, yp) > max){
    max = angulo(xp, yp);
    Xmax = xp;
    Ymax = yp; 
}
}

printf("Dos %d pontos dados o que possui maior ângulo é o\nde coordenadas %f e %f\ncom um ângulo aproximado de %f\n", n, Xmax, Ymax, angulo(Xmax, Ymax));

return 0;
}

double arctan(double x){

double x1 = x;
int i = 1, l = 1, sinal = 1;
double termo = x;
double sum = 0.0; 
if(x != 1){
   while(fabs(termo) > 0.0001){
    
    termo = sinal*pow(x, l)/l;
   sum += termo;
   l += 2;
   sinal *= -1;
   }
}
else
sum = M_PI/4;
return sum;
}

double angulo(double x, double y){

    double alfa;
    if(y < x)
    alfa = arctan(y/x);
    else
    alfa = M_PI/2 - arctan(x/y);


    return alfa;
}