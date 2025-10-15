/* Q100: Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf(" %[^
]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
        for(int j=1;i+j<=n;j++){
            for(int k=i;k<i+j;k++) printf("%c",str[k]);
            printf("\n");
        }
    return 0;
}