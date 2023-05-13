/**
 * @param {Function} fn
 */
function memoize(fn) {
    let table = {};
    return function(...args) {
        if (args in table) return table[args];
        table[args] = fn(...args);
        return table[args];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */