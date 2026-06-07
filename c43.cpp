//Passing struct as argument.

// if you just have to print the details of a struct you can use pass by value,
// but, when you have to modify something in the original struct, you can use pass by reference.

//In this code we will just be doing pass by reference;
#include<iostream>

struct Cars{

    std::string name;
    std::string color;
    int year;
};

void printcars(Cars &car, std::string color){

    car.color = color;
    std::cout<<"Name : " << car.name<<'\n';
    std::cout<<"Color : " << car.color<<'\n';
    std::cout<<"Year : " << car.year<<'\n';

}

int main() {

    Cars car1, car2;

    car1.name = "Mustang";
    car1.color = "Black";
    car1.year = 2012;

    car2.name = "Lambo";
    car2.color = "Golden";
    car2.year = 2022;

    // Chnage the color of Mustang to Pink and lambo the ocean blue 
    printcars(car1, "pink");
    printcars(car2, "Ocean Blue");
    

    return 0;
}