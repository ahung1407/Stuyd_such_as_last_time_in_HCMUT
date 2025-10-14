#include <iostream>
using namespace std;

// =========================================================
// 1️⃣ STATIC BINDING (compile-time binding)
// =========================================================
class BaseStatic {
public:
    void show() {  // NOT virtual
        cout << "[Static Binding] BaseStatic::show() called" << endl;
    }
};

class DerivedStatic : public BaseStatic {
public:
    void show() {  // hides BaseStatic::show()
        cout << "[Static Binding] DerivedStatic::show() called" << endl;
    }
};

// =========================================================
// 2️⃣ DYNAMIC BINDING (run-time binding using virtual)
// =========================================================
class BaseDynamic {
public:
    virtual void show() {  // virtual → dynamic binding
        cout << "[Dynamic Binding] BaseDynamic::show() called" << endl;
    }
    virtual ~BaseDynamic() { // ✅ Virtual destructor
        cout << "BaseDynamic destructor called" << endl;
    }
};

class DerivedDynamic : public BaseDynamic {
public:
    void show() override {
        cout << "[Dynamic Binding] DerivedDynamic::show() called" << endl;
    }
    ~DerivedDynamic() {
        cout << "DerivedDynamic destructor called" << endl;
    }
};

// =========================================================
// 3️⃣ POLYMORPHISM EXAMPLE (real-world scenario)
// =========================================================
class Shape {
public:
    virtual void draw() { cout << "[Polymorphism] Drawing a generic shape" << endl; }
    virtual ~Shape() {} // Always make destructors virtual in polymorphic classes
};

class Circle : public Shape {
public:
    void draw() override { cout << "[Polymorphism] Drawing a Circle" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "[Polymorphism] Drawing a Rectangle" << endl; }
};

// =========================================================
// MAIN FUNCTION
// =========================================================
int main() {
    cout << "===============================" << endl;
    cout << "1️⃣  STATIC BINDING EXAMPLE" << endl;
    cout << "===============================" << endl;
    BaseStatic* b1 = new DerivedStatic();
    b1->show(); // Calls BaseStatic::show() — static binding
    delete b1;

    cout << "\n===============================" << endl;
    cout << "2️⃣  DYNAMIC BINDING EXAMPLE" << endl;
    cout << "===============================" << endl;
    BaseDynamic* b2 = new DerivedDynamic();
    b2->show(); // Calls DerivedDynamic::show() — dynamic binding
    delete b2;

    cout << "\n===============================" << endl;
    cout << "3️⃣  POLYMORPHISM EXAMPLE" << endl;
    cout << "===============================" << endl;
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    for (int i = 0; i < 2; ++i)
        shapes[i]->draw();  // Calls correct version at runtime

    for (int i = 0; i < 2; ++i)
        delete shapes[i];

    return 0;
}
