/* Q101: Write a program to print the first and last occurrence of a target in a sorted array. */
#include <stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1) first=i;
            last=i;
        }
    }
    printf("%d %d\n",first,last);
    return 0;
}