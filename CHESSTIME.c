#include <stdio.h>

int main(void) {
	int t,n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d",&n);
	  int time = n*60;
	  int res = time/20;
	    printf("%d\n",res);
	}
	
	return 0;
}

