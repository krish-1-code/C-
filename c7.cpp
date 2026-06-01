//Time for type conversion:

#include<iostream>
int main() {

    int correct = 9;
    int total = 10;

    double percentage = (correct / total) * 100;

    std::cout<< "Total percentage is "<<percentage<<'\n';
    
    //Shockingly the result is 0. Why? because it's a integer divsion
    // Atleast one of the two values needs to be a float or a double 
    

    int correct1 = 9;
    int total1 = 10;

    double percent = ((double) correct1 / total1) * 100;

    std::cout<< "Total percentage is "<<percent<<'\n';
    
    return 0;
}
