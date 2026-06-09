// Inheritence:

//Child class containing h=the attibutes and methods of function class:

// Syntax:   class dog : public Animal 


#include<iostream>

class electronic{

    public:    
        std::string device;
        bool screen;
        int size;
};

class Phone : public electronic{

};

int main() {

    Phone p1;
    p1.device = "Iphone";
    p1.screen = true;
    p1.size = 12;

    std::cout<<"Device Name: "<<p1.device<<'\n';

    return 0;
}
