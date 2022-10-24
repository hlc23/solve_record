// Problem: C. Stripes
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>

bool check_col(char col[8]){
	for (int i=0; i<7; i++){
		if (col[i] != col[i+1]) return false;
		if (col[i] == skip)continue;
	}
	return true;
}

bool check_row(char row[8]){
	for (int c=0; c<7; c++){
		if (row[c] != row[c+1]) return false;
		if (row[c] == skip)continue;
	}
	return true;
}

void solve(char table[8][8]){
	for (int c=0; c<8; c++){
		if (check_col(table[c])){
			std::cout<<table[c][0]<<"\n";
			return;
		}
	}
	for (int r=0; r<8; r++){
		char temp[8];
		for (int i=0; i<8; i++){
			temp[i] = table[i][r];
		}
		for (int i=0; i<8; i++) std::cout<<temp[i]<<"\n";
		std::cout<<"\n";
		if (check_row(temp)){
			std::cout<<table[r][0]<<"\n";
			return;
		}
	}
}

void debug(char table[8][8]){
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            std::cout<<table[i][j];
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

int main(){
    int C;
    std::cin>>C;
    for (int c=0; c<C; c++){
        char table[8][8];
        for (int i=0; i<8; i++){
            for (int j=0; j<8; j++){
                std::cin>>table[i][j];
            }
        }
        std::cout<<"case:"<<c<<"\n";
        solve(table);
	}


    return 0;
}