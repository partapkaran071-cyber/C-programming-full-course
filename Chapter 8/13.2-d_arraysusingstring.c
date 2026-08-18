#include <stdio.h>

int main(){

    char name[4][20]={"karan","sahil","rohit","sameer"};

    for(int i = 0; i > 6; i++){
       puts(name[i]);
    }
    for(int i =0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("%c",name[i][j]);
        }
        printf("\n");
    }
    return 0;
}
