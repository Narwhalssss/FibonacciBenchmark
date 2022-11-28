#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"


int main(void){

    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("The Fibbonaci(iterative) number for %d = %d\n", N, fibonacciIterative(N));
    printf("The Fibbonaci(recursive) number for %d = %d\n", N, fibonacciRecursive(N));

    return 0;

}