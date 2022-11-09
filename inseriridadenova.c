#include <stdio.h>//biblioteca para ler valores (input) e para exibir valores (output)//
#include <stdlib.h>//Biblioteca para alocar memória, gerar numeros aleatórios, converter variáveis, etc//

int main(){
	
	int idade, idade_nova;
	
	printf("Insira a sua idade:\n");
	scanf("%d", &idade);
	
	idade_nova = idade + 1;
	
	printf("No ano que vem vc tera %d anos.", idade_nova);	
}

