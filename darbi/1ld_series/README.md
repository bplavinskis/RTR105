# Laboratory work Nr.1. - Taylor series - report

## Theory
      
f(x)=sin(x/2)
      
      500
    -------
     \             k    2k+1
      \        (-1)  * x
f(x) = |      --------------------
      /                   2k+1
     /         (2k+1)! * 2
    -------
      k=0
      
           (-1)
R = --------------------
            k
            

### Code
```
#include<stdio.h>

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
