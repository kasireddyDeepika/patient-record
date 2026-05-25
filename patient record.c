/*patient record using structure*/
#include<stdio.h>
int main()
{
struct patient_record
{
int patient_id;
char bloodgroup[10];
float temperature;
}p;
printf("\n enter patient_id:");
scanf("%d",&p.patient_id);
printf("\n enter bloodgroup:");
scanf("%s",&p.bloodgroup);
printf("\n enter temperature:");
scanf("%f",&p.temperature);
if (p.temperature>98.6)
{
printf("\n patient has fever!!");
printf("\n patient_id=%d",p.patient_id);
printf("\n bloodgroup=%s",p.bloodgroup);
printf("\n temperature=%f",p.temperature);
}
else
{
printf("\n patient does not have fever!!");
}
return 0;
}

