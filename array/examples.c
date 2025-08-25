// #include<stdio.h>
// int main(){
//     int a[5];
//     a[0]=1;
//     a[1]=2;
//     printf("%d",sizeof(a[0]));
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a[5];
//   for(int i=0;i<5;i++){
//     scanf("%d",&a[i]);
//   }

//   for(int i=0;i<5;i++){
//     a[i]++;
//   }
//   for(int i=0;i<5;i++){
//     printf("%d\t",a[i]);
//   }
//     return 0;
// }



// #include<stdio.h>
// int main(){
    
//     int n;
//     printf("Enter size of array: \n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter array of the element\n");
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=a[i];
//   }
//   for(int i=0;i<n;i++){
//     printf("%d\t",a[i]);
//   }
// printf("\n%f\n",sum*1.0);
//     return 0;
// }



// #include<stdio.h>
// int main(){
    
//     int n;
//     printf("Enter size of array: \n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter array of the element\n");
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   int even=0, odd=0;
//   for(int i=0;i<n;i++){
//     if((a[i]&1)==1){
//         odd++;
//     }else{
//         even++;
//     }
//   }printf("Even : %d\n",even);
//     printf("Odd :%d\n",odd);
  

//     return 0;
// }



// #include<stdio.h>
// int main(){ 
//     int a[]={123,121,4334,261,656};
//     int s=sizeof(a)/sizeof(a[0]);
// for(int i=0;i<s;i++){
//     int temp=a[i];
//     int reverse=0;

// while (a[i]>0)
// {
//     reverse=reverse*10+a[i]%10;
//     a[i]=a[i]/10;
// }

// if(reverse==temp)
// printf("The %d is palindrome \n",temp);

// }
// return 0;
// }


// #include<stdio.h>
// int main(){ 
//     int a[]={10,5,17,6,4,8,11,13};
//     int s=sizeof(a)/sizeof(a[0]);
// for(int i=0;i<s;i++){
// int flag =1;
// for(int j=2;j<a[i];j++){
//     if(a[i]%j==0){
//         flag=0;
//         break;
//     }
// }
// if(flag==1){
//     printf("%d\n",a[i]);
// }

// }return 0;
// }



// #include<stdio.h>
// int main(){ 
//     int a[]={5,2,3,1,6};
//     int s=sizeof(a)/sizeof(a[0]);
//     int key=10;

//     for(int i=0;i<s;i++){
//         if(key==a[i]){
//         printf("Index of the number: %d\n",i);
//         return 0;
//     }
//     }
//         printf("-1\n");
    


// return 0;
// }


// #include<stdio.h>
// int main(){ 
//     int a[]={121,4334,656};
//     int s=sizeof(a)/sizeof(a[0]);
// for(int i=0;i<s;i++){
//     int temp=a[i];
//     int reverse=0;

// while (a[i]>0)
// {
//     reverse=reverse*10+a[i]%10;
//     a[i]=a[i]/10;
// }

// if(reverse==temp){
// printf("The %d is palindrome \n",temp);

// }else{
//     printf("No\n");
//     return 0;
// }
// }
// printf("Yes\n");
// return 0;
// }



#include<stdio.h>
int main(){ 
    int a[]={121,4334,123,656};
    int s=sizeof(a)/sizeof(a[0]);
    int flag=1;
for(int i=0;i<s;i++){
    int temp=a[i];
    int reverse=0;

while (temp>0)
{
    reverse=reverse*10+temp%10;
    temp=temp/10;
}

if(reverse!=a[i]){
    flag=0;
    break;

}
}
printf("%d\n",flag);
return 0;
}