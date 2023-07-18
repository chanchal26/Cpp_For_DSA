#include<bits/stdc++.h>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}
};

MyClass& getStaticObject() {
    static MyClass staticObj(42);

    return staticObj;
}

int main() {
    MyClass& objRef = getStaticObject();
    cout << "Value of static object: " << objRef.value << endl;

    return 0;
}



