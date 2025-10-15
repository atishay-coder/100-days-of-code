/* Q83: Count vowels and consonants in a string. */
#include <stdio.h>

int main(){
    char str[1000];
    int vowels=0,consonants=0;
    scanf(" %[^
]",str);
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if((c>='a' && c<='z')||(c>='A' && c<='Z')){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U') vowels++;
            else consonants++;
        }
    }
    printf("%d %d\n",vowels,consonants);
    return 0;
}