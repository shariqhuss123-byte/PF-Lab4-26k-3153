#include<stdio.h>
int main(){
float testScore,fscPercentage, combinedscore;
printf("Enter Test score: \n");
scanf("%f", &testScore);

printf("Enter fscpercentage: \n");
scanf("%f", &fscPercentage);
combinedscore=(testScore * 0.5) + (fscPercentage * 0.50);

printf("combinedscore = %.2f \n",combinedscore);
if(combinedscore>=80){
    printf("Admission in computer science \n");
}
else if(combinedscore>=80){
    printf("Admission in computer science \n");   
}
else if(combinedscore>=65 &&combinedscore<=79){
    printf("Admission in software engineering \n");
}
else if(combinedscore>=50 &&combinedscore<=64){
    printf("Admission in information technology \n");
}
else{
    printf("Rejected \n");
}


    return 0;
}
