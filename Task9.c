#include<stdio.h>
int main(){
float bill,discount = 0, final;
int hour,member;
printf("Enter bill:");
scanf("%f",&bill);
printf("Enter hour (15-17) : ");
scanf("%d",&hour);
printf("Member ? (1-yes,0-no):");
scanf("%d",&member);
if(hour>=15 && hour<=17){
   discount=discount + 20;
}
if(member==1){
discount=discount + 10;
}
if(discount>25){
   discount=25;
}
final = bill-(bill*discount/100);
 printf("Discount = %.0f\n", discount);
 printf("Payable Bill = Rs. %.2f", final);

   return 0;
}
