#include<bits/stdc++.h>
using namespace std;

vector<vector<char>>grid;
vector<vector<string>>result;
bool canPalceQueen(int row,int col,int n) {
     //column check
     for(int i=row-1;i>=0;i--) {
        if(grid[i][col]=='Q') //we are tracked
        return false;
     }
     //left diagonal check
     for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--) {
          if(grid[i][j]=='Q') //we are tracked
          return false;
     }
     //right diagonal check
     for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++) {
         if(grid[i][j]=='Q') //we are tracked
         return false;
     }
     return true;//no track found
}
void f(int row,int n) {
    if(row==n) {
        //we got one possible ans
        vector<string>temp;
        for(int i=0;i<n;i++) {
            string res="";
            for(int j=0;j<n;j++) {
                res+=grid[i][j];
            }
            temp.push_back(res);   
        }
        result.push_back(temp);
        return;
    }
    for(int col=0;col<n;col++) {
        if(canPalceQueen(row,col,n)) {
            grid[row][col]='Q';
            f(row+1,n);
            grid[row][col]='.';
        }
    }
}
vector<vector<string>>Nqueen(int n) {
    grid.clear();
    result.clear();
    grid.resize(n,vector<char> (n,'.'));
    f(0,n);
    return result;
}

    int main() {
        Nqueen(4);
        return 0;
     }