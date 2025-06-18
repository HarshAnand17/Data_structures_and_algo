#include<bits/stdc++.h>
using namespace std;

bool isItSafe(vector<vector<int>>&grid,int i,int j,int n) {
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==-1;
}
vector<int>dx ={-2,-1,-2,-1,+2,+1,+2,+1};
vector<int>dy ={+1,+2,-1,-2,+1,+2,-1,-2};

void display(vector<vector<int>>&grid,int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<grid[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void f(vector<vector<int>>&grid,int i,int j,int n,int count) {
    if(count==n*n-1) {
       //last postion
       grid[i][j]=count;
       display(grid,n);
       cout<<"*****\n";
       grid[i][j]=-1;
       return;
    }
    //from i,j we can go to 8 positions
    //for every positon we can only go if it is safe

    // if(isItSafe(grid,i-2,j+1,n)) {
    //     grid[i-2][j+1]=count;
    //     f(gridi-2,j+1,n,count+1);
    //     grid[i-2][j+1]=-1;
    // }
    grid[i][j]=count;
    for(int k=0;k<8;k++) {
        if(isItSafe(grid,i+dx[k],j+dy[k],n)) {
            f(grid,i+dx[k],j+dy[k],n,count+1);
        }
    }
     grid[i][j]=-1;

}
void KnightsTour(int n,int i,int j) {
    vector<vector<int>>grid(n,vector<int>(n,-1));//-1 denotes positon is vaccant
    f(grid,i,j,n,0);
}
int main() {
    KnightsTour(5,0,0);
    return 0;
}