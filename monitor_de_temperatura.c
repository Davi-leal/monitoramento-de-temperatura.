#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	float temperatura;
	int cont = 0;
	int verificador;
	
	setlocale(LC_ALL, "Portuguese");
	printf("---Monitor de Temperatura---\n");
	
	do{
		printf("digite a Temperatura atual (max 80°C)\n");
		verificador = scanf("%f", &temperatura);
		
		// Se resultado == 0, significa que o usuário digitou letras/símbolos inválidos
		if(verificador!=1){
			printf("[ERRO] Você digitou uma palavra ou caractere inválido!\n");	
			// Limpa o buffer do teclado para evitar loop infinito
            while (getchar() != '\n'); 
            //retoma o progama para o inicio do laco de repeticao 
            continue;
		}
		
		if(temperatura>=80){
			cont++;
		}
		
		printf("Temperatura atual: %.1f °C\n", temperatura);
								
	}while(cont<3);
	
	printf("Temperatura muito alta acumulada 3 vezes!!\n");
    return 0;
}
