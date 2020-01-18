# Laboratory work Nr.2. - roots - report

## Theory
Izmantojot Teilora rundu, aizstāju funkciju ar pakāpes serijas summu. 

### Code
```
#include<stdio.h>
#include<math.h>
int main(){
 float a, b, c, x, delta_x, funkca, funkcb, funkcx;
 int k=0;
  
  printf("Ievadiet sākuma robežu (a): ");
  scanf ("%f", &a);
  printf("Ievadiet beigas robežu (b): ");
  scanf ("%f", &b);
  printf("Ievadiet precizitāti: ");
  scanf ("%e", &delta_x);
  printf("Ievadiet, kādam y Jūs gribat aprēķināt x: ");
  scanf ("%f", &c);

 funkca = sin(a/2)-c; funkcb = sin(b/2)-c;
 
 printf("sin(%7.3f/2) - %7.3f =%7.3f\t\t\t\t\t\t\t",a,c,funkca);
 printf("sin(%7.3f/2) - %7.3f =%7.3f\n",b,c,funkcb);
 
 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*(sin(x/2)-c)>0)
   a = x;
  else
   b = x;
  printf("sin(%7.3f/2) - %7.3f =%7.3f\t",a,c,funkca);
  printf("sin(%7.3f/2) - %7.3f =%7.3f\t",x,c,funkcb);
  printf("sin(%7.3f/2) - %7.3f =%7.3f\n",b,c,sin(x/2)-c);
   i++;
 }

 printf("\nIteraciju skaits: %d\n",k);
 printf("Sākne atrodas pie x=%.5f, jo sin(x/2) ir %.3f\n",x,sin(x/2);
 return 0;
}
```
Comments about code  

### Result
```
...
```

### Analysis
Comments about results  

### Figures
