#include<stdio.h>
void main(){
    int i,j,a,b;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==1||i==a||j==b||j==1){
                printf("%d ",j);
            }
            else    
                printf("  ");
        }
        printf("\n");
    }
}