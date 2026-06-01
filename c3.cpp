//CONSTANTS

#include<iostream>
int main() {

    const int age = 21;

   // int age = 99; // error will be shown

    std::cout<< age;

    //let's see if its applicable for strings

    const std::string name = "Krish";

    std::string name = "Not kih";

    std::cout<< name; //Yep string works

    return 0;


}