# include <stdio.h>

int km_to_mile(int num){
    int miles;
    miles = num * 0.62;
    printf("%d Kilometer is equal to %d miles\n",num , miles);
}
int inches_to_feet(int num){
    int feet;
    feet = num / 12;
    printf("%d Inches is equal to %d feet\n", num , feet);

}

int cm_to_inches(int num){
    int  inches;
    inches = num / 2.54;
    printf("%d Centimeter is equal to %d Inches\n", num , inches);
}
int pound_to_kgs(int num){
    int kg;
    kg = num / 2.205;
    printf("%d Pound is equal to %d Kilogram\n", num , kg);
}
int inches_to_meters(int num){
    int meter;
    meter = num / 39.37;
    printf("%d Inches is equal to %d Meters\n", num , meter);


}
int main(){
    int input;

    printf("Here is the Units and Conversions\n**********************************\n");
    printf("Convert Kilometer to miles enter - 1\n------------------------------------\nConvert Inches to Feet enter - 2\n------------------------------------\nConvert Centimeter to Inches enter - 3\n------------------------------------\nConvert Pound to kilograms enter - 4\n------------------------------------\nConvert Inches to meters - 5\n------------------------------------\nFor exit enter 0\n------------------------------------\n");
//    printf("Enter your choice:");
//    scanf("%d", &input);
    while (1){
        printf("Enter your choice:");
        scanf("%d", &input);

        if (input == 1){
            int num;
            printf("Enter the value which you want to convert:");
            scanf("%d", &num);
            km_to_mile(num);
        }
        else if(input == 2){
            int num;
            printf("Enter the value which you want to convert:");
            scanf("%d",&num);
            inches_to_feet(num);
        }else if(input == 3){
            int num;
            printf("Enter the value which you want to convert:");
            scanf("%d",&num);
            cm_to_inches(num);
        }else if(input == 4){
            int num;
            printf("Enter the value which you want to convert:");
            scanf("%d",&num);
            pound_to_kgs(num);

        }else if(input == 5){
            int num;
            printf("Enter the value which you want to convert:");
            scanf("%d",&num);
            inches_to_meters(num);
        } else if (input == 0){
            break;
        }

    }




}