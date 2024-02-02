    #include<bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter element in the array :";
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
     int sum=0;
     for(int i=0;i<n;i++) {
        int num=arr[i];
         int nums = (arr[i]/10)%10;
        if(nums%5==0) {
            sum+=num;
        }
     }
     cout<<endl;
     cout<<sum;
    }