#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;


class Funcs {
public:
    double a(double x, double y, double z, double b) {
        return pow(x + y, 2) + (x + pow(z, 3) / pow(pow(b, 2) + y, 2)) / (1 + exp(-(x - y)) + pow(abs(z), 0.34));
    }
    double b(double x, double y, double z) {
        return 1 + pow(abs(y - x), 2) / pow(abs(z - 1), 1.34) + pow(z - x, 2) / pow(sin(z), 2) + pow(abs(y - z), 3) / cos(pow(y, 2));
    }
};


int main() {
    double x = 0.48 * 3;
    double y = 0.47 * 3;
    double z = -1.32 * 3;


    Funcs f;


    double b_val = f.b(x, y, z);
    double a_val = f.a(x, y, z, b_val);


    cout << "a[x, y, z, b] = " << a_val << endl;
    cout << "b[x, y, z] = " << b_val << endl;


    return 0;
}
