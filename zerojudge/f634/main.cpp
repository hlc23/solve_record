#include<bits/stdc++.h>
using namespace std;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M, A, B;
	string name;
	int navy=0, army=0, air=0, officer=0, sergeant=0, soldier=0;
	int vec_m=0, tm=0;
	cin>>N>>M;
	vector<vector<set<string> > > table(3, vector<set<string> >(3, set<string>()));
	for (int m; m<M; m++){
		cin>>name>>A>>B;
		A--;
		B--;
		if (table[A][B].count(name)) continue;
		else{
			table[A][B].insert(name);
			if (A==0) navy++;
			else if (A==1) army++;
			else air++;
			if (B==0) officer++;
			else if (B==1) sergeant++;
			else soldier++;
			tm++;
		}
	}
	
	cout<<"navy:"<<navy<<" army:"<<army<<" air:"<<air<<"\n";
	cout<<"officer:"<<officer<<" sergeant:"<<sergeant<<" soldier:"<<soldier<<"\n";
	cout<<fixed<<setprecision(1);
	cout<<"survival rate: "<<(float)tm/N*100<<"%";
	return 0;
}