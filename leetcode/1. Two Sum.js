var twoSum = function(nums, target) {
    var map = {};
    for (i=0; i<nums.length; i++){
        var temp = target - nums[i];
        if (map[temp] != null){
            return [map[temp], i];
        }
        map[nums[i]] = i;
    }
};