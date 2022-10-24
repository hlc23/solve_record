#include<iostream>

void solve(){
    int n, x1, y1, x2, y2, max_l=0, min_l=999999999;
    std::cin>>n;
    std::cin>>x1>>y1;
    for (int i=0; i<n-1; i++){
        std::cin>>x2>>y2;
        max_l = std::max(std::abs(x1-x2)+std::abs(y1-y2), max_l);
        min_l = std::min(std::abs(x1-x2)+std::abs(y1-y2), min_l);
        x1 = x2; y1 = y2;
    }
    std::cout<<max_l<<" "<<min_l;
}

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    solve();
}
