#include <iostream>

using namespace std;

int main(){
	int n;
	while (cin>>n){
		
		int array[1001];
		for (int i=0; i<n; i++){
			cin>>array[i];
		}
	
		int temp;
		for (int i=1; i<n; i++) {
	        for (int j=0; j<n; j++){
	        	if (array[j] > array[i]){
					temp = array[i];
	                array[i] = array[j];
	                array[j] = temp;
				} 
			}
		}
		
		for (int i=0; i<n; i++){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}
