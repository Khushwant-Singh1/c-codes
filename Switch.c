#include <stdio.h>
int main(){
    int age, marks;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your marks:");
    scanf("%d",&marks);

    switch(age){
        case 3:
            printf("The age is 3\n");
            switch (marks) {
                case 45:
                    printf("Your marks are 45\n");
                default:
                    printf("Your marks are not 45\n");


            }
            break;

        case 13:
            printf("the age is 13\n");
            break;

        case 23:
            printf("The age is 23\n");
            break;



        default:
            printf("Nothing matched");
            break;
    }
}