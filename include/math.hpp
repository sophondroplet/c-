#include <iostream>
#include <string>
using namespace std;

class math {
    public:
        string version;
        math(string Version);
        int add(int a, int b);
        int subtract(int a, int b);
        int mutltiply(int a, int b);
        double divide(int a, int b);
};