// TLE
#include<iostream>
#include<vector>
#include<queue>

void solve(){
    int n, h=0, temp;
    std::cin>>n;
    std::vector<std::vector<int> > area(n);
    std::vector<std::vector<int> > path(n, std::vector<int> (n, -1));

    for (int i=0; i<n; i++){
        std::vector<int> temp_vec(n);
        for (int j=0; j<n; j++){
            std::cin>>temp;
            temp_vec[j] = temp;
        }
        area[i] = temp_vec;
    }
    h = std::min(std::abs(area[0][0]-area[0][1]), std::abs(area[0][0]-area[1][0]));
    path[0][0] = 0;
    std::queue<std::vector<int> > q;
    std::vector<int> temp_vec(2, 0);
    q.push(temp_vec);
    bool BFS=true;
    while (BFS){
        if (q.empty()){
            std::vector<std::vector<int> > path(n, std::vector<int>(n, -1));
            path[0][0] = 0;
            std::vector<int> temp_vec(2, 0);
            q.push(temp_vec);
            h++;
        }

        int x = q.front()[0], y = q.front()[1];
        q.pop();

        if (x==n-1 && y==n-1){
            BFS = false;
            break;
        }

        if (!(x-1 < 0)){ // left
            if (path[y][x-1] == -1){
                if (std::abs(area[y][x-1] - area[y][x]) <= h){
                    std::vector<int> temp_vec = {x-1, y};
                    q.push(temp_vec);
                    path[y][x-1] = path[y][x]+1;
                }
            }
        }

        if (!(x+1 >= n)){ // right
            if (path[y][x+1] == -1){
                if (std::abs(area[y][x+1] - area[y][x]) <= h){
                    std::vector<int> temp_vec = {x+1, y};
                    q.push(temp_vec);
                    path[y][x+1] = path[y][x]+1;
                }
            }
        }

        if (!(y-1 < 0)){ // up
            if (path[y-1][x] == -1){
                if (std::abs(area[y-1][x] - area[y][x]) <= h){
                    std::vector<int> temp_vec = {x, y-1};
                    q.push(temp_vec);
                    path[y-1][x] = path[y][x]+1;
                }
            }
        }

        if (!(y+1 >= n)){ // down
            if (path[y+1][x] == -1){
                if (std::abs(area[y+1][x] - area[y][x]) <= h){
                    std::vector<int> temp_vec = {x, y+1};
                    q.push(temp_vec);
                    path[y+1][x] = path[y][x]+1;
                }
            }
        }
    }
    std::cout<<h<<"\n"<<path[n-1][n-1]<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    solve();
}
