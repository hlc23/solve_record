#include<stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
	int r, c, k, m, i, j;
	int arr[55][55] = {{-1}}, narr[55][55] = {{-1}};
	// input
	scanf("%d %d %d %d", &r, &c, &k, &m);
	for (i=1; i<=r; i++){
		for (j=1; j<=c; j++){
			scanf("%d", &arr[i][j]);
			narr[i][j] = arr[i][j];
		}
	}

	// process
	int tx, ty;
	while (m--) {
		for (i=1; i<=r; i++){
			for (j=1; j<=c; j++){
				if (arr[i][j] == -1) continue;
				
				// up
				tx = i;
				ty = j-1;
				if (0 < ty && ty <= c && arr[tx][ty] != -1){
					narr[tx][ty] += arr[i][j] / k;
					narr[i][j] -= arr[i][j] / k;
				}
				
				// down 
				tx = i;
				ty = j+1;
				if (0 < ty && ty <= c && arr[tx][ty] != -1){
					narr[tx][ty] += arr[i][j] / k;
					narr[i][j] -= arr[i][j] / k;
				}

				// left 
				tx = i-1;
				ty = j;
				if (0 < tx && tx <= r && arr[tx][ty] != -1){
					narr[tx][ty] += arr[i][j] / k;
					narr[i][j] -= arr[i][j] / k;
				}
				
				//right
				tx = i+1;
				ty = j;
				if (0 < tx && tx <= r && arr[tx][ty] != -1){
					narr[tx][ty] += arr[i][j] / k;
					narr[i][j] -= arr[i][j] / k;
				}
			}
		}
		
		for (i=1; i<=r; i++){
			for (j=1; j<=c; j++){
				arr[i][j] = narr[i][j];
			}
		}
	}

	
	// output
	int ans1 = INT_MAX, ans2 = INT_MIN;
	for (i=1; i<=r; i++){
		for (j=1; j<=c; j++){
			if (arr[i][j] == -1) continue;

			ans1 = min(ans1, arr[i][j]);
			ans2 = max(ans2, arr[i][j]);
		}
	}
	
	printf("%d\n%d", ans1, ans2);
	return 0;
}
