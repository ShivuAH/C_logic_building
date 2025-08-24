#include<stdio.h>
int main(){
    // int n=68;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("%d",i);
            
    //     }
    //     printf("\n");
    // }


    // int n=68;
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("%d",j);
            
    //     }
    //     printf("\n");
    // }
    // int n=68;
    //   for(int i=65;i<=n;i++){
    //     for(int j=65;j<=n;j++){
    //         printf("%c",i);
            
    //     }
    //     printf("\n");
    // }

    //   int n=68;
    //   for(int i=65;i<=n;i++){
    //     for(int j=65;j<=n;j++){
    //         printf("%c",j);
            
    //     }
    //     printf("\n");
    // }


      int n=4;
      for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i);k++)
        printf(" ");
        for(int j=1;j<=i;j++){
            printf("*");
            
        }
        printf("\n");
    }


      
    //   for(int i=n;i>=1;i--){
    //     for(int k=1;k<=(n-i);k++)
    //     printf(" ");
    //     for(int j=1;j<=i;j++){
    //         printf("*");
            
    //     }
    //     printf("\n");
    // }

    
    //    int n=4;
      for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i);k++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++){
            printf("*");
            
        }
        printf("\n");
    }
    //  int n=4;
    //   for(int i=n;i>=1;i--){
    //     for(int k=1;k<=(n-i);k++)
    //     printf(" ");
    //     for(int j=1;j<=2*i-1;j++){
    //         printf("*");
            
    //     }
    //     printf("\n");
    // }

    //  int n=4;
      for(int i=2;i<=n;i++){
        for(int k=1;k<=(n-i);k++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++){
            printf("*");
            
        }
        printf("\n");
    }



    return 0;
}