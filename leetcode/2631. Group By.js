/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function (fn) {
    const groupedArray = {};
  
    this.forEach((item) => {
      const key = fn(item); 
  
      // 如果鍵值不存在，創建一個新的鍵值對應的陣列
      if (!groupedArray.hasOwnProperty(key)) {
        groupedArray[key] = [];
      }
  
      // 將元素添加到對應的分組陣列中
      groupedArray[key].push(item);
    });
  
    return groupedArray;
  };
  

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */