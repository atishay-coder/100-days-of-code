/* Q70: Rotate an array to the right by k positions. */
#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++) temp[i]=arr[n-k+i];
    for(int i=n-1-k;i>=0;i--) arr[i+k]=arr[i];
    for(int i=0;i<k;i++) arr[i]=temp[i];
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}