#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1,i=0;
	double pi=0,n=1,term=1;
	
	while(fabs(term)>=1e-6)
	{
		i=i+1;
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.8f\n循环次数为%d",pi,i);
	return 0;
	
}
