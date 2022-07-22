#include <stdio.h>

int main(void) {
	int t,n,m,k;
	scanf("%d",&t);
	for(int i =1;i<=t;i++){
	    scanf("%d %d %d ",&n,&k,&m);
	    if(n<(m*k)){
	        printf("1\n");
	    }
	    else if(n%(k*m)==0){
	        printf("%d\n",n/(k*m));
	    }
	    else if(n%(k*m)>0){
	        printf("%d\n",n/(k*m)+1);
	    }
	}
	
	
	return 0;
}

