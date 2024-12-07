#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));
    int random_number =rand()%100;
    // printf("The random number is : %d\n",random_number);
    int n;
    printf("Guess your number: ");
    scanf("%d",&n);
    int point=1;
    do 
    {
        
        if(n<random_number){
            printf("\033[31m Big number please : ");
            scanf("%d",&n);
        }
        else if(n>random_number){
            printf("\033[31m Small number please: ");
            scanf("%d",&n);
        } 
        point++;
        if(n==random_number){
            printf("\033[32m Your Number is Correct.\n");
            printf("Your number of guesses are %d",point);
        }
        
    } while (n!=random_number);
    
    

    return 0;
}