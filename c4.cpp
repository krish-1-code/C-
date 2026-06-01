//Namespace: allowing multiple use of the same variable but in a differnt scope
// resolving naming conflicts
#include<iostream>

namespace firstuse{

    int age = 21;
}

namespace seconduse{

    int age = 22;
}


int main() {

    int age = 20;

    std::cout<<age<<'\n';
    std::cout<<firstuse::age<<'\n'; // :: double colon is called scope resolution operator
    std::cout<<seconduse::age<<'\n';


    //beside these namespace is also useful to avoid repitition

    using std::string;
    using std::cout;

    string name = "Krish Kushwaha";
    cout<<name<<'\n';
    return 0;
}