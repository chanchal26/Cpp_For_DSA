#include <iostream>
using namespace std;
class MyClass {
public:
    int data;
    char character;
    // double floatingPoint;
};

int main() {
    MyClass obj;
    cout << "Size of MyClass object: " << sizeof(obj) << " bytes" << endl;

    return 0;
}
