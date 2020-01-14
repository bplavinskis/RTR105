#include<stdio.h>
#include<math.h>
void main(){
 double x,y,a,S;
 int k=0;
 y = sin(x/2);
 printf("y=sin(%.2f/2)=%.2f\n",x,y);

 a = pow(-1,k)*pow(x,2*k+1)/(1.);
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<3){
  k++;
  a = a * (-1) *x*x / ((2*k)*(2*k+1));
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
  }
}
