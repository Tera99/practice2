//
//  main.cpp
//  practice2
//
//  Created by Terezie Schaller on 7/3/18.
//  Copyright © 2018 Terezie Schaller. All rights reserved.
//  Advanced C++ Programming Training Course by Infinite Skills
//  Generic Functions, Section 3, Lecture 17

#include <iostream>
#include <string>

using namespace std;

//generic max function
template <typename T>

T max (T &arg1, T &arg2){
    if (arg1 > arg2) {
        return arg1;
    } else {
        return arg2;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    cout << "Tera is a rockstar!!\n";
    
    int a = 12;
    int b = 15;
    cout << max(a, b) << endl;
    double x = 123.33;
    double y = 79.56;
    cout << max(x, y) << endl;
    string word1 = "hiking";
    string word2 = "mountain biking";
    cout << max( word1, word2) << endl;
    
    
    
    
    return 0;
}
