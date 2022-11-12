#include <stdio.h>

int main (int argc, char const *argv[])
{
char nome[50];

 char endereco[60];



 printf("digite o nome:\n");

 fgets(nome,50,stdin);

 printf("digite o endereco:\n");

 fgets(endereco,60,stdin);

 printf("digite o telefone:\n");

 fgets(telefone,14,stdin);

 printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome,endereco,telefone);

}

