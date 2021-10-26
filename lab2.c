//
//  main.c
//  labb22
//
//  Created by Катерина ... on 12.09.2021.
//


#include<stdio.h>

#include<math.h>

int main()

{

double a,b,h,x,y,d,s;

int n, m;

printf("Vvedit zn a= "); scanf("%lf",&a);

printf("Vvedit zn b= "); scanf("%lf",&b);

printf("Vvedit zn h= "); scanf("%lf",&h);

printf("Vvedit zn d= "); scanf("%lf",&d);

for(x=a;x<=b;x=x+h)
{ n=0;s=0;m=20;
    do
{
    float first=m;
    for(int i=-1; i>(1-n); i--)
    {
        first=first*(m+i);
    }
int f=1;
for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    y=first/f;
    y=y*pow(x,n);
    s=s+y+1;
    n++;
}

while(fabs(y)>d);

printf(" x=%.2lf,s=%.2lf\n",x,s);
    

}
    return 0;
}
