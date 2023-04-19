#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("value of A=");
	scanf("%d",&a);
	printf("value of B=");
	scanf("%d",&b);
	printf("value of C=");
	scanf("%d",&c);
	
	(a>b)? (a>c)? printf("A is max"):printf("C is max")
	:(b>c)? printf("B is max"):printf("C is max");
}
