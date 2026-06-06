// Structure: Collection of multiple datatypes

//Array was like a collection of same datatypes; but with struct we can have collection of many differnt datatype:


#include<iostream>

struct student{

    std::string name;
    int age;
    double gpa;
    char grade;
};

int main() {

    student s1;
    s1.name = "Krish Kushwaha";
    s1.age = 21;
    s1.gpa = 3.9;
    s1.grade = 'A';

    std::cout<< s1.name <<'\n';
    std::cout<< s1.age <<'\n';
    std::cout<< s1.gpa <<'\n';
    std::cout<< s1.grade <<'\n';

    return 0;
}