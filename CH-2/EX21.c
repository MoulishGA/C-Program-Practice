#include<stdio.h>
int main()
{
int i,j,n,sum=0;
printf("Program to calculate sum of digits: ");
printf("\nEnter the 5 digit Number: ");
scanf("%d",&n);
i=n;
while(n>0){
j=n%10;
sum=sum+j;
n=n/10;
}
printf("\n The Sum of the Given %d is %d ",i,sum);
return 0;
}


