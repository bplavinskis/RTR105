#include<stdio.h>
#include<math.h>

void main(){
 float a=0.,b=2*M_PI,x,delta_x=1.e-2;
 //float y;
 printf("\tx\tsin(x/2)\tsin\'(x/2)\n");
 x = a;
 while(x<b){
  //y = sin(x/2);
  printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x/2),(sin((x+delta_x)/2)-sin(x/2))/delta_x);
  //printf("%10.2f\t%10.2f\n",x,y);
  x += delta_x;//x = x + delta_x;
  }
}
