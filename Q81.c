/* Q81: Count characters in a string without using built-in length functions. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++) count++;
    printf("%d\n",count);
    return 0;
}