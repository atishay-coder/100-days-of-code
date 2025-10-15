/* Q102: Find the index of the smallest element greater than or equal to x in a sorted array (Ceil of x). */
#include <stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int index=-1;
    for(int i=0;i<n;i++){if(arr[i]>=x){index=i; break;}}
    printf("%d\n",index);
    return 0;
}