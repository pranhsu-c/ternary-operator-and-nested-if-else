#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("value of A=");
	scanf("%d",&a);
	printf("value of B=");
	scanf("%d",&b);
	printf("value of C=");
	scanf("%d",&c);
	printf("value of D=");
	scanf("%d",&d);
	printf("value of E=");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
		  if(a>d)
		  {
		  	if(a>e)
		  	{
		  	  printf("A is maximum");	
			}
			else
			{
			  printf("E is maximum");
			}
		  }	
		 else
		  {
			 if(d>e)
			 {
			   printf("D is maximum");	
			 }
			 else
			 {
			 	printf("E is maximum");
			 }
		  }
		}
		else
		{
		  if(c>d)
		  {
		  	if(c>e)
		  	{
		  	printf("C is maximum");	
			}
			else
			{
			printf("E is maximum");
			}
		  }	
		  else
		  {
		  	if(d>e)
		  	{
		  		printf("D is maximum");
			  }
			  else
			  {
			  	printf("E is maximum");
			  }
		  }
		}
		
	}
	else
	{
	 if(b>c)
	 {
	 	if(b>d)
	 	{
	 	  if(b>e)
		   {
		   	printf("B is maximum");
		   }	
		   else
			{
			   	printf("E is maximum");
			}
		}
		else
		{
		 if(d>e)
		 {
		   printf("D is maximum");	
		 }
		 else
		 {
		 printf("E is maximum");	
		 }
		
		}
	 }
	 else
	 {
	 	if(c>d)
	 	{
	 	 if(c>e)
		  {
		  printf("C is maximum");	
		  }	
		  else
		  {
		  	printf("E is maximum");
		  }
		}
		else
		{
		 	if(d>e)
		 	{
		 	printf("D is maximum");	
			 }
			 else
			 {
			 printf("E is maximum");	
			 }
		}
		 
		 
		 
	 }
	 
	}
	
	
}
	

