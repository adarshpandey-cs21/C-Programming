#include<stdio.h>
void main(){
    int a,b,i, pow=1;
    printf("Enter the base: ");
    scanf("%i",&a);
    printf("Enter the exponential value: ");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        pow = pow*a;
    }
    printf("The exponential value of %d raised to the power %d is %d",a,b,pow);
}