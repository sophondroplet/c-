#include "math.hpp"
#include <iostream>
#include <string>
using namespace std;

math::math(string Version){
    version = Version; 
}

int math::add(int a, int b){
    return (a+b);
}; 
int math::subtract(int a, int b){
    return (a-b);
};
int math::mutltiply(int a, int b){
    return (a*b);
};
double math::divide(int a, int b){
    return (a/b);
};