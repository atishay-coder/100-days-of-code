/* Q97: Print the initials of a name. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    if(str[0]!=' ') printf("%c",str[0]);
    for(int i=1;str[i]!='\0';i++) if(str[i-1]==' ' && str[i]!=' ') printf("%c",str[i]);
    printf("\n");
    return 0;
}