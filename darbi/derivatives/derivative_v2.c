#include<stdio.h>
#include<math.h>

void main(){
	float a=0,b=2*M_PI,x,delta_x=1.e-2;
	printf("\tx\tsin^2(x)*cos^2(x)\tatvas\n");
	x=a;
	while(x<b){
		printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x)*sin(x)*cos(x)*cos(x),2*sin(x)*cos(x)*pow(2,cos(x))+pow(2,sin(x))*2*(cos(x))*(-sin(x)));
		x+=delta_x;

	}

}
