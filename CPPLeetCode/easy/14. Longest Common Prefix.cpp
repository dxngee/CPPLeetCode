//
//  14. Longest Common Prefix.cpp
//  CPPLeetCode
//
//  Created by Danil Denisov on 10.06.2023.
//

#include <stdio.h>
#include <iostream>
#include <string>

class Longest_Common_Prefix {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string ans = "";
        for (int n = 0; n < strs[0].length(); n++){
            bool same = true;
            for (int i = 0; i < strs.size() - 1; i++){
                if (strs[i][n] != strs[i + 1][n]){
                    same = false;
                }
            }
            if (same){
                ans += strs[0][n];
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};
