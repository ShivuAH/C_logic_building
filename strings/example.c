//to convert capital letter to small and small letter to capital
#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n>=65&&n<97){
          int a=n+27+5;
        printf("%c\n",a);
    }else if(n>=97&&n<123){
        int a=n-32;
        printf("%c\n",a);

    }else{
        printf("Invalid Input\n");
    }
  
    return 0;
}
//OUTPUT=
//a
//A