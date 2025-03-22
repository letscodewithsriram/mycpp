// Author: Sriram Ramanujam
// Date: 21st march 2025

# include <iostream>
# include <typeinfo>
# include <cmath>
# include <valarray>
# include <numeric>

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

    int x, y, z; 
    x = y = z = 50;

    cout << x + y + z + "\n";

    const int myNum1 = 10;
    // myNum1 = myNum1 + 10;
    // practice.cpp:46:23: error: assignment of read-only variable 'myNum1'
    //cout << __LINE__ << " " << myNum1 << "\n"; 
    std::cout << "File: " << __FILE__ << ", Function: " << __func__ << ", Line: " << __LINE__ << std::endl;

}

void cpp_version() {
    std::cout << "C++ Version" << __cplusplus << std::endl;
}

void in_out_calc() {
    int x, y;
    int sum;

    cout << "Type the first number\n";
    std::cin >> x;

    cout << "Type the second number";
    std::cin >> y;

    sum = x + y;

    cout << "Sum is :" << sum;
}

void popertors () {
    int x = 100 + 50;
    int sum = x + x;
    cout << sum;
    sum++;
    cout << sum;
    ++sum;
    cout << sum;
    cout << --sum;
    cout << 301%10;
}

void peuler_01() {

    /*
    If we list all the natural numbers below 10 that are multiples of 3 or 5 , we get 3,5,6 and 9. 
    The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000. 
    */

    int _i = 0, sum = 0;
    while ( _i < 1000) {
        // cout << _i << "\n";
        if ( _i % 3 == 0 ||  _i % 5 == 0){
            sum = sum + _i;
            // cout << _i << " , "  << sum << "\n";
        }
        _i++;
    }
    cout << "\nSum: " << sum << "\n";
}

void peuler_02(){
    int _i = 1;
    int fibArr[] = {0,1};
    int sum = 0;
    // int prev = 0, cur =0, fib = 0; 
    while ( _i < 10) {
        //cout << _i;
        cout << _i << " , ";
        sum = accumulate(fibArr, fibArr+2, sum);
        cout << "da " << sum;
        _i++;
    }
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

    // Input & Output - Calculator
    // in_out_calc();

    // Operators
    popertors();

    peuler_01();

    peuler_02();

    return 0;


}