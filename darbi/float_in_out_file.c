#include<stdio.h>
#include<string.h>
int main(){
	FILE *f;
	float s1[5][2];
	float s2[5][3];
	int i,j;
	printf("Ievadiet 10 re?lus skait?us: \n");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++)
		{
			printf("Ievadiet skaitli [%d]. rind? [%d]. kolonn?: ",i+1,j+1);
			scanf("%lf", &s1[i][j]);
		}
	}

	f = fopen("float_in_out_file.txt","w+");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++)
		{
			fprintf(f,"%f ",s1[i][j]);
		}
		fprint{f,"\n"}
	}
	fclose (f);

	f = fopen("float_in_out_file.txt","r+");
	for(i=0,i<5,i++)
	{
		for(j=0,j<2,j++)
		{
			fscanf(f,"%lf", &s2[i][j]);
		}
	printf("%f %f %f \n",s2[i][0],s2[i][1],s2[i][0] * s2[i][1]);
	}
	fclose (f);

}
