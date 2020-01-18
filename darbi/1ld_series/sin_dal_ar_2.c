#include<stdio.h>
#include<math.h>

void main(){
 long double x,y,a,s;
 int k=0;

 printf("Ievadiet x vērtību: ");
 scanf("%Lf",&x);
 y = sin(x/2);
 printf("y=sin(%.2Lf/2)=%.2Lf\n",x,y);

 a = pow(-1,k)*pow(x,2*k+1)/(exp(2*k+1)*pow(2,2*k+1));
 s += a;

 while (k<500)
 {
  if (k == 0)
   printf("a0 = %Le\tS0 =%.2Lf\n",a,s);
  k++;
  a = a*x/(k);
  s += a;
  if (k == 499)
   printf("a499 = %Le\tS499 =%.2Lf\n",a,s);
 }
 printf("a500 = %Le\tS500 =%.2Lf\n",a,s);

 printf("\n");
 printf("\t\t 500\n");
 printf("\t\t----\n");
 printf("\t\t\\\t\t    k    2k+1\n");
 printf("\t\t \\\t\t(-1) * x\n");
 printf("f(x)=\t\t  |\t  ----------------\n");
 printf("\t\t /\t\t        2k+1\n");
 printf("\t\t/\t\t  (2k+1)!*2\n");
 printf("\t\t----\n");
 printf("\t\tk=0\n");

 printf("\n");
 printf("\tx\n");
 printf("R= --------\n");
 printf("\t2\n");
}
