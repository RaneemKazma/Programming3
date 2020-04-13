//
//  main.cpp
//  salaryCalc
//
//  Created by Raneem Kazma on 4/11/20.
//  Copyright © 2020 Raneem Kazma. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    double hours = 0;
    double rate = 0;
    double overtime = 0;
    double overtimeRate = 1.5;
    double salary = 0;
    
    cout << "Enter your hours worked toaday" << endl;
    cin >> hours;
    double* ptr1 = new double(hours);
    
    cout << "Enter your hourly rate" << endl;
    cin >> rate;
    double* ptr2 = new double(rate);
    
    cout << "Enter your over time hours" << endl;
    cin >> overtime;
    double* ptr3 = new double(overtime);
    
    cout << "Your  hours worked taday are " << *ptr1 << endl;
    cout << "Your  hours worked taday are stored at " << ptr1 << endl;
    
    cout << "Your hourly rate is " << *ptr2 << endl;
    cout << "Your hourly rate is stored at " << ptr2 <<endl;
    
    cout << "Your over time hours are " << *ptr3 <<endl;
    cout << "Your over time hours are stored at " << ptr3 <<endl;
    
    salary = (hours*rate) + (overtime*overtimeRate*rate);
    cout << "Your salary for today is ";
    cout << salary << setw(10)<<setprecision(5) << endl;
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
