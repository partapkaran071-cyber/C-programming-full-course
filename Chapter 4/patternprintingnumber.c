#include <stdio.h>
int main(){

    int n;
    printf("enter the number of row ");
    scanf("%d",&n);

    int m;
    printf("enter the number of column ");
    scanf("%d",&m);

    for(int i = 1; i<=n; i++){
        for(int i = 1; i<=n; i++){
        printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}