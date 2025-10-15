/* Q65: Search in a sorted array using binary search. */
#include <stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int l=0,r=n-1,found=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){found=mid; break;}
        else if(arr[mid]<x) l=mid+1;
        else r=mid-1;
    }
    printf("%d\n",found);
    return 0;
}