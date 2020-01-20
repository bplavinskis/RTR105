# Laboratory work Nr.1. - Taylor series - report

## Theory
simbolus karto atkarībā pēc to ASCII koda vērtības.

### Code
```
#include<stdio.h>
#include<string.h>

void main(){
 char string[51];
 char min[2];
 char max[2];
 char i;
 int sum=0;
 char skaits=0;

 printf("Ievadiet simbolu rindu:\n");
 scanf("%s", &string);
 min[0] = string[0];
 min[1] = 0;
 max[0] = string[0];
 max[1] = 0;
 for(i=0;string[i]!='\0';i++){
  sum=sum+string[i];
  printf("%d. simbola (\"%c\") ASCII vērtība ir %d\n",i+1,string[i],string[i]);
  if(string[i]<min[0]){min[0]=string[i];min[1]=i;}
  if(string[i]>max[0]){max[0]=string[i];max[1]=i;}
 }
 printf("\nIevadītajā rindas garums ir %d simboli.\n",i);
 printf("Mazākā vērtība ir %d. simbolam \"%c\", kura ASCII vētība ir %d\n",min[1]+1,min[0],min[0]);
 printf("Lielākā vērtība ir %d. simbolam \"%c\", kura ASCII vērtība ir %d\n",max[1]+1,max[0],max[0]);
 printf("Vidējā ASCII vērtība ir %d, kurai atbilst simbols \"%c\"\n",sum/i,sum/i);
 
}
```

### Result
```
Ievadiet simbolu rindu:
asdfad1234,./
1. simbola ("a") ASCII vērtība ir 97
2. simbola ("s") ASCII vērtība ir 115
3. simbola ("d") ASCII vērtība ir 100
4. simbola ("f") ASCII vērtība ir 102
5. simbola ("a") ASCII vērtība ir 97
6. simbola ("d") ASCII vērtība ir 100
7. simbola ("1") ASCII vērtība ir 49
8. simbola ("2") ASCII vērtība ir 50
9. simbola ("3") ASCII vērtība ir 51
10. simbola ("4") ASCII vērtība ir 52
11. simbola (",") ASCII vērtība ir 44
12. simbola (".") ASCII vērtība ir 46
13. simbola ("/") ASCII vērtība ir 47

Ievadītās rindss garums ir 13 simboli.
Mazākā vērtība ir simbolam ",", kura ASCII vērtība ir 44
Lielākā vērtība ir simbolam "s", kura ASCII vērtība ir 115
Vidējā ASCII vērtība ir 73, kurai atbilst simbols "I"
```

### Analysis
lai uzlabotu kodu varētu ieviest to, ka tiek parādīt cik bieži parādās katrs simbols, tie tiek sakārtoti augošā un dilstošā secībā.
