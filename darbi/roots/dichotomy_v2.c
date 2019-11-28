//jāatrod x atbilstošai f(x) vērtībai, kuru ievada lietotājs
#include<stdio.h>
#include<math.h>

int main(){
	float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3/*0.001*/, funkca, funkcb, funkcx;

	int sk=0;

	funkca = sin(a); funkcb = sin(b);

	//printf("Ievadiet kuras funkcijas vērtībai atbilstošos X-us gribat noskaidrot: ");
	//scanf("%d",c);

	if(funkca*funkcb>0){
		{printf("Intervāla [%.2f;%.2f] sin(x) funkcijai ",a,b);
		 printf("sakņu nav (vai tajā ir pāru sakņu skaits)\n");
		 return 1;}
	}
	printf("    sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
	printf("sin(%7.3f)=%7.3f\n",b,sin(b));

	while((b-a)>delta_x){
		sk++;
		x = (a+b)/2.;
		if(funkca*sin(x)>0) // pie a = 0 --> funkca=0 --> reiz ir prec nulle visu laiku --> 
		 a = x;
		else
		 b = x;

		printf("%2d. sin(%7.3f)=%7.3f\t",sk,a,sin(a));
		printf("sin(%7.3f)=%7.3f\t",x,sin(x));
		printf("sin(%7.3f)=%7.3f\n",b,sin(b));
	}

	printf("Skane atrodas pie x=%.3f, jo sin(x)=%.3f\n",x,sin(x));
	printf("Ciklu izpildes skits ir %d\n",sk);

	return 0;
}
