// solved using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();i++)
        {
            if(hashmap.find(target-nums[i]) != hashmap.end())
            {
                return {i,hashmap[target-nums[i]]};
            }
            else
            {
                hashmap[nums[i]]=i;
            }
        }
        return {};
    }
};