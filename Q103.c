/* Q103: Find the pivot index of an array where left and right sums are equal. */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,left=0;
    for(int i=0;i<n;i++){scanf("%d",&arr[i]); sum+=arr[i];}
    for(int i=0;i<n;i++){
        if(left==sum-left-arr[i]){printf("%d\n",i); return 0;}
        left+=arr[i];
    }
    printf("-1\n");
    return 0;
}