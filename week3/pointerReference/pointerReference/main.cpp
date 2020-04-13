#include <iostream>
using namespace std;
  
int main()
{
    //Integere variable
    int x;
    
    cin >> x;
    
    
  
    // A pointer variable with the same data type as the variable
    int *ptr = &x;
    
    cout << x << endl;
    cout << &ptr << endl;
    cout << ptr << endl;
  
//    // Prints the value of x
//    cout << "Value of x = "<< *ptr << endl;
//
//    // Without an * , it prints the address of x
//    cout << "Address of x = " <<  ptr << endl;
    
    return 0;
}
