/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val = 0;
    if (nums.length){
    val = fn(init, nums[0]);
    for (let i=1; i<nums.length; i++){
        val = fn(val, nums[i]);
    }}
    else{ return init;}
    return val;
};