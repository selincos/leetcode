/*
*    
*  Leetcode question: 
*  Given two strings s and t, return true if t is an anagram of s, and false otherwise.
*  An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
*  typically using all the original letters exactly once.
*
*  Input: s = "anagram", t = "nagaram"
*  Output: true
*  
*  Input: s = "rat", t = "car"
*  Output: false
*  
*  https://leetcode.com/problems/valid-anagram/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != t[i])
                return false;
        }
        
        return true;
    }
};
