//   https://github.com/viren-sureja/Love-Babbar-450/blob/master/01_array/26_sell_buy_stock_atmost_twice.cpp

//https://leetcode.com/problems/remove-duplicate-letters/
======================================================================================
    MATRIX QUESTIONS
//   https://github.com/viren-sureja/Love-Babbar-450/blob/master/02_matrix/03_median_in_row_wise_sorted_matrix.cpp


=============================================================================
    STRING QUESTIONS
//  https://github.com/viren-sureja/Love-Babbar-450/blob/master/03_string/08_longest_palindromic_substring.cpp
// https://practice.geeksforgeeks.org/problems/word-wrap1646/1
//   DP  https://practice.geeksforgeeks.org/problems/word-break1352/1
// Based on KMP and refer below solution too;    https://leetcode.com/problems/shortest-palindrome/
//   https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/discuss/12956/C%2B%2B-Brute-Force-and-KMP
//    https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1
// not solved    https://github.com/viren-sureja/Love-Babbar-450/blob/master/03_string/23_count_of_no_of_given_string.cpp
PRACTICE BELOW QUESTION (ONCE SOLVED ONLY) 
//   https://practice.geeksforgeeks.org/problems/find-the-string-in-grid0111/1    (practice it and most important read properly)
    //  https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1   (SOLVE IN SPACE O(N) AND O(1))
    //   https://leetcode.com/problems/longest-valid-parentheses/
//  didn't soleved BUT IMP for INTerview  https://leetcode.com/problems/integer-to-english-words/discuss/70651/Fairly-Clear-4ms-C%2B%2B-solution   
//    https://practice.geeksforgeeks.org/problems/generate-ip-addresses/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// (did it previoussly too)     https://leetcode.com/problems/reorganize-string/    (nice solution https://leetcode.com/problems/reorganize-string/discuss/335312/C%2B%2B-Beat-100)    

===========================================================================

Input: s = "cbacdcbc"
Output: "acdb"

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>cnt(128,0);
        vector<bool>vis(128,false);
        string res="0";
        for(int i=0;i<s.length();i++){
            cnt[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            cnt[s[i]]--;
            if(vis[s[i]])continue;
          
            while(res.back()>s[i] && cnt[res.back()]){
                vis[res.back()]=false;
                res.pop_back();
            }
            res+=s[i];
              vis[s[i]]=true;
        }
        return res.substr(1);
    }
};
