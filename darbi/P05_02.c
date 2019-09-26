#include <stdio.h>
#include <limits.h>

int main(){
	int a=50000; //50 ,000
	int b=1000000; //1, 000, 000
	long long int c=a*b;
	
	printf("int datu tipa izmers ir: %ld baiti \n", sizeof(int) );
	printf("Aprēķinam a un b reizinājumu: \n");
	printf("a = %d, b = %d \n", a,b);
	printf("c = a * b = %d * %d = %ll \n", a,b,c);
}
