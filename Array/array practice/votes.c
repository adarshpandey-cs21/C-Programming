/*
Voting results
The results will be checked for each state and the president
winning in most of the states would win in case of tie the number of 
votes will be counted.

*/
#include<stdio.h>
void main(){
 int i,tcount=0,bcount=0,tsum=0,bsum=0,trump[10],biden[10];
 printf("Put down all your votes\n");
 for(i=0;i<10;i++){
  printf("Enter the votes for Trump in city %d",i+1);
  scanf("%d",&trump[i]);
  tsum += trump[i];
  tcount++;
  printf("Enter the votes for Biden in city %d",i+1);
  scanf("%d",&biden[i]);
  bsum += biden[i];
  bcount++;
 }
 if (tcount>bcount)
  printf("Congratulations Trump won\n");
 else if(bcount>tcount)
  printf("Congratulations Biden won\n");
 else
  if (tsum>bsum)
   printf("Congratulations Trump won by total votes\n");
  else if(bsum>tsum)
   printf("Congratulations Biden won by total votes\n");
  else
   printf("It is a tie\n");
}
