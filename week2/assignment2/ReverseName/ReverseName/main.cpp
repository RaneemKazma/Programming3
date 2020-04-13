//
//  main.cpp
//  ReverseName
//
//  Created by Raneem Kazma on 3/29/20.
//  Copyright © 2020 Raneem Kazma. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string reverse(string name){
    string removed;
    string reversedName = name;
    int index = name.length()-1;
    
    for(int i = 0; i < name.length(); i++){
        reversedName[i] = name[index - i];
        
        
    }
    
    return reversedName;
    

}

int main() {
    string name;
    int counter = 0;
    string output;
    while (counter < 3){
        cout<<"Please enter a name"<<endl;
        cin>>name;
        output = reverse(name);
        cout<<"the reversed name is "<<endl;
        cout << output << endl;
        counter++;
    }
    return 0;
}
