#include <iostream>

using namespace std;

int main()
{
    cout << "C++ data types" << endl;
    
    cout << "Basic Data Types:" << endl;

    int age = 28;
    double price = 8.99;
    char grade = 'A';
    std::string message = "Game Over";
    bool late_to_work = true;
    
    cout << " int age = " << age << endl;
    cout << " double price = " << price << endl;
    cout << " char grade = " << grade << endl;
    cout << " std::string message = " << message << endl;
    cout << " bool late_to_work = " << late_to_work << endl;
    
    cout << "Datatype Modifiers:" << endl;
    cout << " signed" << endl;
    cout << " unsigned" << endl;
    cout << " short" << endl;
    cout << " long" << endl;
    
    cout << "Const:" << endl;
    const double quarter = 0.25;
    // and now variable quarter can only be 0.25
    cout << " const double quarter = " << quarter << endl;
    
    cout << "Type Conversion:" << endl;

    double weight1;
    int weight2;

    weight1 = 154.49;
    weight2 = (int) weight1;

    // weight2 is now 154
    cout << " weight2 now is " << weight2 << endl;

    return 0;
}

/* Output:

C++ data types
Basic Data Types:
 int age = 28
 double price = 8.99
 char grade = A
 std::string message = Game Over
 bool late_to_work = 1
Datatype Modifiers:
 signed
 unsigned
 short
 long
Const:
 const double quarter = 0.25
Type Conversion:
 weight2 now is 154

** Process exited - Return Code: 0 **
*/
