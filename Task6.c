#include<stdio.h>
int main(){
int plan,min,bill;
printf("Enter plan: \n");
scanf("%d",&plan);

printf("Enter minute: \n");
scanf("%d",&min);

switch(plan){
   case 1:
   bill=500 + (min>1000 ? (min-1000)*2 : 0);
   break;
   case 2:
   bill=800 + (min>2000 ? (min-2000)*2 : 0);
   break;
   case 3:
   bill=1200;
   break;
   case 4:
   bill=min;
   break;
   
   default:
   printf("Invalid plan");
}
printf("Total bill= Rs. %d", bill);
   return 0;
}
