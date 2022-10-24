#include<iostream>
#include<vector>
int main(){
    int lines, x1, x2, max_x=0, min_x=0, temp, len=0;
    std::cin>>lines;
    std::vector<bool> vec(false);
    std::cin>>x1>>x2;
    min_x = std::min(x1, x2);
    max_x = std::max(x1, x2);
    for (int x=min_x; x<max_x; x++){
        vec[x] = true;
    }
    for (int l=0; l<lines-1; l++){
        std::cin>>x1>>x2;
        if (x1 > x2){
            temp = x2;
            x2 = x1;
            x1 = temp;
        }
        for (int x=x1; x<x2; x++){
            vec[x] = true;
            min_x = std::min(x1, min_x);
            max_x = std::max(max_x, x2);
        }
    }    
    for (int x=0; x<=vec.size(); x++){
        if (vec[x]) len++;
    }
    std::cout<<len;
}