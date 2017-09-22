//
//  main.cpp
//  LargestPalindrome
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//
//  https://github.com/mwienands/LargestPalindromeProduct.git
//  Largest palindrome product
//A palindromic number reads the same both ways. The largest palindrome made from the product
//of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    std :: string largestPalindrome ="";
    for( int i= 100; i < 999; i++){
        for( int j= 100; j <999; j++){
            std::string s = std::to_string(i*j);
            if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) ){
                if (atoi(s.c_str()) > atoi(largestPalindrome.c_str())){
                     largestPalindrome = s;
            }
            }
        }
    }
    
    std::cout << largestPalindrome;
    return 0;

}

