class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int v1_size = nums1.size(),
            v2_size = nums2.size();
        vector<int> merged_array;
        int i=0, j=0;
        while (i<v1_size and j<v2_size){
            if (nums1[i] < nums2[j]){
                merged_array.push_back(nums1[i++]);
            }
            else{
                merged_array.push_back(nums2[j++]);
            }
        }
        while (i<v1_size){
            merged_array.push_back(nums1[i++]);
        }
        while (j<v2_size){
            merged_array.push_back(nums2[j++]);
        }

        cout<<fixed<<setprecision(5);

        float index = (float)(v1_size + v2_size)/2;
        bool is_odd;
        if ((int)(index*10)%10 == 0) is_odd = false;
        else is_odd = true;
        if (is_odd){
            return merged_array[index];
        }
        else{
            return (float)(merged_array[index-1]+merged_array[index])/2;
        }
    }
};
