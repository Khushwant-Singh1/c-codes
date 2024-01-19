#include <stdio.h>

int main(){
    int a ;
    printf("Enter the number whose multiplication table you want to print: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n",a,i, a*i);

    }
    return 0;
}