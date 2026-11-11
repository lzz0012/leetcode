#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>


using std::vector;
using std::pair;
using std::cout;
using std::endl;

/*
* 双指针法求解两数之和
*1. 先遍历数组元素，将数组元素和下标索引组成pair,对pair数组按照元素值进行排序
*2. 定义两个指针，分别指向数组的首尾
*3. 当两个指针所指向的元素之和小于目标值时，左指针右移
*4. 当两个指针所指向的元素之和大于目标值时，右指针左移
*5. 当两个指针所指向的元素之和等于目标值时，返回两个指针所指向的元素的下标
*/
 vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<pair<int, int>> numIndexPairs;
    numIndexPairs.reserve(nums.size());
    for(int i = 0; i < nums.size(); ++i)
    {
        numIndexPairs.emplace_back(nums[i], i);
    }

    std::sort(numIndexPairs.begin(), numIndexPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.first < b.first;
    });

    int left = 0;
    int right = numIndexPairs.size() - 1;
    while(left < right)
    {
        int sum = numIndexPairs[left].first + numIndexPairs[right].first;
        if(sum == target)
            return {numIndexPairs[left].second, numIndexPairs[right].second};
        else if(sum < target)
            ++left;
        else
            -- right;
    }
    return {};
}