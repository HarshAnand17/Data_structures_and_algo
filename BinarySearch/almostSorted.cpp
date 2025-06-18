#include<bits/stdc++.h>
using namespace std;

int main() {
      // int arr[]={4,2,8,7,9};
      // int n=5;
      //M-I
//       for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
      
//       cout<<endl;
//       int brr[n];
//       for(int i=0;i<n;i++) brr[i]=arr[i];

//       for(int i=0;i<n-1;i++) {
//             for(int j=0;j<n-1-i;j++) {
//                   if(brr[j]>brr[j+1]) swap(brr[j],brr[j+1]);
//             }
//       }
//        for(int i=0;i<n;i++)  cout<<brr[i]<<" ";
//        bool flag=true;
//        for(int i=0;i<n;i++) {
//             if(i==0) {
//                 if(brr[i]!=arr[i+1] && brr[i]!=arr[i]) {
//                   flag=false;
//                   break;
//                 } 
//             }
//            else if(i==n-1) {
//                   if(brr[i]!=arr[i-1] && brr[i]!=arr[i]) {
//                   flag=false;
//                   break;
//                 } 
//             }
//             else {
//                   if(brr[i]!=arr[i-1] && brr[i]!=arr[i] && brr[i]!=arr[i+1]) {
//                   flag=false;
//                   break; 
//             }
//        }
// }
//        cout<<endl;
//        cout<<flag;

       //M-II
//        bool flag=true;
//        for(int i=0;i<n;i++) {
//         int count=0;
//         for(int j=0;j<n;j++) {
//             if(i==j) continue;
//             else if(arr[j]>arr[i]) count++;
//         }
//         int aidx=n-count-1;
//         int diff=abs(aidx-i);
//         if(diff>1) {
//             flag=false;
//             break;
//         }
//   }
//        cout<<flag;


     //M-III
      
    //   for(int i=0;i<n-1;i++) {
    //     if(arr[i]>arr[i+1]) {
    //         swap(arr[i],arr[i+1]);
    //         i++;
    //     }
    //   }

    //   bool flag=true;
    //   for(int i=0;i<n-1;i++) {
    //     if(arr[i]>arr[i+1]) {
    //         flag=false;
    //         break;
    //     }
    //   }

    //   cout<<flag;
    //  }
    #include <bits/stdc++.h>
using namespace std;

int solution(int N, int K, vector<int>& money) {
    // Count the number of people who already have K dollars.
    int countK = 0;
    vector<int> vecK; 
    for (int i = 0; i < N; i++){
        if(money[i] == K) {
            countK++;
            vecK.push_back(i);
        }
    }
    // If everyone already has K, no operation is needed.
    if(countK == N) return N;
    
    // For each candidate value v (v != K), store the indices where it occurs.
    unordered_map<int, vector<int>> posMap;
    posMap.reserve(N);
    for (int i = 0; i < N; i++){
        if(money[i] != K) {
            posMap[money[i]].push_back(i);
        }
    }
    
    int global_max = 0;
    // (vecK is already in increasing order.)
    // For each candidate v, compute the best net gain.
    for(auto &entry : posMap){
        // candidate value v
        int v = entry.first;
        vector<int>& positions = entry.second; // indices where money[i] == v
        int f = positions.size();
        int candidate_gain = 0;
        if(f == 0) continue; // should not happen
        if(f == 1) {
            candidate_gain = 1; // single occurrence: best is to choose just that index
        } else {
            // Build auxiliary array C:
            // C[0] = 1, and for each i from 1 to f-1, 
            // C[i] = 1 - (number of K's between positions[i-1] and positions[i])
            vector<int> C(f);
            C[0] = 1;
            for (int i = 1; i < f; i++){
                int left = positions[i-1] + 1;
                int right = positions[i] - 1;
                int gap = 0;
                if(left <= right && !vecK.empty()){
                    // Count the number of indices in vecK that lie in (positions[i-1], positions[i])
                    auto lb = lower_bound(vecK.begin(), vecK.end(), left);
                    auto ub = upper_bound(vecK.begin(), vecK.end(), right);
                    gap = ub - lb;
                }
                C[i] = 1 - gap;
            }
            // Use Kadane's algorithm on C (with the option to “skip” a segment by resetting to 0)
            int current = 0, best = 0;
            for (int i = 0; i < f; i++){
                current = max(0, current + C[i]);
                best = max(best, current);
            }
            candidate_gain = best;
            candidate_gain = max(candidate_gain, 1); // at least 1 is possible
        }
        global_max = max(global_max, candidate_gain);
    }
    
    return countK + global_max;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    vector<int> money(N);
    for (int i = 0; i < N; i++){
        cin >> money[i];
    }
    
    cout << solution(N, K, money);
    return 0;
}
}