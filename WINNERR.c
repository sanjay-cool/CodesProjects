#include <stdio.h>

int main(void) {
	int t,a,b,x,y;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&x,&y);
        //first Contestant
        int pen1,pen2;
        if(a>b){
            pen1=a;
        }
        else if(a<b){
            pen1=b;
        }
        else if(a==b){
            pen1=a;
            pen1=b;
        }
        else {
            printf("Input Error");
        }
        //Second Contestant
        if(x>y){
            pen2=x;
        }
        else if(x<y){
            pen2=y;
        }
        else {
            pen2=x;
            pen2=y;
        }
        //Winner decider
        if(pen1<pen2){
            printf("P\n");
        }
        else if(pen2<pen1){
            printf("Q\n");
        }
        else if(pen1==pen2){
            printf("TIE\n");
        }
        else {
            printf("Output Error");
        }
    }
	// your code goes here
	return 0;
}

