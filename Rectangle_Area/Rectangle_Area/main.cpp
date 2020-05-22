//
//  main.cpp
//  Rectangle_Area
//
//  Created by Gaurav  Shende on 5/22/20.
//  Copyright © 2020 Gaurav  Shende. All rights reserved.
//

#include <iostream>
using namespace std;

struct rect{
    int length;
    int breadth;
};

int main(int argc, const char * argv[]) {
    struct rect usr_rect;
    
    cout << "Enter the Length: \t";
    cin >> usr_rect.length;
    
    cout << "\nEnter the Breadth: \t";
    cin >> usr_rect.breadth;
    
    cout << "\nArea is = " << usr_rect.length * usr_rect.breadth << " " ;
    
    return 0;
}
