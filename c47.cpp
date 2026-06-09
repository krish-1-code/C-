//Construcot overloading;

//Same constructor name but different parameters:

#include<iostream>

class Phone{

    public:
        std::string brand;
        int series;
        
    Phone(std::string brand){

        this->brand = brand; 
    };

    Phone(std::string brand, int series){

        this->brand = brand;
        this->series = series; 
    };
};

int main() {

    Phone ph1("Samsung");
    Phone ph2("Apple",1912);

    std::cout<<"Phone 1: "<<ph1.brand<<'\n';
    std::cout<<"Phone 2: "<<ph2.brand <<" "<<ph2.series<<'\n';

    return 0;
}