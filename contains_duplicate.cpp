/*
*    
*  Leetcode question: 
*  Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*  
*  Input: nums = [1,2,3,1]
*  Output: true
*  
*  nput: nums = [1,2,3,4]
*  Output: false
*  
*  https://leetcode.com/problems/contains-duplicate
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int nSize = nums.size();
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                return true;
        }
        
        return false;
    }
};
