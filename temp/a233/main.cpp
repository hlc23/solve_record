#include<iostream>
using namespace std;

int arr[1000000];

void merge(int l, int m, int r){
    int new la[m-l+1];
    int new ra[r-m+1];
    
    
}
bool a = true

void merge_sort(int l, int r){
    if (r>l){
        int m = (r-l)/2 + l;
        merge_sort(l, m);
        merge_sort(m+1, r);
        merge();
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    int temp;
    for (int n=0; n<N; n++){
        cin>>arr[n];
    }
    merge_sort(0, N-1);
    for (int n=0; n<N; n++){
        cout<<arr[n];
    }
}