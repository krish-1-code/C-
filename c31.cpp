// Pass by value vs pass by reference

//Pass by value means we just send the value of a variable to a function, but pass by reference means we send the memory address of the variable:

//Pass by value creates a copy of the original vraiable we can't really edit the original variable,
// but with pass by refernece we can modify the orignal variable:

#include<iostream>

void swap(int &x, int &y);

int main() {

     int x = 6;
     int y = 7;

    swap(x,y);

    std::cout<<"X : "<<x<<'\n';
    std::cout<<"Y : "<<y<<'\n';

    return 0;
}

void swap(int &x, int &y) {

    int temp;
    temp = x;
    x  = y;
    y = temp;
}