#include<stdio.h>
int main(){
int membershipType , slot;
float fee;
printf("Enter membership type (1-student , 2-Regular , 3-Senior Citizen):");
scanf("%d",&membershipType);
printf("Enter time slot (1-Morning,2-Evening)");
scanf("%f",&slot);
switch(membershipType){
    case1:fee=2000;break;  

    case2:fee=3500;break;

    case3:fee=2500;break;
    default: printf("Invalid membership type! \n"); 

} if(slot==1){
fee*=0.08;
}else if(slot!= 2){
   printf("Invalid slot");
}
printf("Final fee = Rs . %.2f",fee);
   return 0;
}
