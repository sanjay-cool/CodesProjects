#include <stdio.h>

int main(void) {
	int num,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num);
	if(num%2==0 || num%7==0)
	{
		printf("Yes");
	}
	else
	{
		if(num-7>=0 && (num-7)%2==0)
		{
			printf("Yes");
		}
		else if(num-2>=0 && (num-2)%7==0)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	printf("\n");
	}
return 0;
}

