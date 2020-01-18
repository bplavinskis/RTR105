#include<stdio.h>
#include<math.h>

void main(){
 int k;
 float a=0.,b=0.,x,delta_x=1.e-1;
  printf("Ievadiet sākuma robežu (a): ");
  scanf ("%f", &a);
  printf("Ievadiet beigas robežu (b): ");
  scanf ("%f", &b);
  printf("Ievadiet precizitāti: ");
  scanf ("%f", &delta_x);

  printf("\tx\t\tsin(x/2)\tsin\'(x/2)\tsin\'\'(x/2)\n");

  x=a;
  while(x<=b){
  printf("%10.2f\t%13.2f\t%13.2f\t%13.2f\n",x,sin(x/2),cos(x/2)/2,(-2*sin(x/2))/4);
  x+= delta_x;
  k++;
  }

}

