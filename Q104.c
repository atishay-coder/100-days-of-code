/* Q104: Find the pivot integer x such that sum(1..x) == sum(x..n). */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(sum==total-sum+i){printf("%d\n",i); return 0;}
    }
    printf("-1\n");
    return 0;
}