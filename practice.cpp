// Author: Sriram Ramanujam
// Date: 21st march 2025

# include <iostream>
# include <typeinfo>
# include <cmath>
# include <valarray>
# include <numeric>
# include <cstdlib>

using namespace std;

void prac_print() {
    // cout << "prac_print >>>> starts\n";
    // cout << "String\n";
    // cout << 3;
    // cout << "\n" << 3 << " String\n";
    // cout << "prac_print >>>> ends\n";
}

void prac_comments() {
    // std::cout << __PRETTY_FUNCTION__ << " >>>> Starts\n";
    // singleLine

    /* 
        Multi-line
    */
//    cout << __PRETTY_FUNCTION__ << " >>>> Ends\n";
}

void prac_variables() {
    int myNum = 10;
    double myFloatNum = 5.99;
    char myChar = 'D';
    string myString = "I'm Sriram";
    bool myBoolean = true;

    // std::cout << typeid(myNum).name() << " \n"
    // << myFloatNum << typeid(myFloatNum).name() << " \n"
    // << myChar << " " << typeid(myChar).name() << " \n"
    // << myString <<  " " << typeid(myString).name() << " \n"
    // << myBoolean <<  " " <<  typeid(myBoolean).name() << " \n";

    int x, y, z; 
    x = y = z = 50;

    // cout << x + y + z + "\n";

    const int myNum1 = 10;
    // myNum1 = myNum1 + 10;
    // practice.cpp:46:23: error: assignment of read-only variable 'myNum1'
    // cout << __LINE__ << " " << myNum1 << "\n"; 
    // std::cout << "File: " << __FILE__ << ", Function: " << __func__ << ", Line: " << __LINE__ << std::endl;

}

void cpp_version() {
    // std::cout << "C++ Version" << __cplusplus << std::endl;
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
    // cout << sum;
    sum++;
    // cout << sum;
    ++sum;
    // cout << sum;
    // cout << --sum;
    // cout << 301%10;
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
    // cout << "\nSum: " << sum << "\n";
}

void peuler_02(){
    int _i = 1;
    int fibArr[2] = {0,1};
    int sum1, sum2, sum, evenSum = 0;
    // cout << "----> " << fibArr[0] << "\n";
    
    // int prev = 0, cur =0, fib = 0; 
    while ( _i < 100) {
        // cout << _i;
        // sum1 = accumulate(fibArr, fibArr+2, 0);
        sum = fibArr[0] + fibArr[1];
        if (sum > 5000000) {
            break;
        } 
        if (sum % 2 == 0) {
            evenSum = evenSum + sum;
        }
        cout << "Array of f: " << fibArr[0] << " , " << fibArr[1] << " = " << sum << " -- Even Sum: " << evenSum << "\n";
        fibArr[0] = fibArr[1];
        fibArr[1] = sum;
        _i++;
    }
    // cout << "sum1 "<< sum1 << " sum2 " << sum2;
    cout << "Even Value is: " << evenSum;
}

void parray() {
    int f[2] = {2, 10};
    // cout << "Array Print" << f 
    //     << " 1st One " << f[0];
    // cout << "\n Accumulate: " <<  accumulate(f, f +2, 0) << "\n";
    // cout << "\n Size of Array: " << sizeof(f[0]);
    // // int _sum = 
}
 
int main() {

    // Clear the Output Screen
    // system("CLS");
    // std::cout << "\033[2J\033[H"; 

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

    parray();

    return 0;


}