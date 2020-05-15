#include<stdio.h>
int main(void)
{
   unsigned n;
   printf("%d",&n);
   if((n&(n-1))==0)
	   printf("%d is power of 2\n",n);
   else
	   printf("%d is not power of 2\n",n);
   return 0; 

}
