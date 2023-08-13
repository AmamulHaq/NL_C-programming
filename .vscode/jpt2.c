#include <stdio.h>
#include <math.h>
int square(int a);
int circle(int r);
int rectangle(int a,int b);
int main(){
int a,r,b;
printf("Enter length a, breadth b and radius r:");
scanf("%d%d%d",&a,&b,&r);

square(a);
circle(r);
rectangle(a,b);

return 0;}

int rectangle(int a,int b){
printf("Area of rectangle is :%d",a*b);}

int circle(int r){
printf("Area of circle is :%f",3.1415*r);}

int square(int a){
printf("Area of square is :%d",a*a);}

