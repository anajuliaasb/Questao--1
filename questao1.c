#include<stdio.h>
#include<limits.h>
int fatorial, numero, resp;


int main(){

do{
printf("\nDigite um numero maior que 0 para calcularmos o fatorial:\n\n");
scanf("%d", &numero);

if(numero>0){
for(fatorial=1; numero>1; numero=numero-1){
     fatorial=fatorial*numero;
}
printf("\nO resultado do fatorial eh:   %d\n\n", fatorial);
}
if(numero<0){

    printf("\n\nPor favor digite um numero maior que zero\n");
}

printf("\nDigite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);

    if(resp==2){

    printf("\nObrigada! Espero que tenha gostado!!=) \n ");

    }
}
while(resp==1);



return 0;}

