//Sum of the digit

// #include<stdio.h>
// void sum_of_digit(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     sum_of_digit(n);
//     return 0;
// }
// void sum_of_digit(int n){
//     int sum=0;
//     while(n>0){
//         sum+=n%10;
//         n=n/10;
//     }
//     printf("Sum of the digit: %d\n",sum);
    
// }


//Reverse of the number using function
#include<stdio.h>
int reverse(int n);
int main(){
    int n;
    scanf("%d",&n);
    int c=reverse(n);
    printf("Reverse number: %d\n",c);
    return 0;
}
int reverse(int n){
    int reverse=0;
    while(n>0){
    reverse=reverse*10+n%10;
    n=n/10;
    }
    return reverse;    
}
//output:123
//Reverse number: 321