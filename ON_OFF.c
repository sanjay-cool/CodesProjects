#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
    int t,i,j,c,n;
    char s[100],r[100];
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
	{
	    c=0;
	    scanf("%d",&n);
	    scanf("%s",s);
	    scanf("%s",r);
	    
	    for(j=0;j<n;j++)
	    {
	        if(r[j]!=s[j])
	        c++;
	    }
	    if(c%2==0)
	    printf("%d\n",1);
	    else
	    printf("%d\n",0);
	}
	
	return 0;
}

