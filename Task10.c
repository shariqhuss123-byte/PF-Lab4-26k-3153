#include<stdio.h>
int main(){
int heartrate;
float temperature;

printf("Enter heart rate:");
scanf("%d",&heartrate);
printf("Enter temperature : ");
scanf("%f",&temperature);

if(heartrate>120 || temperature>39){
   printf("Critical- Immedite attention \n");
}
else if(heartrate>=100 && heartrate<=120 && temperature>=37.5 && temperature<=39){
   printf("Urgent \n");
}
else{
   printf("Normal - wait on Queue");
}

   return 0;
}
