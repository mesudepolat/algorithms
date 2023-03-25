//
//  main.cpp
//  shuffle


#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

int main() {
    std::vector<int> v = {21,22,23,24,25};
    std::random_device rd;
    std::mt19937 g(rd());
    
    std::shuffle(v.begin(),v.end(), g);
    
    for (int i:v) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

