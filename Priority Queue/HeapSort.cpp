#include<iostream>
#include<vector>
using namespace std;
class MaxHeap {
    vector<int>hp;
    int i;//[0,i] -> max heap
public:
    void upheapify(int ci) {
        while(ci>0) {
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]) {
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else break;
        }
    }
    void downheapify(int idx,int bound) {
         while(idx<hp.size()) {
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=bound) break;
            int maxEl=idx;
            if(hp[lc]>hp[maxEl]) {
                maxEl=lc;
            }
            if(rc<bound && hp[rc]>hp[maxEl]) {
                maxEl=rc;
            }
             if(maxEl!=idx) {
                swap(hp[idx],hp[maxEl]);
                idx=maxEl;
             }
             else{
              break;
             }   
         }
    }
    void pop() {
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
       // hp.pop_back();
        i--;
        if(!empty())   downheapify(0,i);
    }
    void push(int element) {
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    int peek() {
        //if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty() {
        return hp.size()==0;
    }
    void display() {
        cout<<"[";
        for(int j=0;j<i;j++) {
            cout<<hp[j]<<" ";
        }
        cout<<"]\n";
    }
    MaxHeap(vector<int> &v) {
        hp=v;
        //TC : o(n)
       int n=hp.size();
       i=n;
        for(int j=n/2;j>=0;j--) {
            downheapify(j,i);
        }
    }
    void heapsort() {
        int sz=hp.size();
        while(sz>0) {
            int el = 0;
           swap(hp[el],hp[i]);
           i--;
           sz--;
           downheapify(0,i);
        }
           cout<<"[";
        for(int j=0;j<hp.size();j++) {
            cout<<hp[j]<<" ";
        }
        cout<<"]\n";
    }
};
void heapsort(vector<int>&v) {
        MaxHeap hp(v);
        hp.heapsort();
} 
int main() {
    vector<int>v = {9,6,1,19,3,2,8,12,5};
   heapsort(v);
    return 0;

    
}