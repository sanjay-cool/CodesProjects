#include <stdio.h>

int main(void) {
	int a,b,c,x;
	scanf("%d %d %d %d",&a,&b,&c,&x);
    if(x==a||x==b||x==c){
        printf("YES");
    }
    else {
        printf("NO");
    }
	return 0;
}

