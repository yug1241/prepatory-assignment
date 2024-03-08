#include<stdio.h>
int main()
{
int year;
printf("Enter the Year:");
scanf("%d",&year);

if(year%400==0)

printf("This is a Leap Year\n");

else if(year%100==0)
printf("This is not a Leap Year\n");

else if(year%4==0)

printf("This is Leap Yr\n");

else

printf("This is Non Leap yr\n");

return 0;
}
