#include <iostream>

int cl(int n){
	if (n==1) return 1;
	else if (n%2==1) return cl(3*n+1)+1;
	else return cl(n/2)+1;
}

int main(){
    int n1, n2;
    while (std::cin>>n1>>n2){
        int t=0, temp=0;
        for (int x=std::min(n1, n2); x<=std::max(n1, n2); x++){
        	temp = cl(x);
        	if (temp > t) t = temp;
    	}
        std::cout<<n1<<" "<<n2<<" "<<t<<"\n";
	}
	return 0;
}
