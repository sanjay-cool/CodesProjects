#include <stdio.h>

int main(void) {
	int t,ti1,p1,ti2,p2,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d %d %d",&ti1,&p1,&ti2,&p2);
	    int sum1 = ti1+p1;
	    int sum2 = ti2+p2;
	    if(sum1>sum2){
	        printf("%d\n",sum2);
	    }
	    
	    else {
	        printf("%d\n",sum1);
	    }
	    
	}
	return 0;
}

