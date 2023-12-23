#include<stdio.h>
int main(){
printf("This is a Program to Calculate Area and Perimeter of a Rectangle && Area and Circumference of a Circle \n");
float l,b,r;
printf("Enter the lenth of the rectangle: \n");
scanf("%f",&l);
printf("Enter the breadth of the rectangle: \n");
scanf("%f",&b);
printf("The Area of the Rectangle is %.2f \n",l*b);
printf("The Perimeter of the Rectangle is %.2f \n\n",2*(l+b));
printf("Enter the Radius of the Circle : \n");
scanf("%f",&r);
printf("The Area of the Circle is %.2f \n",3.14*(r*r));
printf("The Circumference of the Circle is %.2f ",2*3.14*(r*r));
return 0;
}
