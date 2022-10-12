#include <stdio.h>
int main()
{
    int i,city;

    printf("Enter the number cities of array\n ");
    scanf("%d", &city);
    int trump[city],biden[city];
    int twin=0,bwin=0;
    
    for (i = 0; i < city; i++)
    {
        printf("Enter the total votes trump get in city %d :\n",i+1);
        scanf("%d", &trump[i]);
    }
     for (i = 0; i < city; i++)
    {
        printf("Enter the total votes biden get in city %d :\n",i+1);
        scanf("%d", &biden[i]);
    }
    printf("list of votes Trump get in %d cities are:\n",city);
    for (i = 0; i < city; i++)
    {
        printf("%d ", trump[i]);
    }
    printf("\n");
    printf("list of votes Biden get in %d cities are:\n",city);
    for (i = 0; i < city; i++)
    {
        printf("%d ", biden[i]);
    }
    printf("\n");
    for(i=0;i<city;i++){

        if(trump[i]>biden[i]){
            twin++;
        }
        else if(biden[i]>trump[i]) {
    
            bwin++;
        }

    }
    printf("\n");
    if(twin>bwin){
        printf("Trump win");
    }
    else if(bwin>twin){
        printf("Biden win");
    }
    else{
        printf("Draw voting");
    }

}