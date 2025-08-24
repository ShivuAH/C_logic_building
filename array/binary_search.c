#include<stdio.h>
int main(){
    int a[]={2,6,11,12,14,17,21,23,27,47,53,61,71};
    int n=sizeof(a)/sizeof(a[0]);
    int left=0, right=n-1, mid , key=17;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==key){
            printf("%d\n",mid);
            return 0;
        }else if(a[mid]>key){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    printf("-1\n");
    return 0;
}