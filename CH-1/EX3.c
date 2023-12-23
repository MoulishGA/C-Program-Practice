#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5;
float agm,per;
printf("This is the Program to Calculate Arrgegate Mark and Percentage of a Student for the Marks Obtained in 5 Subjects \n");
printf("Enter the English Mark: ");
scanf("%d",&s1);
printf("Enter the Tamil Mark: ");
scanf("%d",&s2);
printf("Enter the Computer Mark: ");
scanf("%d",&s3);
printf("Enter the Social Mark: ");
scanf("%d",&s4);
printf("Enter the Science Mark: ");
scanf("%d",&s5);
if (s1 && s2 && s3 && s4 && s5 <=100)
{
agm=s1+s2+s3+s4+s5;
printf("The Aggregate Marks Obtained in 5 Subjects is : %.2f \n",agm);
per=agm/500*100;
printf("The Percentage Obtained is : %.2f ",per);
}
else printf("Enter the Vaild mark: ");
}
