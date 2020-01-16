# Laboratory work Nr.2. - roots - report

## Theory
Theory  

### Code
```
#include<stdio.h>
#include<math.h>

float mod_sin(float x, float A){
 return sin(x/2)-A;}

void main(){
 float a,x,delta_x,b,y,A;
 a = 0;
 b = 2*M_PI;

 printf("Ievadi A vērtību sekojošam vienādojumam: sin(x/2)=A\n");
 scanf("%f",&A);
 x = a;
 delta_x = 0.1;
 printf("\tx\ty\n");
 while(x<b)
 {
 printf("%10.1f%10.1f\n",x,mod_sin(x,A));

 x += delta_x;
 }
}
```
Comments about code  

### Result
```
Hello, World!
```

### Analysis
Comments about results  

### Figures
