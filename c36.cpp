// Null Pointers.

//Null pointers are pointers which points to nothing;
// Advantages ???:
// 1. To check if a value was assigned to a pointer.
// 2. Helps with error protection while dereferencing a pointer.
// 3. It's a good practice to assign "nullptr" to a pointer during initialization:

#include<iostream>

int main() {

    int *ptr = nullptr;

    int num = 67;

    ptr = &num; // without this line if we print ptr the output would be zero;

    std::cout<<ptr<<'\n';


    //Especially while working with Dynamic Memory Allocation;
    // Sometimes addresses might not be assign to the pointer so it can be helpful to check if we have the address
    // or the poinetr is pointing to null value.

    if (ptr == nullptr) {

        std::cout<< "Pointer has no assigned value";
    }
    else {
        std::cout<<"Value was assigned to the poiner"<<'\n';
        std::cout<<*ptr;
    }
    return 0;
}