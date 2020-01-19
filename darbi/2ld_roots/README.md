# Laboratory work Nr.2. - roots - report

## Theory
. . .

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
Ievadiet sākuma robežu (a): 0
Ievadiet beigas robežu (b): 20
Ievadiet precizitāti: 1.e-5
Ievadiet, kādam y Jūs gribat aprēķināt x: 0.62
sin(  0.000/2) -   0.620 = -0.620							sin( 20.000/2) -   0.620 = -1.164
sin( 10.000/2) -   0.620 = -0.620	sin( 10.000/2) -   0.620 = -1.164	sin( 20.000/2) -   0.620 = -1.579
sin( 10.000/2) -   0.620 = -0.620	sin( 15.000/2) -   0.620 = -1.164	sin( 15.000/2) -   0.620 =  0.318
sin( 12.500/2) -   0.620 = -0.620	sin( 12.500/2) -   0.620 = -1.164	sin( 15.000/2) -   0.620 = -0.653
sin( 13.750/2) -   0.620 = -0.620	sin( 13.750/2) -   0.620 = -1.164	sin( 15.000/2) -   0.620 = -0.062
sin( 13.750/2) -   0.620 = -0.620	sin( 14.375/2) -   0.620 = -1.164	sin( 14.375/2) -   0.620 =  0.166
sin( 13.750/2) -   0.620 = -0.620	sin( 14.062/2) -   0.620 = -1.164	sin( 14.062/2) -   0.620 =  0.060
sin( 13.750/2) -   0.620 = -0.620	sin( 13.906/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 =  0.001
sin( 13.828/2) -   0.620 = -0.620	sin( 13.828/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.030
sin( 13.867/2) -   0.620 = -0.620	sin( 13.867/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.014
sin( 13.887/2) -   0.620 = -0.620	sin( 13.887/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.007
sin( 13.896/2) -   0.620 = -0.620	sin( 13.896/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.003
sin( 13.901/2) -   0.620 = -0.620	sin( 13.901/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.001
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.906/2) -   0.620 = -0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.905/2) -   0.620 = -1.164	sin( 13.905/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 = -0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000
sin( 13.904/2) -   0.620 = -0.620	sin( 13.904/2) -   0.620 = -1.164	sin( 13.904/2) -   0.620 =  0.000

Iteraciju skaits: 21
Sākne atrodas pie x=13.90386, jo sin(x/2) ir 0.620

```

### Analysis
Ķip' strādā (bet, manuprāt, kļūdaini)...
