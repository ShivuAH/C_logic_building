#include<stdio.h>
#include<math.h>

int main(){
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if((a>b && a<c)||(a<b && a>c)){
    //     printf("%d",a);
    // }else if((b>a && b<c)||(b<a && b>c)){
    //     printf("%d",b);
    // }else{
    //     printf("%c",c);
    // }

    /*century years should be divisible by 400 and non century years by 4
    int year;
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0){
            printf("Leap year");
        }else{
            printf("Non leap year");
        }
    }else if ((year%4==0)&& (year%100!=00)){
        printf("Leap Year");
    }else {
        printf("Non leap year");
    }

    sir solution
    if((year%400==o)||(year%100!=0&&year%4==0))
    printf("Leap year");
    else
    printf("Non lear year");*/

    //Unit place
    // int a,b,Up;
    // scanf("%d%d",&a,&b);
    // a=a%10;

    // if(a==0||a==1||a==5||a==6){
    //     printf("Unit place %d",a);
    // }else if(a==2||a==8){
    //     Up=((6*(int)pow(a,b%4))%10);
    //     printf("Unit place is %d",Up);
    // }else if(a==4){
    //     Up=((6*(int)pow(a,b%2))%10);
    //     printf("Unit place is %d",Up);
    // }else if(a==3||a==7){
    //     Up=((1*(int)pow(a,b%4))%10);
    //     printf("Unit place is %d",Up);
    // }else if(a==9){
    //     Up=((1*(int)pow(a,b%2))%10);
    //     printf("Unit place is %d",Up);
    // }


//Swith cases

// int a=2;
// switch (a){
//     case 0:
//     printf("Balaji\n");
//     break;
//     case 1 :
//     printf("Shrushti\n");
//     break;
//     case 2 :
//     printf("Ranjita\n");
//     break;
//     default:
//     printf("Suchitra\n");


// Ternary Operators
// int n=0;
// n%2==0?printf("Even"):printf("Odd");
// int m=n==4?5:6;
// printf("%d",m);

//Increment and decrements

// int a=5;

// int b=++a;
// printf("%d%d",a,b);

// int b=a++;
// int c=++a;
// int d=a--;
// int e=--a;
// printf("%d%d%d%d%d",a,b,c,d,e);

// int a=1,b=4;
// if (a--||b--)
// printf("A");
// else
// printf("B");
// printf("%d%d",a,b); // compiller only check 1st condition if it is true then only checks second conditon

//Loops

// For Loop=

// for(int i=1; i<=100; i++){
// if(i%2==0)    
// printf("%d\n",i);
// }
// int n;
// scanf("%d",&n);
// for(int i=1;i<=10;i++){
//     int table=n*i;
//     printf("%d*%d=%d\n",n,i,table);
// }
//sum of n natural number
// int n;
// scanf("%d",&n);
// int sum=0;
// for(int i=1;i<=n;i++){
    
//     sum+=i;

// printf("First %d natural number sum is %d\n",n,sum);}

//Factorial
// int n;
// scanf("%d",&n);
// int fact=1;
// for(int i=1;i<=n;i++){
    
//     fact*=i;
// }
// printf("Factorial of %d is %d\n",n,fact);

// for(int i=1;i<=3;i++){
//     for(int j=1;j<=2;j++){
//         printf("%d%d\n",i,j);
//     }
// }

//Brake and continue
//  for(int i=1;i<=10;i++){
//     if(i==5)
//     break;
//     printf("%d\n",i);
// }

//  for(int i=1;i<=10;i++){
//     if(i==5)
//     continue;
//     printf("%d\n",i);
// }

//  for(int i=1;i<=3;i++){
//      for(int j=1;j<=3;j++){
//     if(i+j==3)
//     break;
//     printf("%d %d\n",i,j);
// }
// }

// while Loop

// int i=1;
// while (i<=10){
//     printf("%d\n",i);
//     i++;
// }

//Problem
// int n,count=0;

// scanf("%d",&n);
// while (n>0)
// {
//     n=n/10;
//     count++;
// }
// printf("Total number of digits %d\n",count);

// int n,sum=0;

// scanf("%d",&n);
// while (n>0)
// {
//     sum=sum+n%10;
//     n=n/10;
// }
// printf("sum of the  of digits %d\n",sum);



int n,reverse=0;

scanf("%d",&n);
int temp=n;
while (n>0)
{
    reverse=reverse*10+n%10;
    n=n/10;
}
// printf("sum of the  of digits %d\n",reverse);
if(reverse==temp)
printf("The number is palindrome \n");
else
printf("The number is not palindrome");














    return 0;
}