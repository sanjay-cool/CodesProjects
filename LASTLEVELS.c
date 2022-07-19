#include <stdio.h>

int main(void) {
	int t,x,y,z,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
	    scanf("%d %d %d",&x,&y,&z);
	    if(x<=3){
	        int time = x*y;
	        printf("%d\n",time);
	    }
	    else if(x>3){
	      if(x%3==0){
	          int br = x/3 - 1;
	          int tbr= br*z;
	          int total = (x*y) + tbr;
	          printf("%d\n", total);
	      }  
	      else {
	          int gap = x/3;
	          int ttime = x*y + gap*z;
	          printf("%d\n",ttime);
	      }
	    }
	}

	return 0;
}

