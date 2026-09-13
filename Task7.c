#include<stdio.h>
int main(){
int policy,age;
float claim,approved;
printf("Enter policy status (1/0): \n");
scanf("%d",&policy);

printf("Enter vehicle age: \n");
scanf("%d",&age);

printf("Enter claim ammount:");
scanf("%f",&claim);
if(policy==0 || age>15 || claim>500000){
   printf("Claim rejected \n");
}
else if(age>=10){
   printf("Approved claim = Rs. %.2f", claim * 0.5);
}
else{
   printf("Approved claim = Rs.%.2f", claim);
}
   return 0;
}
