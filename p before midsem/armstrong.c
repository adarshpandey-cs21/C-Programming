#include <stdio.h>
#include<math.h>
void main()
{
    int n,m,counter=0,l,sum=0,last_var;
    printf("enter the number to be checked\n ");
    scanf("%d\n",&n);
    l=m=n;
   
    while(n>0){
        n=n/10;
        counter+=1;
    }
   // printf("%d",counter);
    while(m>0){
        last_var=m%10;
        sum=sum+pow(last_var,counter);
        m/=10;

    }
    if(sum==l)
    printf("armstrong");
    else
    printf("not armstrong");

     
}