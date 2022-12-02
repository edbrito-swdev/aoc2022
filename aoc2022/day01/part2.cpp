//
//  part2.cpp
//  aoc2022
//
//  Created by Eduardo Brito on 01/12/2022.
//

#include <iostream>
#include <array>

using namespace std;

int main(int argc, const char * argv[]) {

    int totalCal = 0;
    array<int, 3> mostCals = {0, 0, 0} ;
    string line;
    
    while(getline(cin, line)){
        
        if(0 == line.length()) {
            sort(mostCals.begin(), mostCals.end());
            if (0 == mostCals[0]){
                mostCals[0] = totalCal;
                totalCal = 0;
                continue;
            }
            
            if (totalCal > mostCals[2]) {
                mostCals[0] = mostCals[1];
                mostCals[1] = mostCals[2];
                mostCals[2] = totalCal;
            } else if (totalCal > mostCals[1]) {
                mostCals[0] = mostCals[1];
                mostCals[1] = totalCal;
            } else if (totalCal > mostCals[0]) {
                mostCals[0] = totalCal;
            }
            totalCal = 0;
            continue;
        }
        
        totalCal += stoi(line);
    }

    int endCals = mostCals[0] + mostCals[1] + mostCals[2];
    cout << endCals << endl;
    
    return 0;
}
