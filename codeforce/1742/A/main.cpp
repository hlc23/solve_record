// Problem: A. Sum
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: http://codeforces.com/contest/1742/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>

int main(){
	int c;
	std::cin>>c;
	for (int t=0; t<c; t++){
		int n[3];
		std::cin>>n[0]>>n[1]>>n[2];
		for (int i=0; i<3; i++){
			for (int j=0; j<3; j++){
				if (n[i] < n[j]){
					int temp;
					temp = n[i];
					n[i] = n[j];
					n[j] = temp;
				}
			}
		}
		if (n[0]+n[1] == n[2]) std::cout<<"YES"<<"\n";
		else std::cout<<"NO"<<"\n";
    
    }
    return 0;
}