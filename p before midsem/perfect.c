#include<stdio.h>
void main(){
 int n,i,p,sum=0;
 printf("enter the value to e checked");
 scanf("%d",&n);
 p=n;
 for(i=1;i<=n/2;i++)
 if(n%i==0){
     sum +=i;
 }
if(sum==p)
printf("perfect number");
else
printf("not perfect");
}