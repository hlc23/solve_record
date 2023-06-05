/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
    if (Array.isArray(arr)) {
      for (let item of arr) {
        yield* inorderTraversal(item);
      }
    } else {
      yield arr;
    }
  }
  
  /**
   * const gen = inorderTraversal([1, [2, 3]]);
   * gen.next().value; // 1
   * gen.next().value; // 2
   * gen.next().value; // 3
   */