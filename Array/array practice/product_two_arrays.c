#include<stdio.h>
void main(){
    int n,i,m;
    printf("Enter the size of the first array:  ");
    scanf("%d",&n);

    int a[n];
    printf("Please enter the elements of the array:  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of the second array:  ");
    scanf("%d",&m);

    int b[m],c[m];

    printf("Please enter the elements of the array:  ");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    if(m==n){
        for(i=0;i<n;i++){
            c[i] = a[i]*b[i];
        }
        printf("The product of both the array is: ");
        for(i=0;i<n;i++){
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    else{
        printf("The array are of different size and thus cannot be multiplied");
    }
}