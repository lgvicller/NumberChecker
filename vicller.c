include <stdio.h>
#include <string.h>
int main (){
    int number;
    char choice[10];
    do{

    printf("Enter any number: ");
    scanf("%d", &number);
        int number;
    if (number % 2 == 0){
        printf("%d is an even number.", number);
    }else{
        printf("%d is an odd number.", number);
    }
    printf("Do you want to check another number? (y/n): ");
    scanf(" %s", choice);

    }while(strcmp(choice, "yes") == 0);
    printf("Thank you for using the program!");

  
    return 0;
}