/* Q95: Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

int main(){
    char s1[1000],s2[1000];
    scanf(" %[^
]",s1);
    scanf(" %[^
]",s2);
    strcat(s1,s1);
    printf("%d\n",strstr(s1,s2)!=NULL);
    return 0;
}