#include<stdio.h>
#include<math.h>
int main(){
    // for(int i=1000;i<=10000;i++){
    //     int temp=i, r=0;
    //     while (temp>0){
    //         r=r*10+temp%10;
    //         temp=temp/10;
    //     }
    //     if(r==i){
    //         printf("%d\n",r);
    //     }
        
        
    // }

    //Amstrong Number
    // int n, count=0,sum=0;
    // scanf("%d",&n);
    // int temp=n;
    // int real=n;
    // while(n>0){
    //     n=n/10;
    //     count++;
    // }
    // printf("%d\n",count);
    // for(int j=0;j<=count;j++){
    //     int ld=temp%10;
    //     sum=sum+pow(ld,count);
    //     temp=temp/10;
    // }
    //  if(sum==real){
    //         printf("Yes");
    //     }else{
    //         printf("No");
    //     }


    //A to B Amstrong number

    // int a,b, count=0,sum=0;
    // printf("Enter A value: \n");
    // scanf("%d",&a);
    // printf("Enter B value: \n");
    // scanf("%d",&b);

    // for(int i=a;i<=b;i++){
    // int temp=i;
    // int real=i;
    // while(i>0){
    //     i=i/10;
    //     count++;
    // }
    // for(int j=0;j<=count;j++){
    //     int ld=temp%10;
    //     sum=sum+pow(ld,count);
    //     temp=temp/10;

    //  }
    //  if(sum==real){
    //         printf("%d",a);
    //     }
    // }

//To check prime or not

// int n=27;
// int flag =1;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         flag=0;
//         break;
//     }
// }
// if(flag==1){
//     printf("Yes");
// }
// else{printf("No");

// }

//Prime number in between 2-100

// int a=2,b=100;

// for(int i=a;i<=b;i++){
//     int flag=1;

//     for(int j=2;j<i;j++){
//         if(i%j==0){
//             flag=0;
//         break;}
//     }
//     if(flag==1)
//     printf("%d\n",i);
// }

//Print Factors
// int n=100;

// for(int i=1;i<=n;i++){

//     if(n%i==0){
//         printf("%d\n",i);
//     }
// }



//To check wether the number is perfect or not

// int n=28;
// int sum=0;

// for(int i=1;i<=n;i++){
    

//     if(n%i==0){
//        sum+=i; 
//     }
// }
// if(sum/2==n){
//     printf("The number is %d is perfect",n);
// }
// else{
//     printf("Not perfect number");
// }

// int n,m;
// scanf("%d%d",&n,&m);

// for(int j=n;j<=m;j++){
//     int sum=0;
// for(int i=1;i<=j;i++){
//     if(j%i==0){
//        sum+=i; 
//     }
// }
// if(sum/2==j){
//     printf("%d\n",j);
// }
// }

return 0;
}
