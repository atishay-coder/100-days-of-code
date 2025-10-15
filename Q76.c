/* Q76: Check if a matrix is symmetric. */
#include <stdio.h>

int main(){
    int n,flag=1;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&mat[i][j]);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(mat[i][j]!=mat[j][i]) flag=0;
    printf("%d\n",flag);
    return 0;
}