#include<stdio.h>
int main()
{
int i,j,n,reverse=0;
printf("Program to calculate reverse of digits: ");
printf("\nEnter the 5 digit Number: ");
scanf("%d",&n);
i=n;
while(n>0){
j=n%10;
reverse=reverse*10+j;
n=n/10;
}
printf("\n The Reverse of the Given %d is %d ",i,reverse);
return 0;
}
