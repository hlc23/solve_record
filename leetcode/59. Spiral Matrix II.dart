class Solution {
  List<List<int>> generateMatrix(int n) {
    var max_x = n, min_x = 0, max_y = n, min_y = 0, num = 1;
    var ans = List.generate(n, (_) => List.filled(n, 0));
    while (min_x < max_x && min_y < max_y) {
      for (int i = min_y; i < max_y; i++) {
        ans[min_x][i] = num;
        num++;
      }
      min_x++;
      for (int i = min_x; i < max_x; i++) {
        ans[i][max_y - 1] = num;
        num++;
      }
      max_y--;
      if (min_x < max_x) {
        for (int i = max_y - 1; i >= min_y; i--) {
          ans[max_x - 1][i] = num;
          num++;
        }
        max_x--;
      }
      if (min_y < max_y) {
        for (int i = max_x - 1; i >= min_x; i--) {
          ans[i][min_y] = num;
          num++;
        }
        min_y++;
      }
    }
    return ans;
  }
}
