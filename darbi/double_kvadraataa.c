#include<studio.h>

//funkcijas deklarācija
float squar(float in);

//galvenās funkcijas definīcija
int main(){
	float x;
	for( x=0 ; x<1 ; X+=0.1){
		printf("%f %f\n",x,squar(x));
	}
}

//funkcijas definīcija
float squar(float in){
	return in*in;
}
