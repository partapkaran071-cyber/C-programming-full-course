#include <stdio.h>

int factorial(int);



// Factorial(5) = 1 X 2 X 3 X 4 X 5
// Factorial(4) = 1 X 2 X 3 X 4 
// Factorial(3) = 1 X 2 X 3 


// Factorial(n) =1 X 2 X 3 n-1 X n
int factorial (int n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}

    int main(){

        int a;
        printf("enter the number");
        scanf("%d",&a);
        printf("the factorial of %d is %d",a,factorial(a));
        return 0;
    }

    
