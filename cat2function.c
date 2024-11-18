//fuction to check if number is even or odd
#include<stdio.h>
void checkEvenodd(int num){
    if(num %2==0){
        printf("The number is even. \n");
    }else{
        printf("The number is odd. \n");
    }
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenodd(number);
    return 0;
}