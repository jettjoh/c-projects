//
//  main.cpp
//  Test C++ Project
//
//  Created by Jett Johanson on 5/4/17.
//  Copyright © 2017 Jett Johanson. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;
int main()

/*{ This is the program where you choose what the number is.
    int x;
    cout << "The Human Population is in Jeopardy, guess the right number, save the world. ";
    cin >> x;
    if (x == 1) {
        cout << "You saved the world!" << endl; }
    else if (x != 1) {
        cout << "The world has exploded!" << endl; }
}
*/
{
    unsigned int randomnumber;
    int x;
    srand( time(0)); // This will ensure a really randomized number by help of time.
    randomnumber=rand()%15+1; // Randomizing the number between 1-15.
    cout << "Quickly, type a number! If your number is right, you save the world! ";
    cin >> x; // User input
    if (x == randomnumber) {
        cout << "You saved the world!" << endl; }
    else if (x != randomnumber) {
        cout << "The world exploded!" << endl; }
        cout << "The random number was " << randomnumber << endl;
    return 0;
}
