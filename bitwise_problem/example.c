// #include<stdio.h>
// int main (){
//     int count=0;
//     int n=12;
//     for(int i=1;n>0;i++){
//         if(n%2==1){
//             count++;
//         }
//         n=n/2;
//     }
//     printf("%d",count);

//     return 0;
// }




// #include<stdio.h>
// int main (){
//     int n=2, k=3, r=0, count=0;
//     for(int i=1;n>0;i++){
//         r=n%2;
//         count++;
//         n=n/2;
//         if(k==count){
//             break;
//         }
       
//     }if(count<k){
//         printf("Unset bit\n");
//     }else if(r==1){
//             printf("Bit is set\n");
//         }else{
//             printf("Bit is unset\n");
//         }

//     return 0;
// }



// #include<stdio.h>
// int main (){
//     int n,k;
//     scanf("%d%d",&n,&k);
//     if((n>>(k-1))==1){
//         printf("Bit set\n");
//     }else{
//         printf("Unset bit\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     if((n&(n-1))==0){
//         printf("Yes\n");
//     }else{
//         printf("NO\n");
//     }
    
//     return 0;
// }





#include<stdio.h>
int main (){
    int n=36;
    printf("%d",~n);
    
    return 0;
}