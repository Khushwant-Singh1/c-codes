/*
Also called jump statement in c
 Used to transfer program control to a predefined label
 Its use is avoided since it causes confusion for the fellow programmers in understanding the code.
 Goto statement is preferable when we need tp break multiple loops using single statements at the same time.

*/

#include <stdio.h>
int main(){
//    label:
//    printf("we are inside label");
//    goto end;
//    printf("Hello world");
//    goto label;
//    end:
//    printf("We are at end");

int num;
for(int i = 0 ; i<9;i++){
    printf("%d\n",i);
    for(int j = 0 ; j<9 ; j++){
        printf("Enter the number. enter 0 to exit\n");
        scanf("%d",&num);
        if (num ==0){
            goto end;
        }
    }

}

    end:

}