/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    const chunkedArr = [];
    let index = 0;

    while (index < arr.length) {
        chunkedArr.push(arr.slice(index, index + size));
        index += size;
    }

    return chunkedArr;
};