#include<bits/stdc++.h>
using namespace std;

  int main() {
    int arr[10]={0,3,4,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
//    bool flag=false;

//    for(int i=0;i<n-1;i++) {
//        for(int j=i+1;j<n;j++) {
//             if(arr[i]==arr[j]) {
//                 flag=true;
//                 break;
//             }
//        }
//    }
      int x=0;
      int y;
      bool flag=true;
       for(int i=0;i<n;i++) {
          if(arr[i]!=x) {
          //  cout<<x<<endl;
            cout<<x;
           // flag=false;
            break;
          }
          else {
            x++;
          }
       }
  }
       //if(flag==false) cout<<y;
  //       int max1=INT_MIN;
  //       int max2=INT_MIN;
  //      for(int i=0;i<n;i++) {
  //           if(arr[i]>max1) {
  //             max2=max1;
  //             max1=arr[i];
  //           }
  //           else {
  //            if(arr[i]>max2 && arr[i]!=max1) {
  //                  max2=arr[i];
  //            }
  //           }
  //      }
  //       cout<<"maximum element is :"<<max1<<endl;
  //       cout<<"second maximum element is :"<<max2<<endl;
  // }

  //     int sub[50],i;

  //     for(int i=0;i<=48;i++);
  //      {
  //       sub[i]=i;
  //       cout<<sub[i]<<endl;
  //     }
  //     return 0;
  // }
//    if(flag) cout<<"yes element is duplicate present";
//    else cout<<"no element duplicate is present";

        // int n=height.size();
        // //privous greatest element in the array
        // int prev[n];
        // prev[0]=-1;
        // int max=height[0];
        // for(int i=1;i<n;i++) {
        //      prev[i]=max;
        //      if(max<height[i]) max=height[i];
        // }
        // //next greatest element in the array
        //  int next[n];
        // next[n-1]=-1;
        //  max=height[n-1];
        // for(int i=n-2;i>=0;i--) {
        //      next[i]=max;
        //      if(max<height[i]) max=height[i];
        // }
        // //minimum of prev and next
        // int mini[n];
        // for(int i=0;i<n;i++) {
        //     mini[i]=min(prev[i],next[i]);
        // }
        // //calculating amount of water
        // int water=0;
        // for(int i=0;i<n;i++) {
        //     if(mini[i]>height[i]) {
        //         water+=(mini[i]-height[i]);
        //     }
        // }
        // return water;

       

//        100262. Find the Sum of Encrypted Integers
// User Accepted:19373
// User Tried:20390
// Total Accepted:20428
// Total Submissions:29111
// Difficulty:Easy
// You are given an integer array nums containing positive integers. We define a function encrypt such that encrypt(x) replaces every digit in x with the largest digit in x. For example, encrypt(523) = 555 and encrypt(213) = 333.

// Return the sum of encrypted elements.

 

// Example 1:

// Input: nums = [1,2,3]

// Output: 6

// Explanation: The encrypted elements are [1,2,3]. The sum of encrypted elements is 1 + 2 + 3 == 6.

// Example 2:

// Input: nums = [10,21,31]

// Output: 66

// Explanation: The encrypted elements are [11,22,33]. The sum of encrypted elements is 11 + 22 + 33 == 66.

 

// Constraints:

// 1 <= nums.length <= 50
// 1 <= nums[i] <= 1000
      // Context Question
      // int n=nums.size();
      //   int sum=0;
      //   for(int i=0;i<n;i++) {
      //      int x=nums[i];
      //      int maxele=INT_MIN;
      //       //int y=0;
      //       int count=0;
      //      while(x!=0) {
      //         int y=x%10;
      //        int maxpr=y;
      //         maxele=max(maxele,maxpr);
      //         x=x/10;
      //          count++;
      //      }
      //       int k=0;
      //      for(int i=0;i<count;i++) {
      //           k=k*10+maxele;
      //       }
      //       sum+=k;
        
      //   }
      //   return sum;  


      100209. Mark Elements on Array by Performing Queries
User Accepted:8367
User Tried:11054
Total Accepted:8706
Total Submissions:20276
Difficulty:Medium
You are given a 0-indexed array nums of size n consisting of positive integers.

You are also given a 2D array queries of size m where queries[i] = [indexi, ki].

Initially all elements of the array are unmarked.

You need to apply m queries on the array in order, where on the ith query you do the following:

Mark the element at index indexi if it is not already marked.
Then mark ki unmarked elements in the array with the smallest values. If multiple such elements exist, mark the ones with the smallest indices. And if less than ki unmarked elements exist, then mark all of them.
Return an array answer of size m where answer[i] is the sum of unmarked elements in the array after the ith query.

 

Example 1:

Input: nums = [1,2,2,1,2,3,1], queries = [[1,2],[3,3],[4,2]]

Output: [8,3,0]

Explanation:

We do the following queries on the array:

Mark the element at index 1, and 2 of the smallest unmarked elements with the smallest indices if they exist, the marked elements now are nums = [1,2,2,1,2,3,1]. The sum of unmarked elements is 2 + 2 + 3 + 1 = 8.
Mark the element at index 3, since it is already marked we skip it. Then we mark 3 of the smallest unmarked elements with the smallest indices, the marked elements now are nums = [1,2,2,1,2,3,1]. The sum of unmarked elements is 3.
Mark the element at index 4, since it is already marked we skip it. Then we mark 2 of the smallest unmarked elements with the smallest indices if they exist, the marked elements now are nums = [1,2,2,1,2,3,1]. The sum of unmarked elements is 0.
Example 2:

Input: nums = [1,4,2,3], queries = [[0,1]]

Output: [7]

Explanation: We do one query which is mark the element at index 0 and mark the smallest element among unmarked elements. The marked elements will be nums = [1,4,2,3], and the sum of unmarked elements is 4 + 3 = 7.

 

Constraints:

n == nums.length
m == queries.length
1 <= m <= n <= 105
1 <= n <= 105
queries[i].length == 2
0 <= indexi, ki <= n - 1

class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        
    }
};
  
