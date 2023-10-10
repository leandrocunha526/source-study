#include <stdio.h>

float convertDolar(float valor){
	float total;
	float valorDolar = 5.02;
	total = valorDolar * valor;
	return (total);
}


int main(int argc, char **argv)
{
	float valor, total;
	printf("Digite o valor ");
	scanf("%f", &valor);
	total = convertDolar(valor);
	printf("Resultado do valor convertido em dólar para real é %.2f", total);
}

