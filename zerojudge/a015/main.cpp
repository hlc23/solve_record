#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row, col;
    while (cin>>row>>col){
        vector<vector<int> > table;
        vector<int> temp_vec;
        int temp;
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                cin>>temp;
                temp_vec.push_back(temp);
            }
            table.push_back(temp_vec);
        }

        for (int i=0; i<col; i++){
            for (int j=0; j<row; j++){
                cout<<table[j][i]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}