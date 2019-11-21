// a0, a1, a2, a3 -> a
// S0, S1, S2, S3 -> S
#include<stdio.h>
#include<math.h>
void main()
{
double x=0.57,y,a,S;
y=sin(x);
printf("y=sin(%.2f)=%.2f\n",x,y);

a = pow(-1,0)*pow(x,2*0+1)/(1.);
S=a;
printf("%.2f\t%.2f\t%.2f\n",x,a,S);

a = pow(-1,1)*pow(x,2*1+1)/(1.*1*2*3);
S+=a;
printf("%.2f\t%.2f\t%.2f\n",x,a,S);

a = pow(-1,2)*pow(x,2*2+1)/(1.*1*2*3*4*5);
S+=a;
printf("%.2f\t%.2f\t%.2f\n",x,a,S);

a = pow(-1,3)*pow(x,2*3+1)/(1.1*2*3*4*5*6*7);
S+=a;
printf("%.2f\t%.2f\t%.2f\n",x,a,S);

}
