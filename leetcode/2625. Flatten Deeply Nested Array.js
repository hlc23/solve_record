/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
function flattenArray(arr, n) {
    // 檢查深度是否為0，如果是，直接返回原陣列
    if (n === 0) {
      return arr;
    }
  
    // 宣告一個空陣列用於存放扁平化後的元素
    const flattened = [];
  
    // 遍歷原陣列的每個元素
    for (let i = 0; i < arr.length; i++) {
      // 檢查元素是否為陣列且深度還未達到n
      if (Array.isArray(arr[i]) && n > 0) {
        // 遞歸地扁平化子陣列，深度減1
        const nestedArray = flattenArray(arr[i], n - 1);
        // 將子陣列的元素添加到扁平化後的陣列中
        flattened.push(...nestedArray);
      } else {
        // 如果元素不是陣列或深度已達到n，直接將元素添加到扁平化後的陣列中
        flattened.push(arr[i]);
      }
    }
  
    return flattened;
  }
var flat = flattenArray;