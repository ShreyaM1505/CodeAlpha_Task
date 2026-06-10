#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d" ,&a);
     int b;
    printf("Enter b:");
    scanf("%d" ,&b);
    int result;
    char ch;
    printf("Enter operatin you have to perform:");
    scanf(" %c" ,&ch);
    switch(ch){
        case '+':            // this case will do addition
        result=a+b;
        break;
         case '-':
        result=a-b;         // this case will do substraction
        break;
         case '*':
        result=a*b;         // this case will do multiplication
        break;
         case '/':
        result=a/b;        // this case will do division
        break;
        default:
        printf("Invalid operator!");
    }
    printf("%d %c %d=%d" ,a ,ch ,b ,result);
    
}