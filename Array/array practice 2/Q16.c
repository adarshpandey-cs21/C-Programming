#include <stdio.h>
void main(){
    int n,i,j,temp=0;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array:  ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe Original array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }
    printf("\nThe sorted array in decending:  ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}