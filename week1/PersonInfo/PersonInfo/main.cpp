//
//  main.cpp
//  PersonInfo
//
//  Created by Raneem Kazma on 3/21/20.
//  Copyright © 2020 Raneem Kazma. All rights reserved.
//
#include <iostream>
using namespace std;

//create a person class

class person{
    //create public class fields
public:
    string name;
    string lastname;
    string address;
    string city;
    string zipcode;
    
    //create getters for class fields
    const string getname(){
        return name;
    }
    
    const string getlastname(){
        return lastname;
    }

    const string getaddress(){
        return address;
    }
    
    const string getcity(){
        return city;
    }
    
    const string getzipcode(){
        return zipcode;
    }


//overwrite operator function to allow printing class objects
    friend ostream& operator<< (ostream &out, person data) {
    out << data.getname() << ' ';
    out << data.getlastname() << ',';
    out << data.getaddress() << ',';
    out << data.getcity() << ',';
    out << data.getzipcode() << ' ';

        return out;
    }
    
};

//main function
int main(int argc, const char * argv[]) {
    //create class object
    person p;
    //set object attributes
    p.name = "Jonathan";
    p.lastname = "Murray";
    p.address = "123 King Street";
    p.city = "Los Angeles";
    p.zipcode = "6789";
    
    //print object
    cout<< p << '\n';
    return 0;
}
