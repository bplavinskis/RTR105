#include<stdio.h>
#include<string.h>
int main(){
	FILE *f;
	float s1[5][2];
	float s2[5][3];
	int i,j;
	printf("Ievadiet 10 reālus skaitļus: \n");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++)
		{
`			printf("Ievadiet skaitli [%d][%d] laukā: ",i,j);
			scanf("%d", &s1[i][j]);
		}
	}

	f = fopen("float_in_out_file.txt","w+");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++){
`			fprintf(f,"%d ",s1[i][j]);
		}
	}
	fclose (f);

	f = fopen("float_in_out_file.txt","r+");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++)
		{
			fscanf(f,"%d", &s2[i][j]);
		}
		s2[i][3] = s2[i][1] * s2[i][2]
	}

	printf("Rezultāts:");
	for(i=0; i<5; i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ", disp[i][j]);
		if(j==3)
		{
			printf("\n");
		}
      	}
   }

	fclose (f);

}
