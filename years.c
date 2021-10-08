#include<stdio.h>
int main()
{
int d,w,y;
printf ("enter the days = ");
scanf ("%d",&d);
y = d/365;
w = (d % 365)/7;
d = d- ((y*365) + (w*7));
printf (" d = %d\n",d);
printf ("  y= %d\n",y);
printf (" w = %d\n",w);
return 0;
}


