#include<bits/stdc++.h>
#define int long long

using namespace std;

int N, Q, X, T, K;
string S;

struct team
{
    int score;
    int time;
    string name;
    
    team(){}
    team(int s, int t, string n){
        score=s; time=t; name=n;
    }
};

bool comp(team t1, team t2){
    if (t1.score == t2.score) return t1.time < t2.time;
    else return t1.score > t2.score;
}

signed main(){
    cin>>N>>Q;
    vector<team> vec(N);
    for (int n=0; n<N; n++){
        cin>>X>>T>>S;
        
        vec.push_back(team(X, T, S));
    }
    sort(vec.begin(), vec.end(), comp);

    for (int q = 0; q<Q; q++){
        cin>>K;
        cout<<vec[K-1].name<<"\n";
    }
    return 0;
}
