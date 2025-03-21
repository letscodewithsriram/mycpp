// Author: Sriram Ramanujam
// Date: 21st march 2025

# include <iostream>
# include <typeinfo>

using namespace std;

void prac_print() {
    cout << "prac_print >>>> starts\n";
    cout << "String\n";
    cout << 3;
    cout << "\n" << 3 << " String\n";
    cout << "prac_print >>>> ends\n";
}

void prac_comments() {
    std::cout << __PRETTY_FUNCTION__ << " >>>> Starts\n";
    // singleLine

    /* 
        Multi-line
    */
   cout << __PRETTY_FUNCTION__ << " >>>> Ends\n";
}

void prac_variables() {
    int myNum = 10;
    double myFloatNum = 5.99;
    char myChar = 'D';
    string myString = "I'm Sriram";
    bool myBoolean = true;

    std::cout << typeid(myNum).name() << " \n"
    << myFloatNum << typeid(myFloatNum).name() << " \n"
    << myChar << " " << typeid(myChar).name() << " \n"
    << myString <<  " " << typeid(myString).name() << " \n"
    << myBoolean <<  " " <<  typeid(myBoolean).name() << " \n";

}

void cpp_version() {
    std::cout << "C++ Version" << __cplusplus << std::endl;
}

int main() {

    // CPP Version
    cpp_version();

    // For print practice -> Calling prac_print
    prac_print(); 

    // For comment practice -> Calling prac_comments
    prac_comments();

    // Variables 
    prac_variables();
    return 0;


}