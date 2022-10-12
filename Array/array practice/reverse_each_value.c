/*
The following C programms demonstrates how we can take input from a user where the size of the
array is also declared by the user and reverse each value of the array.

Loop1: is used to take the input from the user a[i] where i is the position of the index.

Loop2: is used to print the values of the array a[i].

Loop3: is used to pull out each value and reverse it.

Loop4: is used to display the reveresed value of the rev_arr[] array
*/
#include<stdio.h>
void main(){
    int n,i,j=0,rev_arr[j],m,rem,rev=0;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in the array:  ");
    //loop1
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //loop2
    printf("The array created is as follows:  ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    //loop3
    for(i=0;i<n;i++){
        m  = a[i];
        rem = 0;
        rev = 0;
        while(m>0){
            rem = m%10;
            rev = (rev*10)+rem;
            m /=10;
        }
        rev_arr[j] = rev;
        j++;
    }

    //loop4
    printf("\n\n");
    printf("The array with all the values reversed is:  ");
    for(i=0;i<j;i++){
        printf("%d  ",rev_arr[i]);
    }

}