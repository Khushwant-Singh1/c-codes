# include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d" , &age);
    // this will print below line
    printf("You have entered %d as your age\n", age);
    if(age>=18){
        printf("you are eligible to vote!");
    }
    else if(age>10){
        printf("Your age is between 10 and 18!!");

    }
    else{ printf("yor cannot vote");

    }
}
