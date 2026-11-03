#include <stdio.h>
#include <string.h>
int main(){
    // Check if a number is even or nodd
    int number;
    char choice;
   do{
     
    printf("Enter any Number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("%Even Number!",number);
    }else{
        printf("%d odd number!",number);
    }

    printf("\nDo you want to check another number? (Y/N: )");
    scanf(" %s", choice);



    
    


   }while(strcmp(choice, "yes") == 0);
   printf("Thank you for using the program!");
   return 0;
}