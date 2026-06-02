//For loop:

//Print a table of any number given by the user:

#include<iostream>
int main() {

    int table;
    std::cout<<"Which table do you want to print: "<<'\n';
    std::cin>>table;

    for(int i = 1; i <= 10; i++){

        std::cout<<table <<" X "<< i << " = " << table*i<<'\n';
    }


    return 0;
}