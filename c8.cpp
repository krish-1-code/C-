//Taking User Input:

#include<iostream>
int main() {

    std::string name;
    int age;

    //since name has a space inbetween the first and last name
    // we use the getline keyword.

    std::cout<<"Enter your name: "<<'\n';
    std::getline(std::cin>>std::ws, name);

    std::cout<<"Enter your age: "<<'\n';
    std::cin >> age;

    std::cout<< "My name is "<<name<<". I'm " <<age <<" years  old"<<'\n';
    return 0;
}