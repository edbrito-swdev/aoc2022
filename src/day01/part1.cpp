//
//  part1.cpp
//  aoc2022
//
//  Created by Eduardo Brito on 01/12/2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int totalCal = 0, mostCals=0;
    string line;
    
    while(getline(cin, line)){
        
        if(0 == line.length()) {
            if (totalCal > mostCals) {
                mostCals = totalCal;
            }
            totalCal = 0;
            continue;
        }
        
        totalCal += stoi(line);
    }
    
    if (totalCal > mostCals) {
        mostCals = totalCal;
    }

    cout << mostCals << endl;
    
    return 0;
}
