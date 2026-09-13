#include<stdio.h>
int main(){
int zone,speed,limit;
int fine = 1000;
printf("Enter zone type(1-school,2-highway,3-residential):");
scanf("%d",&zone);
printf("Enter drivers speed: ");
scanf("%d",&speed);

switch(zone){
   case 1:
   limit = 30;
   break;
   case 2:
   limit = 50;
   break;
   case 3:
   limit = 100;
   break;
   default:
   printf("Invalid zone \n");
   return 0;

}
if(speed>limit){
   if(speed>limit+20){
      fine=fine*2;
      
   }
    printf("FINE = Rs. %d",fine);  
}else{
   printf("No violation \n");
}
   return 0;
}
