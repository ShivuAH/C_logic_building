// // 
// Given a positive integer x and an array arr of positive integers. We need to find the farthest index at which x is present. If any occurrence of x doesn't exist, then return -1.

// Examples:

// Input: arr[] = [7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7] and x = 7
// Output: 11
// Explanation: The last index contains value 7.
// Input: arr[] = [1, 2, 2]
// Output: 1
// Expplanation: The farthest index which contains value x is 1.

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int a[] = {5,2,3,1,6,1};
//      int key ;
//      scanf("%d",&key);
//     int n = sizeof(a)/sizeof(a[0]);
//         for(int i=n;i>=key;i--)
//         {
//           if (a[i]==key)
//           {
//               printf("%d",i);
//               return 0;
//           }
//         }
//     printf("-1");
// }



/*A person needs to reach home by train but compulsively switches trains at every station. If they start with train arr1 at the first station, they will switch to train arr2 at the next station, and then switch back to train arr1 at the following station, and so on. Similarly, if they start with train arr2, they will switch to train arr1 at the next station, and continue alternating.

Given two arrays, arr1 and arr2, where:

arr1[i] represents the time taken by train arr1 at station i.
arr2[i] represents the time taken by train arr2 at station i.
Determine the minimum total time required to reach home starting from either train arr1 or train arr2, with the switching pattern maintained.

Examples:
Input: arr1 = [2, 1, 2], arr2 = [3, 2, 1]
Output: 5
Explanation: Starting with train arr2 yields the minimum total time of 5.
Input: arr1 = [1, 3, 1, 2] arr2 = [2, 2, 3, 1]
Output: 5
Explanation: Starting with train arr1 yields the minimum total time of 5.*/


// #include<stdio.h>
// int main(){
//     int arr1[] = {1, 3, 1, 2};
//     int arr2 []= {2, 2, 3, 1};
//     int n = sizeof(arr1)/sizeof(arr1[0]);
//     int sum1=0, sum2=0;
//     for(int i=1;i<=n;i++){
//         if((arr1[i]%2)==0){
//             sum1+=arr1[i];
//         }else if(( arr1[i]%2)==1){
//             sum2+=arr1[i];
//         }
//         if((arr2[i]%2)==0){
//             sum1+=arr1[i];
//         }else if((arr2[i]%2)==1) {
//             sum2+=arr2[i];
//         }

//     }
//     if(sum1<sum2){
//         printf("%d\n",sum1);
//     }else{
//         printf("%d\n",sum2);
//     }
//     return 0;
// }



/*You are given an array arr[] consisting of positive integers. Return the maximum of every adjacent pairs in the array.

Examples:

Input: arr[] = [1, 2, 2, 3, 4, 5]
Output: [2, 2, 3, 4, 5]
Explanation: Maximum of arr[0] and arr[1] is 2, that of arr[1] and arr[2] is 2, ... and so on.
Input: arr[] = [5, 5]
Output: [5]
Explanation: We only have two elements so max of 5 and 5 is 5 only.*/

// #include<stdio.h>
// int main(){
//     int a[] = {5,3,6,4,8,2};
    
//     int n = sizeof(a)/sizeof(a[0]);
    
//     for(int i=0;i<n-1;i++){
//         if(a[i]<a[i+1]){
//             printf("%d ",a[i+1]);
//         }else if(a[i]>a[i+1]){
//             printf("%d ",a[i]);
//     }
        
//     }
   
//  return 0;
// }


/*Given an array arr[], swap the kth element from the beginning with the kth element from the end.

Note: 1-based indexing is followed.

Examples :

Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3
Output: [1, 2, 6, 4, 5, 3, 7, 8]
Explanation: 3rd element from beginning is 3 and 3rd element from end is 6, so we replace 3 & 6.
Input: arr[] = [5, 3, 6, 1, 2], k = 2
Output: [5, 1, 6, 3, 2]
Explanation: 2nd element from beginning is 3 and from end is 1.*/

// #include<stdio.h>
// int main(){
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int k=3;
//     int temp;
//     int n = sizeof(a)/sizeof(a[0]);
    
//     temp=a[k-1];
//     a[k-1]=a[n-k];
//     a[n-k]=temp;


//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
   
//  return 0;
// }



/*Given an array of car numbers car[], an array of penalties fine[], and an integer value date. 
The task is to find the total fine which will be collected on the given date. 
The fine is collected from odd-numbered cars on even dates and vice versa.

Examples:

Input: date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
Output: 600
Explanation: The date is 12 (even), so we collect the fine from odd-numbered cars. The odd-numbered cars and the fines associated with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600
Input: date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]
Output: 300*/




/*You are given an array arr and an integer k. In one operation you can choose any element of array and decrease its value by k. You need find the minimum number of operation such that all the elements in the array becomes less or equal to k.

Examples:

Input: arr[] = [5, 3, 2, 6, 8] and k = 5
Output: 2
Explanation: Ishaan can climb a wall with height atmost 5. So he climbs the first 3 walls easily. Now he has to use his power to reduce the height of the 4th wall. After using his power, Now to climb the last wall, he again uses his power.

Input: arr[] = [2, 6, 4, 8, 1, 6] and k = 4 
Output: 3 
Explanation: Ishaan can climb a wall with height atmost 5. He can't climb the wall with height 6, 8, 6.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints :
1 ≤ arr.size() ≤ 106
1 ≤ k ≤ 105
1 ≤ arr[i] ≤ 105
*/

