#include<stdio.h>
int main(){
int bp,da,hr,gross_salary;
printf("ENTER THE BASE PAY SALARY: ");
scanf("%d",&bp);
da=(bp/100)*40;
hr=(bp/100)*20;
gross_salary=bp-(da+hr);
printf("THE GROSS SALARY OF THE PERSON IS: %d ",gross_salary);
return 0;
}


