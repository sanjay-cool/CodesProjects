#include <stdio.h>
#include <math.h>

int main(void) {
	int t,n,x,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d",&n,&x);
	    if(n<=x){
	        printf("0\n");
	    }
	    else {
	    double num=(double)(n-x)/4;
	    int res=ceil(num);
	    printf("%d \n",res);
	    }
	    }
	    
	
	return 0;
}

