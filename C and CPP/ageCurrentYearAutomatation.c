#include<stdlib.h>
#include<stdio.h>
#include <time.h>

int calcAge(int age){
    int calc;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int currentYear = tm.tm_year + 1900;
	calc = currentYear - age;
	return calc;
}

int main(){
  int age;
  printf("Digite sua idade ");
  scanf("%d", &age);
  printf("Seu ano de nascimento acaba de ser calculado! Você nasceu no ano de %d\n", calcAge(age));
}
