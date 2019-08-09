#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float x,p,y;
 int k;
 scanf("%f %f",&x,&p);
 y=x;
 while((x>=0&&x<=1000)&&(p>=1&&p<=100))
 {
   if(k==0)
   break;
   else
   {
   k=floor(x-(p*x/100));
   x=k;
   y=y+x;
   }
  
 }
 printf("%f\n",y); 
 }
 
