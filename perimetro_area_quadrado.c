main() {

int lado, perimetro, area;

printf("digite a medida do lado de um quadrado:"); 
scanf("%d", &lado); 
perimetro = lado * 4;
area = pow(lado,2);

printf("O perimetro do seu quadrado eh %d\n", perimetro);
printf("A area do seu quadrado eh %d", area);

}
