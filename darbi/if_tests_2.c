#include<stdio.h>

void main(){
	int number1, number2;
	printf("Ievadiet 1. skaitli: \n");
	scanf("%d", &number1);
	printf("Ievadiet 2. skaitli: \n");
	scanf("%d", &number2);
	if(number1 % 2 == 0){
		printf("Skaitlis %d ir pāra skaitlis \n",number1);
	}
	else{
		printf("Skaitlis %d ir nepāra skaitlis \n", number1);
	}
	if(number2 % 2 == 0){
		printf("Skaitlis %d ir pāra skaitlis \n",number2);
	}
	else{
		printf("Skaitlis %d ir nepāra skaitlis \n", number2);
	}
	printf("Darbība pabeigta.");

}
