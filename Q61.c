/* Q61: Search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int n, key, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){printf("%d\n",i); found=1; break;}
    }
    if(!found) printf("-1\n");
    return 0;
}