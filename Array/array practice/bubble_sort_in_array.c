/* Bubble sort in of the array 
1. The bubble sort is a sorting array and one of the basic ways of sorting an array.
2. In this sorting method we start from first index i.e. 0 and compare it to adjacent index value
3. If the adjacent value is greater then they are swapped.
4. This process is repeated till the array is sorted in its own

Loop1: Elements in the array is taken
Loop2: Unsorted array is displayed
Loop3(Nested): Swapping the adjacent values of the unsorted array
Loop4: Displaying the sorted array 

*/
#include <stdio.h>
void main(){
    int n,i,j,temp=0;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array:  ");
    //Loop1
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //Loop2
    printf("\nThe un-sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

    //Loop3
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(a[i]<a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }

    //Loop4
    printf("\nThe sorted array:  ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}