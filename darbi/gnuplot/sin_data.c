#include <stdio.h>
#include <math.h>

void main(){

FILE *f;
f = fopen("sin_data.dat","w+");

float a,b,x,y;
float delta_x;
a = 0;
b = 2*M_PI;
x = a;
delta_x = 0.1;
fprintf("\tx\ty\n");

while(x<b)
{
	y = sin(x);
	fprintf("%10.1f\t%10.1f\n",x,y);
	x = x + delta_x; // x+=delta_x
}
/**
y = a;
delta_y = 0.1;
while (y<b)
{
	printf("%10.1f\n",y);
	y = 
}

close f;
/**
int x=0;
int i=0;
int j=0;
printf("Cik argumentus ievadīsiet: ");
scanf("%l \n",x)
int mas[x;2];
**/
}
