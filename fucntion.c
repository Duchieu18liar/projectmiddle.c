#include "function.h"
#include <stdio.h>
int insole(int n){
    printf("Nhap so n: \n");
    scanf("%d", &n);
    for (int i = 1; i<= n; i+=2) {
        printf("%d", i);
 
    } 
 printf("\n");
 return 0;
}