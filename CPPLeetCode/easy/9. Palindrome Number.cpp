//
//  9. Palindrome Number.cpp
//  CPPLeetCode
//
//  Created by Danil Denisov on 08.06.2023.
//

#include <iostream>
#include <cmath>


class Palindrome_Number {
private:
    float getLen(int x){
        if (x < 0){
            return 0;
        }
        float i = 10;
        while (i <= x) {
            i *= 10;
        }
        return log(i) /  log(10);
    }

    
public:
    bool isPalindrome(int x) {
        
        int len = int(getLen(x));
        if (len == 1){
            return true;
        }
        
        if (x >= 0 && x % 10 != 0){
            int full = len;
            int half = 1;
            while (full >= (len/2 + x % 2) && half <= len / 2) {
                if (int(x / pow(10, full-1)) % 10 != x % int(pow(10, half)) / int(pow(10, half - 1))){
                    return false;
                }
                full -= 1;
                half += 1;
            }
            return true;
        }
        return false;
    }
};
