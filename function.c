/*
 Functions are used to divide a large C program into smaller pieces
 A function can be called multiple times to provide reuse ability and modularity to the C program.
 Also called procedure or subroutine

 We can avoid rewriting same logic through functions.
 We can divide work among programmers using functions.
 We can easily debug a program using functions
 */


# include <stdio.h>

int sum(int a, int b){
    return a+b;
}

void print_star(int n){
    for (int i = 0 ; i <n ; i++){
       printf("%c", '*');}

}

int take_number(){
    int i;
    printf("\nEnter any number:");
    scanf("%d",&i);
    return i;
}
int main(){
    int a,b,c, d;
    a = 9;
    b = 81;
    c = sum(a,b);
    printf("The sum is = %d\n",c);
    print_star(7);
    d = take_number();
    printf("The number you have entered = %d", d);
    return 0;
}
