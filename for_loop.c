/*syntax of for loop
for(start;stop;step){
code to be run
 }

Properties of start

 The expression represents the initialization of the loop variable.
 We can initialize more than one variable in start.
 start is optional.


Properties of stop

 It is a conditional expression. It checks for a specific condition to be satisfied. If it is not, the loop is terminated.
 It can have more than one condition. However, the loop will iterate until the last condition becomes false. Other conditions will be treated as statements.
 It is optional.
 Stop can perform the task of start and step. That is, we can initialize the variable as well as update the loop variable in stop itself.
 We can pass zero or non-zero value in stop. However, in C, any non-zero value is true, and zero is false by default.


Properties of steps

 Expression 3 is used to update the loop variable.
 We can update more than one variable at the same time.
 Expression 3 is optional.
 */


#include <stdio.h>
int main(){
    int i;
    for (i=0; i<5;i++){
        printf("%d\n",i);
    }
}
