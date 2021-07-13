Solution 1：
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int NS=nums.size();
        hash_map<int, string>(int NS) NumsHashMap;
        for (int cou=0; cou<NS; cou++)
        {
            NumsHashMap.insert(nums[cou])
        }
        for (int TarCou=1; TarCou<target; TarCou++)
        {
            NumsHashMap.insert(nums[cou])
        }
        
        vector<int> ret;
        int NS=nums.size();
        for (int cou=0; cou<NS; cou++)
        {
            for (int cou1=cou+1; cou1<NS; cou1++)
            {
                if (nums[cou1]+nums[cou]==target)
                {
                    ret.push_back(cou);
                    ret.push_back(cou1);
                    return ret;
                }
                
            }
        }
        return ret;
        
    };
};
