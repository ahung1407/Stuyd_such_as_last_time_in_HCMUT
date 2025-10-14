#include <iostream>
#include <cstdlib>  // for malloc() and free()
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {
        cout << "Constructor called! x = " << x << endl;
    }
    ~MyClass() {
        cout << "Destructor called! x = " << x << endl;
    }
};

int main() {
    cout << "=== Using new/delete ===" << endl;
    MyClass* obj1 = new MyClass(42);  // Allocates memory + calls constructor
    cout << "Accessing x via obj1: " << obj1->x << endl;
    delete obj1;                      // Calls destructor + frees memory

    cout << "\n=== Using malloc()/free() ===" << endl;
    MyClass* obj2 = (MyClass*) malloc(sizeof(MyClass)); // Allocates raw memory
    // Constructor is NOT called, so obj2->x is uninitialized
    cout << "Accessing x via obj2 (uninitialized!): " << obj2->x << endl;
    free(obj2); // Destructor is NOT called

    return 0;
}
