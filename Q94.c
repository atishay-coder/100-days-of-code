/* Q94: Find the longest word in a sentence. */
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000],word[1000];
    scanf(" %[^
]",str);
    int maxlen=0,j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){word[j++]=str[i];}
        if(str[i]==' '||str[i+1]=='\0'){
            word[j]='\0';
            if(j>maxlen) maxlen=j;
            j=0;
        }
    }
    printf("%d\n",maxlen);
    return 0;
}