class Solution {
  List<int> spiralOrder(List<List<int>> matrix) {
    int max_x = matrix.length, max_y = matrix[0].length;
    int min_x = 0, min_y = 0;
    List<int> result = [];
    while (min_x < max_x && min_y < max_y) {
      for (int i = min_y; i < max_y; i++) {
        result.add(matrix[min_x][i]);
      }
      min_x++;
      for (int i = min_x; i < max_x; i++) {
        result.add(matrix[i][max_y - 1]);
      }
      max_y--;
      if (min_x < max_x) {
        for (int i = max_y - 1; i >= min_y; i--) {
          result.add(matrix[max_x - 1][i]);
        }
        max_x--;
      }
      if (min_y < max_y) {
        for (int i = max_x - 1; i >= min_x; i--) {
          result.add(matrix[i][min_y]);
        }
        min_y++;
      }
    }
    return result;
  }
}
