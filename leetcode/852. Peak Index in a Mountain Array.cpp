#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size()-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1]) return mid;
            if (arr[mid-1] < arr[mid]) l = mid + 1;
            else r = mid;
        }
        return r;
    }
};

int main(){
    vector<int> vec = {3, 5, 3, 2, 0};
    cout<<Solution().peakIndexInMountainArray(vec);
}