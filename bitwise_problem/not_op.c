// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int not;
//     printf("Not of the number is: %d\n",-(n+1));
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int not=~n;
//     int negative;
//     if((not>>31)==1){
//         negative=(~not)+1;
//         printf("The Not of the number is: %d",negative);
//     }else{
//         printf("The Not of the number is: %d",not);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//    printf("The NOT of the number is: %d\n",~n);
    
//     return 0;
// }



#include<stdio.h>
int main(){
    int n;
    int count=0, Not, actual_not;
    printf("Enter the number:");
    scanf("%u",&n);
    if(n>0){
        for(int i=1;i<=32;i++){
        n=n<<1;
        count++;
        if (n&(1<<31)){
            Not=~n;
            actual_not=Not>>count;
            printf("Not=%d\n",actual_not);
            break;
        }
        }
    }else if(n<0){
         for(int i=1;i<=32;i++){
        n=n<<1;
        count++;
        if ((n&(0<<31))==0){
            Not=~n;
            actual_not=Not>>count;
            printf("Not=%d\n",actual_not);
            break;
        }
        }
    }
    return 0;
}