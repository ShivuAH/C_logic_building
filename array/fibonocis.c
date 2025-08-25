#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)
    printf("0\n");
    else if(n==2)
    printf("1\n");
    else{
        int first=0, second=1,third;
        for(int i=1;i<=n-2;i++){
            third=first+second;
            first=second;
            second=third;
        }
        printf("%d\n",third);
    }
    return 0;
}