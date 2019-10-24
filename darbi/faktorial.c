#include<stdio.h>
int main()
{
	int i,a, n = 30, fact = 1, fact_old=1;
	//long long int i, n=30, fact=1;
	printf("Ievadiet skaitli, kura faktoriālu gribat aprēķināt: \n");
	scanf("%d",&a);

/*
	
	
*/

	for(i=1;i<=a;i++){
		fact_old=fact;
		fact = fact * i;
		if(fact/i == fact_old){
		printf("Skaitļa %d faktoriāls ir: %d\n",i,fact);
		//printf("Skaitļa %lld faktoriāls ir: %lld\n",i,fact);
		}
		else{
		printf("EROR 404\n");
		break;}
	}
}
