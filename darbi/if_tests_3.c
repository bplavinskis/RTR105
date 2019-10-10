#include<stdio.h>
#include<time.h>
void main(){
	int nr;
	clock_t start_t, end_t, total_t;
	printf("Ievadiet skaitli: ");
	scanf("%d", &nr);
	start_t = clock();
	if((nr % 2) == 0){
		printf("Skaitlis %d ir pāra skaitlis \n", nr);
	}
	else{
		printf("Skaitlis %d ir nepāra skaitlis \n", nr);
	}
	end_t = clock();
		//total_t = (double) (end_t - start_t) / Clocks_per_sec;
	printf("darbība aizņēma no %d līdz %d -> %ld ", start_t, end_t, total_t=end_t-start_t);
	start_t = clock();
	if((nr<<31)>>31)
		printf("Tavs sk ir nepāra..\n");
	else
		printf("Tavs sk ir pāra");
	end_t = clock();
	printf("darbība aizņēma no %d līdz %d -> %ld ", start_t, end_t, total_t=end_t-start_t);

}
