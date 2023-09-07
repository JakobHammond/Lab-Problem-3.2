//
//  main.cpp
//  p3.2
//
//  Created by Jakob Hammond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void){
    int int1;
    int int2;
    int sum;
    int diff;
    int product;
    double avg;
    
    //prompt user for integers
    cout << "Enter integer 1: ";
    cin >> int1;
    cout << "Enter integer 2: ";
    cin >> int2;
    
    sum = int1 + int2;
    diff = int1 - int2;
    product = int1 * int2;
    avg = (double) sum / 2;
    cout << "Sum is " << sum << "\nDifference is " << diff << "\nProduct is " << product << "\nAverage is " << avg << endl;
    
}
