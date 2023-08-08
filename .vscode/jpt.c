#include <stdio.h>
#include <math.h>
int main(){

int n;
printf("enter number:");
scanf("%d",&n);
int sum=0;
for (int i=1;i<=n;i++){
printf("%d\n",i);
sum=sum+i;}
printf("\nsum is %d\n",sum);

for (int j=1;j<=10;j++){printf("table is %d\n",n*j);}

int fact=1;
for (int i=1;i<=n;i++){fact=fact*i;}
printf("factorial is %d\t",fact);


for(int i=5;i<=50;i++)
{ if(i%2==0){continue;}
printf("%d\n",i);}

for(int i=5;i<=50;i++){
if(i%2!=0){printf("%d\t",i);}
}

for (int i=10;i>=1;i--){printf("reverse table is %d\n",n*i);}
int sum=0;
for (int i=5;i<=50;i++){
    sum=sum+i;
}printf("\nsum is %d\n",sum);

return 0;}