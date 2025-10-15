/* Q85: Reverse a string. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int i,len=0;
    while(str[len]!='\0') len++;
    for(i=len-1;i>=0;i--) printf("%c",str[i]);
    return 0;
}