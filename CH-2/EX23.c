#include<stdio.h>
#include<math.h>
int main(){
int s1,s2,s3;
float s,a;
printf("Enter the side 1: ");
scanf("%d",&s1);
printf("Enter the side 2: ");
scanf("%d",&s2);
printf("Enter the side 3: ");
scanf("%d",&s3);
s=(s1+s2+s3)/2;
a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
printf("The Area of a Triangle is: %.2f",a);
return 0;
}
