/*
Recursive functions or Recursion is a process when a function calls a copy of itself to work on a smaller problem.
Any function which calls itself is called recursive function.
This makes the life of programmer easy by dividing a given problem into easier
A termination condition is imposed on such functions to stop them executing copies of themselves forever
Any problem that can be solved recursively, can also be solved iteratively
*/


# include <stdio.h>
int factorial(int a){
    if (a ==1 ||a ==0){
        return 1;
    }
    else{
        return a * factorial(a - 1);
    }
}
int main(){
    int a, b;

    printf("Enter the number you want the factorial of: ");
    scanf("%d", &a);
    b = factorial(a);
    printf("The factorial %d is %d\n",a,b);
}