#include<stdio.h>

void main(){
	int number1, number2;
	printf("Ievadiet 1. skaitli: \n");
	scanf("%d", &number1);
	printf("Ievadiet 2. skaitli: \n");
	scanf("%d", &number2);
	if(number1 > number2){
		printf("Skaitlis %d ir lielāks par skaitli %d \n",number1,number2);
	}
	else if(number1 < number2){
		printf("Skaitlis %d ir mazāks par skaitli %d \n", number1,number2);
	}else printf("Skaitļi ir vienādi! \n");
	printf("Darbība pabeigta.");

}
