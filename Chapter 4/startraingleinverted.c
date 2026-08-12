#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);

    int i, j;

    for(i = 1; i <= n; i++){
        for ( j = 1; j <=n+1-i; j++) //j=n+1-i        
        {
            printf("* ");
        }
        printf("\n");

    }

    return 0;
}