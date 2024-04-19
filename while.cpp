#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"");
	//Declarando variaveis
    int nota, contador = 0, soma = 0;
    float media = 0;
    
    
    //Solicitando dados 
    printf("Digite um número:");
    scanf("%d",&nota);
 
     
     
    //Usando o laço de repetiçõa  
    while ( nota > 0){
    	
    	contador++;
        soma+=nota;
        
        printf("Digite m número:");
            scanf("%d",&nota);
        
	} 
	//Verificando estrutura condicional 
	if (contador == 0){
	  printf("Número não foi informado");	
	}else {
		
		media = (float)soma / contador;
		printf("\nMédia: %.1f \n", media);
	}
		
	return 0;  
}
