#include <stdio.h>

int main(void) {
int t,x,y,i;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&x,&y);
    if(x>=y){
        printf("YES\n");
    }
    else 
    printf("NO\n");
}
	return 0;
}

