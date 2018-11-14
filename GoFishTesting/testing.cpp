//
// Created by Huy Do on 11/6/18.
//

#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include <string>
#include "card.h"
#include "deck.h"

using namespace std;

int main(){
    cout << "Hello World" << endl;
    srand(time(0));
    Card c1;
    Card c2(11, Card::spades);

    cout << "Testing << overload and toString()" << endl;
    cout << "Card1: " << c1 << endl;
    cout << "Card2: " << c2 << endl;

    int rank1 = c1.getRank();
    int rank2 = c2.getRank();

    cout << rank1 << " " << rank2 << endl;

    if(c1.sameSuitAs(c2))
        cout << "same suit" << endl;
    else
        cout << "not same suit" << endl;

    if (c1 == c2)
        cout << "== equal rank" << endl;
    else
        cout << "== not equal rank" << endl;

    if (c1 != c2)
        cout << "!= not equal rank" << endl;
    else
        cout << "!= equal rank" << endl;

    cout << "Testing Deck() constructor" << endl;
    Deck d1;
    cout << "\nd1: " << d1.size() << " cards" << endl;

    cout << "Testing shuffle" << endl;
    d1.shuffle();

    cout << "\nTesting Deal Card" << endl;
    cout << d1.dealCard() << " " << d1.dealCard() << endl;
    return 0;
}