#include<stdio.h>
int main(){
int fah,cel;
printf("This is the Program to Convert Fahrenheit to Celcious \n");
printf("Enter the Fahrenheit degree of your city :");
scanf("%d",&fah);
cel=(fah-32)*(0.5555555);
printf("The Celcious convertion for the given Fahrenheit is %.2f ",cel);
return 0;
}
