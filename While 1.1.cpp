#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"");
	//Declarando vari�veis 
	int pares = 0, impares = 0, num;
	float mediapares = 0, mediageral = 0,somageral = 0, somapares = 0; 
	int contador = 0, contadorPares = 0;
	
	//Solicitando dados 
	printf("Digite um n�mero:");
	scanf("%i",&num);
	
	//Utilizando la�o de repeti��o
	while(num != 0 ){
       
	   if (num > 0){
       	  	contador++;
       	  	somageral+=num;
	   }
	   if (num % 2 == 0){
	   	
		pares++;
		somapares+=num;
	   	contadorPares++;
	   }else {
	   	impares++;
	   }
	   
      printf("Digite um n�mero:");
	scanf("%i",&num);
	
	}
	
	if (contador == 0){
		printf("N�mero n�o informado\n");
	}else{
		mediageral = somageral / contador;
	if (contadorPares != 0) { // Verifica se h� n�meros pares antes de calcular a m�dia
            mediapares = somapares / contadorPares;
	}
}
	printf("M�dia: %.1f \n", mediageral);
	printf("M�dia pares: %.1f\n", mediapares);
	printf("Quantidade de n�meros repetidos: %i\n", contador);
	printf("Quantidade de n�meros pares: %i\n", contadorPares);
	
       
	
	
	
	return 0;
}
