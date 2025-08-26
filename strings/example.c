//to convert capital letter to small and small letter to capital
// #include<stdio.h>
// int main(){
//     char n;
//     scanf("%c",&n);
//     if(n>=65&&n<97){
//           int a=n+27+5;
//         printf("%c\n",a);
//     }else if(n>=97&&n<123){
//         int a=n-32;
//         printf("%c\n",a);

//     }else{
//         printf("Invalid Input\n");
//     }
  
//     return 0;
// }
//OUTPUT=
//a
//A


//inbuilt function strlen

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="abcd";
//     int n;
//     n=strlen(str);
//     printf("%d\n",n);
//     return 0;
// }

//inbuilt function strcpy

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[]="Shivu";
//     char str2[5];
//     strcpy(str2,str1);
//     printf("%s\n",str2);
//     return 0;
// } 



//inbuilt function strcmp

#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="abc";
    char str2[]="abc";
    if(strcmp(str2,str1)==0){
        printf("Equal\n");
    }else{
        printf("Not equal\n");
    }
    
    return 0;
} 