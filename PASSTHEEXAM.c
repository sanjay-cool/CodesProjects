#include <stdio.h>

int main(void) {
	int t,i,a,b,c,res;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d %d",&a,&b,&c);
	    int total = a+b+c;
	 if(a>=10 && b>=10 && c>=10 && total>=100)
	   printf("PASS\n");
	   else
	   printf("FAIL\n");
	
	}
	return 0;
}

