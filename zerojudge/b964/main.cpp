#include<iostream>
#include<vector>
#include<algorithm>

void solve(){
    int l, temp;
    std::cin>>l;
    std::vector<int> vec(l);
    for (int i=0; i<l; i++){
        std::cin>>temp;
        vec[i] = temp;
    }
    std::sort(vec.begin(), vec.end());
    std::vector<int> passed(0);
    std::vector<int> failed(0);
    for (int i=0; i<l-1; i++){
        std::cout<<vec[i]<<" ";
    }
    std::cout<<vec[l-1]<<"\n";
    for (int i=0; i<l; i++){
        if (vec[i] < 60) failed.push_back(vec[i]);
        else passed.push_back(vec[i]);
    }
    if (failed.size() != 0) std::cout<<failed[failed.size()-1];
    else std::cout<<"best case";
    std::cout<<"\n";
    if (passed.size() != 0) std::cout<<passed[0];
    else std::cout<<"worst case";
}

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    solve();
}
