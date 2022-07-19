#include <stdio.h>

int main(void) {
	int t,x,y,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d",&x,&y);
	    int bag = x*y;
	    if(bag>=100){
	        int result = bag/100;
	        printf("%d\n",result);
	    }
	    else {
	        printf("0\n");
	    }
	}

	return 0;
}

