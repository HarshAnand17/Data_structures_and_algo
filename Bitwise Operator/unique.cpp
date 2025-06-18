#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums={1,2,2,1,3,3};
     int n=6;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<n;i++) {
            if(nums[i]==nums[i-1]) {
               ans.push_back(nums[i]);
            }
           // else continue;
        }
        cout<<ans.size()<<endl;
        if(ans.size()==0) return 0;
        int sum=0;
        for(int i=0;i<ans.size();i++) {
         // cout<<ans[i]<<" ";
            sum=sum ^ ans[i];
        }
        cout<<sum;
}