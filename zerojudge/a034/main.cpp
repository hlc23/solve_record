#include <iostream>
#include <vector>

int main(){
    int N;
    int t;
    std::string s;
    std::cin>>N;
    std::vector<int> vec(0);
    
    while (N/2){
        vec.push_back(N%2);
        N /= 2;
    }
    vec.push_back(N%2);

    for (int i=vec.size(); i>0; i--){
        if (vec[i-1]>9){
            std::cout<<(char)(vec[i-1]+55);
        }
        else{
            std::cout<<vec[i-1];
        }
    }
}