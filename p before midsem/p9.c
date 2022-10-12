#include<stdio.h>
void main(){
    int i,a,b,j;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if(i==a||j==1||i==j){
                printf("%d",j);
            }
            else
                printf("  ");
        }
        printf("\n");
    }

}