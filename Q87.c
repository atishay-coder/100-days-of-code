/* Q87: Count spaces, digits, and special characters in a string. */
#include <stdio.h>

int main(){
    char str[1000];
    int spaces=0,digits=0,special=0;
    scanf(" %[^
]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ') spaces++;
        else if(str[i]>='0' && str[i]<='9') digits++;
        else special++;
    }
    printf("%d %d %d\n",spaces,digits,special);
    return 0;
}