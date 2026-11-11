/*
* 创建unordered_map哈希表,key = nums[i], value = i
* 遍历数组,对于每个元素,检查target - nums[i]是否在哈希表中
* 如果在,返回两个索引
* 如果不在,将当前元素和索引存入哈希表
*/

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;
vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> hash;
    hash.reserve(nums.size());
    for(int i = 0; i < nums.size(); ++i)
    {
        if(hash.find(target- nums[i]) != hash.end())
            return {hash[target - nums[i]], i};
        else
            hash[nums[i]] = i;
    }
    return {};
}