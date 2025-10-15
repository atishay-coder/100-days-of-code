/* Q64: Find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int freq[10]={0};
    if(n==0) freq[0]++;
    while(n){
        int d=n%10;
        freq[d]++;
        n/=10;
    }
    int max=0, digit=0;
    for(int i=0;i<10;i++){
        if(freq[i]>max){max=freq[i]; digit=i;}
    }
    printf("%d\n",digit);
    return 0;
}