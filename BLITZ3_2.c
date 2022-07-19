#include <stdio.h>

int main(void) {
	int t,n,x,y,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d %d",&n,&x,&y);
	    int time = 2*(180+n);
	    int elap = x+y;
	    int total = time - elap;
	    printf("%d\n",total);
	}

	return 0;
}

