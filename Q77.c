/* Q77: Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

int main(){
    int n,flag=1;
    scanf("%d",&n);
    int mat[n][n],check[1000]={0};
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&mat[i][j]);
    for(int i=0;i<n;i++){
        if(check[mat[i][i]]){flag=0; break;}
        check[mat[i][i]]=1;
    }
    printf("%d\n",flag);
    return 0;
}