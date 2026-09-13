#include<stdio.h>
int main(){
int people,weight;
printf("Enter people: \n");
scanf("%d",&people);

printf("Enter total weight: \n");
scanf("%d",&weight);

if(people>10){
   printf("Elevator deny entry due to exceeding the people limit \n");
}
else if(weight>1000){
   printf("Elevator deny entry due to overweight \n");
}else{
   printf("Elevator can operate normally");
}
   return 0;
}
