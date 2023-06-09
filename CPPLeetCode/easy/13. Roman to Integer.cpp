//
//  13. Roman to Integer.cpp
//  CPPLeetCode
//
//  Created by Danil Denisov on 09.06.2023.
//
//  I == 1
//  V == 5
//  X == 10
//  L == 50
//  C == 100
//  D == 500
//  M == 1000


#include <stdio.h>
#include <string>
#include <iostream>
#include <map>

class Roman_to_Integer {
public:
    int romanToInt(std::string s) {
        std::map<char, int> lib = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int num = 0;
        for (int i = 0; i < s.length(); i++){
            if (lib[s[i]] < lib[s[i + 1]]){
                num += lib[s[i + 1]] - lib[s[i]];
                i += 1;
            }
            else{
                num += lib[s[i]];
            }
        }
        return num;
    }
};

