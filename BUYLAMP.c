#include <stdio.h>
#include <math.h>
int main(void) {
	int t,n,k,x,y,i,sub;
     sub = n-k;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d %d %d",&n,&k,&x,&y);
	    int sum2 = n-k;
	    if(sum2==0)
	    {
	        printf("%d\n",k*x);
	    }
	    else
	    {
	        if(x<=y)
	        {
                printf("%d\n",((n-k)*x)+(k*x));	        
	        }
	        else
	        {
	            printf("%d\n",((n-k)*y)+(k*x));
	        }
	    }
	    

	}
	return 0;
}

