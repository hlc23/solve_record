#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int id,num,row,col;
	cin>>id;
	if (id<=2500){
		num=1;
		row=(id-1)/25+1;
		col=(id-1)%25+1;
	}
	else if (id<=7500){
		num=2;
		id=id-2500;
		row=(id-1)/50+1;
		col=(id-1)%50+1;
	}
	else{
		num=3;
		id=id-7500;
		row=(id-1)/25+1;
		col=(id-1)%25+1;
	}
	cout<<num<<" "<<row<<" "<<col;
	return 0;
}
