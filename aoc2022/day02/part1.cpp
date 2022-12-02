//
//  part1.cpp
//  aoc2022
//
//  Created by Eduardo Brito on 02/12/2022.
//

#include <iostream>

using namespace std;

int winningTable[3][3] = {{3,6,0}, 
                          {0,3,6},
                          {6,0,3}};

int resultPlay(int opponent, int me) {
    return winningTable[opponent][me];
}

int main(int argc, const char * argv[]) {

    int totalScore = 0;
    char opponent, me;
    int valO, valM, valR;
    string line;
    
    while(getline(cin, line)){
        opponent = line.at(0);
        me = line.at(2);        

        valO = opponent - 'A';
        valM = me - 'X';
        valR = resultPlay(valO, valM) + valM + 1;
        cout << valO << valM << ' ' << valR << endl;
        totalScore += valR;        
    }

    cout << totalScore << endl;
    
    return 0;
}
