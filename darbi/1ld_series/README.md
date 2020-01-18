# Laboratory work Nr.1. - Taylor series - report

## Theory
      
f(x)=sin(x/2)

### Code
```
#include<stdio.h>
#include<math.h>
void main(){
 double x,y,a,S;
 int k=0;
 y = sin(x/2);
 printf("y=sin(%.2f/2)=%.2f\n",x,y);

 a = pow(-1,k)*pow(x,2*k+1)/(1.);
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<3){
  k++;
  a = a * (-1) *x*x / ((2*k)*(2*k+1));
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
  }
}
=====================
int main(){
  double x,y,a,S;;
  int k=0;
  printf("Ievadiet x vērtību: ");
  scanf("%d", &x);
  
  y=sin(x/2);
  printf("y=sin(%.2f/2)=%.2f\n",x,y);
  
  a = pow(-1,k)*pow(x,2*k+1)/(/*((2*k+1)!)*/*pow(2,2*k+1));
  S = a;
  while(k<A){
    if((k==(A-1))||(k==A))printf("%d. a = %e\n",k,a);
    if(k==A)printf("f(x) rezultāts aprēķinot ar Teilora rindu:\nsin(%.2f/2)=%.2f\n",x,S)
  }
}
```
Comments about code  

### Result
```
<<vieta rezultātam>>
```

### Analysis
Comments about results  

### Figures
