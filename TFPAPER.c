#include <stdio.h>

int main(void) {
	int t,n,k,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d",&n,&k);
	    int bobres = n-k;
	    printf("%d\n",bobres);
	}
	return 0;
}

