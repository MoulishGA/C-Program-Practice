#include<stdio.h>
int main()
{
int l,w,t,i;
printf("This is a program to reduce the sheet length and width; \n");
printf("Enter the Lenth of initial sheet: \n");
scanf("%d",&l);
printf("Enter the Width of initial sheet: \n");
scanf("%d",&w);
for (i=0;i<9;i++)
{
printf("\n A%d: %d x %d",i,l,w);
t=l;
l=w;
w=l/2;
}
return (0);
}
