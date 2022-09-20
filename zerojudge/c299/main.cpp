#include <iostream>
#include <vector>

int main(){
    // I
    int N;
    std::cin>>N;
    std::vector<int> m(N);
    for (int i=0; i<N; i++){
        std::cin>>m[i];
    }
    // P

    // sort
    int temp;
    for (int i=1; i<N; i++) {
        for (int j=0; j<N; j++){
            if (m[j] > m[i]){
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            } 
        }
    }

    // Check
    bool check = true;
    for (int i=1; i<N; i++) {
        if (m[i-1] != m[i]-1){
            check = false;
            break;
        }
    }

    // O
    if (check) {
        std::cout<<m.front()<<" "<<m.back()<<" "<<"yes";
    }
    else{
        std::cout<<m.front()<<" "<<m.back()<<" "<<"no";
    }

}