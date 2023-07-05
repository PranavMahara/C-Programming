#include <stdio.h>

int main() {
    int te,t;
    scanf("%d",&te);
    for(t=0;t<te;t++){

        int x;
        scanf("%d",&x);
        if(x%10==0)
            printf("%d\n",0);
        else if(x%5==0 && x%10!=0)
            printf("%d\n",1);
        else
            printf("%d\n",-1);
    }
	return 0;
}

