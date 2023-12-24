#include <iostream>
#include <string>
#include "Flames_Functions.h" // To include the functions of that file
// Main function of the Flames project
int main(){
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    flames(s1, s2);
    return 0;
}
