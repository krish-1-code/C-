//Array in C++

//It's just like how we use array in C

//Arrays of number:

#include<iostream>
int main() {

    int score[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){

        std::cout<<score[i]<<'\t';
    }

}