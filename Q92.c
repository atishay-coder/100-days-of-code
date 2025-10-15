/* Q92: Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>

int main(){
    char str[1000];
    int freq[26]={0};
    scanf(" %[^
]",str);
    int found=-1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i]-'a']++;
            if(freq[str[i]-'a']==2){found=str[i]; break;}
        }
    }
    printf("%d\n",found);
    return 0;
}