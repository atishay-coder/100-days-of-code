/* Q79: Perform diagonal traversal of a matrix. */
#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&mat[i][j]);
    for(int d=0;d<r+c-1;d++){
        for(int i=0;i<r;i++){
            int j=d-i;
            if(j>=0 && j<c) printf("%d ",mat[i][j]);
        }
    }
    return 0;
}