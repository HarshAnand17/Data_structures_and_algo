#include<iostream>
#include<vector>
using namespace std;
class MaxHeap {
    vector<int>hp;
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
    void downheapfy(int idx) {
         while(idx<hp.size()) {
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size()) break;
            int maxEl=idx;
            if(hp[lc]>hp[maxEl]) {
                maxEl=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[maxEl]) {
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
        hp.pop_back();
        if(!empty())   downheapfy(0);
    }
    void push(int element) {
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    int peek() {
       // if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty() {
        return hp.size()==0;
    }
    void display() {
        cout<<"[";
        for(int i=0;i<hp.size();i++) {
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }
}; 
int main() {
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    hp.pop();
    hp.display();
    //cout<<hp.peek();
    return 0;
}