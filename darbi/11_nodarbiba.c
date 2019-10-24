#include<stdio.h>
#include<math.h>

void dilstosha_sec(int a,int b,int c){
	if(a>b && a>c){
		if(b>c) printf("Dilstošā secībā: %d, %d, %d.\n",a,b,c);
		else printf("Dilstošā secība: %d, %d, %d.\n",a,c,b);
	}
	else if(b>a && b>c){
		if(a>c) printf("Dilstošā secībā: %d, %d, %d.\n",b,a,c);
		else printf("Dilstoshā secībā: %d, %d, %d.\n",b,c,a);
	}
	else if(c>b && c>a){
		if(b>a) printf("Dilstošā secībā: %d, %d, %d.\n",c,b,a);
		else printf("Dilstošā secībā: %d, %d, %d.\n",c,a,b);
	}
};

void augosha_sec(a,b,c){
	if(a>b && a>c){
		if(b>c) printf("Augošā secībā: %d, %d, %d.\n",c,b,a);
		else printf("Augošā secībā: %d, %d, %d.",b,c,a);
	}
	else if(b>a && b>c){
		if(a>c) printf("Augošš secībs: %d, %d, %d.\n",c,a,b);
		else printf("Augošā secībā: %d, %d, %d.\n",a,c,b);
	}
	else if(c>b && c>a){
		if(b>a) printf("Augošā secībā: %d, %d, %d.\n",a,b,c);
		else printf("Augošā secībā: %d, %d, %d.\n",b,a,c);
	}
};

void user_inp(a,b,c){
	printf("Jūs ievadījāt: %d, %d, %d.\n",a,b,c);

};

void aug_mod(a,b,c){
	if(a<0) a=a*-1;
	if(b<0) b=b*-1;
	if(c<0) c=c*-1;

	if(a>b && a>c){
		if(b>c) printf("Augošā secībā pēc moduļa: %d, %d, %d.\n",c,b,a);
		else printf("Augošā secībā: %d, %d, %d.",b,c,a);
	}
	else if(b>a && b>c){
		if(a>c) printf("Augošš secībs: %d, %d, %d.\n",c,a,b);
		else printf("Augošā secībā: %d, %d, %d.\n",a,c,b);
	}
	else if(c>b && c>a){
		if(b>a) printf("Augošā secībā: %d, %d, %d.\n",a,b,c);
		else printf("Augošā secībā: %d, %d, %d.\n",b,a,c);
	}
};

void dilst_mod(a,b,c){
	if(a<0) a=a*-1;
	if(b<0) b=b*-1;
	if(c<0) c=c*-1;

	if(a>b && a>c){
		if(b>c) printf("Dilstošā secībā: %d, %d, %d.\n",a,b,c);
		else printf("Dilstošā secība: %d, %d, %d.\n",a,c,b);
	}
	else if(b>a && b>c){
		if(a>c) printf("Dilstošā secībā: %d, %d, %d.\n",b,a,c);
		else printf("Dilstoshā secībā: %d, %d, %d.\n",b,c,a);
	}
	else if(c>b && c>a){
		if(b>a) printf("Dilstošā secībā: %d, %d, %d.\n",c,b,a);
		else printf("Dilstošā secībā: %d, %d, %d.\n",c,a,b);
	}
};



void main()
{
	int y = 1, sk1, sk2, sk3;

	while(y)
	{

		printf("Ievadi 1. skaitli: ");
		scanf("%d", &sk1);
		printf("Ievadi 2. skaitli: ");
		scanf("%d", &sk2);
		printf("Ievadi 3. skaitli: ");
		scanf("%d", &sk3);

		dilstosha_sec(sk1,sk2,sk3);
		augosha_sec(sk1,sk2,sk3);
		user_inp(sk1,sk2,sk3);
		aug_mod(sk1,sk2,sk3);
		dilst_mod(sk1,sk2,sk3);

		printf("Vai vēlaties mēģināt vēlreiz? [Y] = 1    [N] = 0 \n");
		scanf("%d",&y);
	}
}
