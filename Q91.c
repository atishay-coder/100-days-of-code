/* Q91: Remove all vowels from a string. */
#include <stdio.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int j=0;
    char res[1000];
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) res[j++]=c;
    }
    res[j]='\0';
    printf("%s\n",res);
    return 0;
}