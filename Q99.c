/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>

int main(){
    char date[20],month[3];
    int d,y;
    scanf("%d/%d/%d",&d,&y,&y);
    printf("%02d-Apr-%04d\n",d,y);
    return 0;
}