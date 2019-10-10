#include<stdio.h>
#include<time.h>

void main(){
	int y = 1, sk1, sk2;
	clock_t start_t, end_t, total_t;
	while(y){
		start_t = clock();
		printf("Ievadi 1. skaitli: ");
		scanf("%d", &sk1);
		printf("Ievadi 2. skaitli: ");
		scanf("%d", &sk2);
		if(sk1 > sk2){
			printf("1. skaitlis ir lielāks ");}
		else if (sk1 < sk2){
			printf("2. skaitlis ir lielāks ");}
		else printf("Skaitļi ir vienādi ");
		end_t = clock();
		printf("Darbības ilgums %ld \n",total_t = end_t - start_t);
		
		printf("Vai vēlaties mēģināt vēlreiz? [Y] = 1    [N] = 0 \n");
		scanf("%d",&y);
	}
}
