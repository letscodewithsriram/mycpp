// Author: Sriram Ramanujam
// Date: 21st march 2025

# include <iostream>

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

int main() {

    // For print practice -> Calling prac_print
    prac_print(); 

    // For comment practice -> Calling prac_comments
    prac_comments();
    return 0;
}