#include<iostream>
#include<vector>
using namespace std;

int main() {
    int x;
    cout<<"enter target value is : ";
    cin>>x;

    int n;
    cout<<"enter array size is : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
          int q;
          cin>>q;
          v.push_back(q);
    }

    for(int i=0;i<=n-2;i++) {
        for(int j=i+1;j<=n-1;j++) {
            if(v[i]+v[j]==x) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}