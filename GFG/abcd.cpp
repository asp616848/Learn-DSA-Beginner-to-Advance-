#include <iostream>
#include <string>
using namespace std;

template <class T>
class AddElements {
    T element1;
public:
    AddElements(T arg) : element1(arg) {}

    T add(T arg2) {
        return element1 + arg2;
    }
    void print() {
        cout << element1<< ": This is Not a string" << endl;
    }
};

template <>
class AddElements<string> {
    string element1;
public:
    AddElements(string arg) : element1(arg) {}

    string concatenate(string arg2) {
        return element1 + arg2;
    }
    void print() {
        cout << element1 << ": This is a string"<< endl;
    }
};

int main() {
    AddElements<int> IntInitialized(5);
    IntInitialized.print();
    cout << "Sum When int type: " << IntInitialized.add(10) << endl;

    AddElements<float> floatInitialized(3.5f);
    floatInitialized.print();
    cout << "Sum when float type: " << floatInitialized.add(2.5f) << endl;

    AddElements< string> StringIntitialized("Hello, ");
    StringIntitialized.print();
    cout << "Concatenated on a string type: " << StringIntitialized.concatenate("world!") << endl;

    return 0;
}
