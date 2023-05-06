#include<bits/stdc++.h>
#define float long double

using namespace std;

long double fix(long double n){
    return round(n*100)/100;
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	float v1, v2, theta, beta;
	string st, temp_s = "";
	cin>>st;
	st+=",";
	int vc = 0;
	for (int i=0; i<st.size(); i++){
	    if (st[i] == ','){
	        vc++;
	        switch (vc){
	            case 1:
	            v1 = stold(temp_s);
	            temp_s = "";〔
	            break;
	            case 2:
	            v2 = stold(temp_s);
	            temp_s = "";
	            break;
	            case 3:
	            theta = stold(temp_s);
	            temp_s = "";
	            break;    
	            case 4:
	            beta = stold(temp_s);
	            temp_s = "";
	            break;
	        }
	        continue;
	    }
	    temp_s += st[i];
	}
    float theta_n = atanl(v1)+theta,
          s = sqrt(v1*v1+1),
          beta_n = atanl(v2/s)+beta;〔
    float t = sqrt(v2*v2+s*s);
    float v2_n = t*sin(beta_n),
          s_n = t*cos(beta_n),
          v1_n = s_n*sin(theta_n);

    cout<<fix(t)<<","<<fix(v1_n)<<","<<fix(v2_n)<<"\n";
	
    return 0;
}

