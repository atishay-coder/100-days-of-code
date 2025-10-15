/* Q86: Check if a string is a palindrome. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int i,len=0,flag=1;
    while(str[len]!='\0') len++;
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){flag=0; break;}
    }
    printf("%d\n",flag);
    return 0;
}