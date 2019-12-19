#include<stdio.h>
#include<string.h>

int main(){
	unsigned char i=0 , a=0, b, inc, min, max, mod=0, med ;
	int sum = 0;
	char m[63];
	char m2[63];

	printf("Ievadiet simbolu rindu: ");
	scanf("%s",&m);
	printf("\n");
	min = m[0];
	max = m[0];

	//garums, lielākā, mazākā, vidējā vērtība
	for(i=0;m[i]!='\0';i++){
		a++;
		if ( min >= m[i]) min = m[i];
		if ( max < m[i]) max = m[i];
		printf("%d \n",m[i]);
		sum += m[i];
	}

	//mediāna un alfabeētiska secība
	for(int j=0;j<a;j++){
	for(inc=min;inc<max;inc++){
		for(i=0;m[i]!='\0';i++){
			if(inc == m[i]){
				m2[j]=m[i];
				//c++;
			}
		}
	}
	}

	if(a%2){b = a/2; med = m2[b];}
	else {b= a/2; med = (m2[b-1]+ m2[b])/2; }

	printf("Simbolu rinda ir %d simbolus gara.\n",a);
	printf("Mazākā vērtība ir %d (pēc ASCII koda).\n",min);
	printf("Lielākā vērtība ir %d (pēc ASCII koda).\n",max);
	printf("Vidējā vērtība ir %d (--||--).\n",(sum/a));
	printf("Mediāna ir %d (--||--).\n",med);
	printf("Moda(as) ir %d (--||--).\n",mod);
	printf("Alfabētiskā secībā tas izskatās: %s",m2);

}
