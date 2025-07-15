#include <iostream>

// 命名空间
namespace Example1 {
    int a = 1;

    int f() {
        return 123;
    }
};

namespace Example2 {
    int a = 2;

    int f() {
        return 456;
    }
};

using namespace std;

int main() {
    cout << Example1::a << endl;
    cout << Example1::f() << endl;
    cout << Example2::a << endl;

    return 0;
}