/* Q96: Reverse each word in a sentence without changing the word order. */
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int start=0,len=strlen(str);
    for(int i=0;i<=len;i++){
        if(str[i]==' '||str[i]=='\0'){
            for(int j=i-1;j>=start;j--) printf("%c",str[j]);
            if(str[i]==' ') printf(" ");
            start=i+1;
        }
    }
    return 0;
}