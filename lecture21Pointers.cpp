#include <iostream>
using namespace std;

int main() {
    // Basic pointer example
    int var = 10;
    int* ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Pointer to different data types
    char charVar = 'A';
    char* charPtr = &charVar;

    double doubleVar = 123.456;
    double* doublePtr = &doubleVar;

    cout << "\nValue of charVar: " << charVar << endl;
    cout << "Address of charVar: " << (void*)&charVar << endl;
    cout << "Value of charPtr (address of charVar): " << (void*)charPtr << endl;
    cout << "Value pointed to by charPtr: " << *charPtr << endl;

    cout << "\nValue of doubleVar: " << doubleVar << endl;
    cout << "Address of doubleVar: " << &doubleVar << endl;
    cout << "Value of doublePtr (address of doubleVar): " << doublePtr << endl;
    cout << "Value pointed to by doublePtr: " << *doublePtr << endl;

    // Pointer arithmetic
    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;

    cout << "\nArray elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << *(arrPtr + i) << endl;
    }

    // Pointer to pointer
    int** ptrToPtr = &ptr;

    cout << "\nValue of ptrToPtr (address of ptr): " << ptrToPtr << endl;
    cout << "Value pointed to by ptrToPtr (value of ptr): " << *ptrToPtr << endl;
    cout << "Value pointed to by the pointer pointed to by ptrToPtr: " << **ptrToPtr << endl;

    return 0;
}
