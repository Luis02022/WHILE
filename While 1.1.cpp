#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"");
	//Declarando variáveis 
	int pares = 0, impares = 0, num;
	float mediapares = 0, mediageral = 0,somageral = 0, somapares = 0; 
	int contador = 0, contadorPares = 0;
	
	//Solicitando dados 
	printf("Digite um número:");
	scanf("%i",&num);
	
	//Utilizando laço de repetição
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
	   
      printf("Digite um número:");
	scanf("%i",&num);
	
	}
	
	if (contador == 0){
		printf("Número não informado\n");
	}else{
		mediageral = somageral / contador;
	if (contadorPares != 0) { // Verifica se há números pares antes de calcular a média
            mediapares = somapares / contadorPares;
	}
}
	printf("Média: %.1f \n", mediageral);
	printf("Média pares: %.1f\n", mediapares);
	printf("Quantidade de números repetidos: %i\n", contador);
	printf("Quantidade de números pares: %i\n", contadorPares);
	
       
	
	
	
	return 0;
}
