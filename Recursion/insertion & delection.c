#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int idx;
    scanf("%d",&idx);
    
    for(int i=n-1;i>=idx;i--) {
        arr[i+1]=arr[i];
    }
    arr[idx]=5;
    for(int i=0;i<=n;i++) {
        printf("%d",arr[i]);
    }
}