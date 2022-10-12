#include <stdio.h>
int main()
{
    int n,rem;
    printf("enter the number to check\n ");
    scanf("%d",&n);
    rem=n%2;
    switch(rem){
 case 0 : printf("even");
    break;
 default : printf("odd");



    }

     
}