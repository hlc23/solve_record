// Problem: B. Increasing
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
int main(){
	int C;
	std::cin>>C;
	for (int c=0; c<C; c++){
		int len;
		std::cin>>len;
		std::vector<int> vec;
		int temp;
		for (int n=0; n<len; n++){
			std::cin>>temp;
			vec.push_back(temp);
		}
		for (int i=0; i<len; i++){
			for (int j=0; j<len; j++){
				if (vec[i] < vec[j]){
					temp = vec[i];
					vec[i] = vec[j];
					vec[j] = temp;
				}
			}
		}
		bool check = true;
		for (int x = 0; x< len-1; x++){
			if (vec[x] < vec[x+1])continue;
			else{
				check = false;
				break;
			}
		}
		if (check) std::cout<<"YES"<<"\n";
		else std::cout<<"NO"<<"\n";
		
	}	
	
}