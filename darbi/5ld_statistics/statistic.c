#include<stdio.h>
#include<string.h>

void main(){
 char string[51];
 char min[2];
 char max[2];
 char i;
 int sum=0;
 char skaits=0;

 printf("Ievadiet simbolu rindu:\n");
 scanf("%s", &string);
 min[0] = string[0];
 min[1] = 0;
 max[0] = string[0];
 max[1] = 0;
 for(i=0;string[i]!='\0';i++){
  sum=sum+string[i];
  printf("%d. simbola (\"%c\") ASCII vērtība ir %d\n",i+1,string[i],string[i]);
  if(string[i]<min[0]){min[0]=string[i];min[1]=i;}
  if(string[i]>max[0]){max[0]=string[i];max[1]=i;}
 }
 printf("\nIevadītajā rindas garums ir %d simboli.\n",i);
 printf("Mazākā vērtība ir %d. simbolam \"%c\", kura ASCII vētība ir %d\n",min[1]+1,min[0],min[0]);
 printf("Lielākā vērtība ir %d. simbolam \"%c\", kura ASCII vērtība ir %d\n",max[1]+1,max[0],max[0]);
 printf("Vidējā ASCII vērtība ir %d, kurai atbilst simbols \"%c\"\n",sum/i,sum/i);
 
}
