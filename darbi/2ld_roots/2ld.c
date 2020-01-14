#include<stdio.h>
#include<math.h>
int main(){
 float a=0.01, b=1.5*M_PI, x, delta_x=1.e-5/*0.001*/, funkca, funkcb, funkcx;
 int k=0;
 funkca = sin(a/2); funkcb = sin(b/2);
 if(funkca*funkcb>0){
  printf("Intervālā [%.2f;%.2f] sin(x/2) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;}

 printf("               sin(%7.3f/2)=%7.3f\t\t",a,sin(a/2));
 printf("sin(%7.3f/2)=%7.3f\n",b,sin(b));

 while((b-a)>delta_x){
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.;
  if(funkca*sin(x/2)>0) // pie a=0 -> funkca=0 -> reizinājums ir precīzi 0 visu laiku -> visu laika "strādā" b=x
   a = x;
  else
   b = x;
  printf("%2d. iterācija: sin(%7.3f/2)=%7.3f\t",k,a,sin(a/2));
  printf("sin(%7.3f/2)=%7.3f\t",x,sin(x/2));
  printf("sin(%7.3f/2)=%7.3f\n",b,sin(b/2));}

 printf("Sākne atrodas pie x=%.3f, jo sin(x/2) ir %.3f\n",x,sin(x/2));

 return 0;
}
