// Here we will be stuyding the datatypes in C++: int double chat and std::string

#include <iostream>

int main() {
    
    //Integer datatype
    int age = 20;
    int score = 89;

    std::cout<<"I am " <<age << " years old" <<'\n';
    std::cout<<"I got "<< score <<" in Maths" << '\n'; 

    //Decimal values;

    float gpa = 3.7; // can also use double datatype.

    std::cout<<"My gpa is " << gpa<< '\n';

    //Char datatype:

    char grade = 'A';
    std::cout<<"I got a "<< grade <<" in English"<<'\n';

    //String datatype:

    std::string name = "Krish Kushwaha";

    std::cout<<"Greetings, My name is " << name <<'\n';

    return 0;
}