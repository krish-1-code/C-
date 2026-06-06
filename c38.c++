//Recursion:

//Find the factorial of number via recursion:

#include<iostream>

int factorial(int num){

    int fct;

    if(num > 1) {
        fct = num * factorial(num-1);
    }
    else {
        return 1;
    }

    return fct;
}

int main() {

    int num;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    int fct = factorial(num);

    std::cout<< "The factorial of the number is : "<<fct;

    return 0;
}