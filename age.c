#include<stdlib.h>
#include<stdio.h>
int calcAge(int age){
	int calc;
	calc = 2023 - age;
	return calc;
}

int main(){
  int age;
  printf("Digite sua idade ");
  scanf("%d", &age);
  printf("Seu ano de nascimento acaba de ser calculado! Você nasceu no ano de %d", calcAge(age));
}
