/**
 * @param {number[]} nums
 */
var ArrayWrapper = function(nums) {
    this.nums = nums;
};

ArrayWrapper.prototype.valueOf = function() {
    let r = 0;
    for (let i = 0; i < this.nums.length; i++) {
        r += this.nums[i];
    }
    return r;
}

ArrayWrapper.prototype.toString = function() {
    return "[" + this.nums.join(",") + "]";
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */