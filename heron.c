#include<stdio.h>
#include<math.h>
int main()
{
   float s1,s2,s3,s,area;
printf("Enter the first Value: \n");
scanf("%f",&s1);
printf("Enter the second Value: \n");
scanf("%f",&s2);
printf("Enter the third Value: \n");
scanf("%f",&s3);
s=(s1+s2+s3)/2;
area= sqrt(s*(s-s1)*(s-s2)*(s-s3));
printf("area of triangle by heron's formula: %f \n",area);
   return 0;
}
