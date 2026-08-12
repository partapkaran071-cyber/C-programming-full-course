#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    int m;
    printf("enter the number of coloumn\n");
    scanf("%d",&m);

    int i, j;

    for(i = 0; i < n; i++){
        for ( j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}