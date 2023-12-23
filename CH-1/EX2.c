#include<stdio.h>
int main()
{
float km;
printf("PROGRAM TO CALCULATE KM TO FEET,INCHES,METER,CENTIMETER");
printf("ENTER THE KM : ");
scanf("%f",&km);
printf("The Convertions for given %.2f Kilometer are ;",km);
printf("\n%.2f in Feets",km*3280.84);
printf("\n%.2f in Inches",km*39370.079);
printf("\n%.2f in Meters",km*1000);
printf("\n%.2f in CentiMeter",km*100000);
return 0;
}
