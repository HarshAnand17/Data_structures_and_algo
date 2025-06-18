#include<bits/stdc++.h>
using namespace std;

    int countPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++) {
            // string x=to_string(nums[i]);
          for(int j=i+1;j<n;j++) {
            if(nums[i]==nums[j]){
                count++;continue;
            }
             bool flag=false;
             string y=to_string(nums[j]);
             for(int i1=0;i1<y.size()-1;i1++) {
                for(int j1=i1+1;j1<y.size();j1++){
                swap(y[i1],y[j1]);
                if(nums[i]==stoi(y)) {
                    count++;
                    flag=true;
                }
                if(flag) break;
                swap(y[i1],y[j1]);
                }
                if(flag) break;
             }
          }
        }
        return count;
    }
int main() {
    vector<int>v={1,1,1,1,1};
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++) cout<<v[i]<<" "<<endl;ṇ
    cout<<countPairs(v);
}