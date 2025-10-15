/* Q98: Print initials of a name with the surname displayed in full. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int len=strlen(str),start=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '||str[i]=='\0'){
            if(start<i-1) printf("%c",str[start]);
            start=i+1;
        }
        if(str[i+1]=='\0'){
            for(int j=start;j<=i;j++) printf("%c",str[j]);
        }
    }
    printf("\n");
    return 0;
}