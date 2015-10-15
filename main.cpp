/* 
 * File:   main.cpp
 * Author: Stanley Seeto
 *
 * Created on October 15, 2015, 10:37 AM
 * 
 * This program is an assignment that simulates the rolling of two dice
 * The sum of the two values are calculated
 * The expected frequency is compared to the actual frequency
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Roll.h"

using namespace std;

const int NUM_ROLLS = 36000;

/*
 * 
 */
int main(int argc, char** argv) {
    int num[11];
    
    for(int i = 0; i < 11; i++) {
	num[i] = 0;
    }
    
    srand(time(NULL));
    for(int i = 0; i < NUM_ROLLS; i++) {
	Roll r(rand()%6 + 1, rand()%6 + 1);
	
	if(r.result() > 12 || r.result() < 2) {
	    cerr << "Out of range calculation\n";
	    exit(1);
	}
	
	num[r.result() - 2]++;
    }
    
    cout << setw(5) << "Sum" << setw(12) << "Occurrence" 
	    << setw(20) << "Expected Frequency" 
	    << setw(18) << "Actual Frequency" << endl;
    for(int i = 0; i < 11; i++) {
	cout << setw(5) << i+2 << setw(12) << num[i] 
		<< setw(20) << ((double) -abs(i-5)+6)/(double)36
		<< setw(18) << (double)num[i]/(double)NUM_ROLLS << endl;
    }
    
    system("pause");
    return 0;
}

