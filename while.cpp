#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"");
	//Declarando variaveis
    int nota, contador = 0, soma = 0;
    float media = 0;
    
    
    //Solicitando dados 
    printf("Digite um n�mero:");
    scanf("%d",&nota);
 
     
     
    //Usando o la�o de repeti��a  
    while ( nota > 0){
    	
    	contador++;
        soma+=nota;
        
        printf("Digite m n�mero:");
            scanf("%d",&nota);
        
	} 
	//Verificando estrutura condicional 
	if (contador == 0){
	  printf("N�mero n�o foi informado");	
	}else {
		
		media = (float)soma / contador;
		printf("\nM�dia: %.1f \n", media);
	}
		
	return 0;  
}
