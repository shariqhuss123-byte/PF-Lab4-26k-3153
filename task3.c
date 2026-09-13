#include<stdio.h>
int main(){
int accountType;
float balance,interest;
printf("Enter account type (1-saving , 2-current , 3-fixed deposit):");
scanf("%d",&accountType);

printf("Enter account balaance: Rs.");
scanf("%f",&balance);
switch(accountType){
    case 1:
    // saving account
    if(balance>100000){
        interest=balance*0.04;
    }
    else{
        interest=balance*0.02;
    }
    printf("Annual interest:Rs. %.2f\n",interest);
    break;
    case 2:
    // current account
    interest=0;
    printf("Annual interest:Rs. %.2f\n",interest);
    break;
    case 3:
    interest=balance*0.08;
     printf("Annual interest:Rs. %.2f\n",interest);
    break;
    default:
         printf("Invalid account type! \n");

}

    return 0;
}
