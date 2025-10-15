/* Q93: Check if two strings are anagrams of each other. */
#include <stdio.h>

int main(){
    char s1[1000],s2[1000];
    int freq[256]={0};
    scanf(" %[^
]",s1);
    scanf(" %[^
]",s2);
    for(int i=0;s1[i]!='\0';i++) freq[(int)s1[i]]++;
    for(int i=0;s2[i]!='\0';i++) freq[(int)s2[i]]--;
    int flag=1;
    for(int i=0;i<256;i++) if(freq[i]!=0){flag=0; break;}
    printf("%d\n",flag);
    return 0;
}