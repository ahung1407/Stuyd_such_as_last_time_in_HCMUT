#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    const int c = 30;

    // 1️⃣ Pointer to const (const data, non-const pointer)
    const int* ptr1 = &a;  // or: int const* ptr1 = &a;
    cout << "ptr1 points to value: " << *ptr1 << endl;

    // *ptr1 = 15; // ❌ Error: cannot modify the value through ptr1
    ptr1 = &b;     // ✅ Allowed: pointer can point somewhere else
    cout << "ptr1 now points to value: " << *ptr1 << endl;


    // 2️⃣ Const pointer (non-const data, const pointer)
    int* const ptr2 = &a;
    cout << "ptr2 points to value: " << *ptr2 << endl;

    *ptr2 = 25;    // ✅ Allowed: we can modify the value a through ptr2
    // ptr2 = &b;  // ❌ Error: cannot reassign a const pointer
    cout << "After modification, a = " << a << endl;


    // 3️⃣ Const pointer to const (const data, const pointer)
    const int* const ptr3 = &c;
    cout << "ptr3 points to value: " << *ptr3 << endl;

    // *ptr3 = 40; // ❌ Error: cannot modify value
    // ptr3 = &a;  // ❌ Error: cannot change what ptr3 points to

    return 0;
}
