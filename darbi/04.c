//Bruno Pļavinskis


#include <stdio.h>
float pi(){
	return 3.14;
}
int main(){
	int R=123;
	int L=2*pi()*R;
	printf("Rinka ar radiusu %d garums ir %d m ", R, L);
	return 0;
}
