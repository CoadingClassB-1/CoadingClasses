#include <stdio.h>

int main(){
    int age;

    printf("Enter the age : ");
    scanf("%d", &age);

    if(age <= 15){
        printf("Small child");
    } 
    else if(age <= 18){
        printf("Young age");
    }
    else if(age <= 25){
        printf("Adult age");
    }
    else if (age <= 45){
        printf("Oldest man");
    }
    else{
        printf("Invalid age!!!!");
    }
}