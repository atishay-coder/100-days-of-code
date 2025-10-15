/* Q105: Find the majority element that appears more than n/2 times in an array. */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int count=0,maj=arr[0];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++) if(arr[j]==arr[i]) c++;
        if(c>n/2){maj=arr[i]; count=1; break;}
    }
    if(count) printf("%d\n",maj);
    else printf("-1\n");
    return 0;
}