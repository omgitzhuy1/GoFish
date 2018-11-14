//
// Created by Huy Do on 11/6/18.
//

#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include <vector>
#include "card.h"
#include <string>
#include "deck.h"

using namespace std;

// Constructor: Deck of cards
Deck::Deck() {
    int count = 0;
    myIndex = 0;
    while (count<SIZE){
        int cRank = 1;
        while (cRank <14) {
            if (count < 13) {
                Card c(cRank, Card::spades);
                myCards[count] = c;
            } else if (count < 26) {
                Card c(cRank, Card::clubs);
                myCards[count] = c;
            } else if (count < 39) {
                Card c(cRank, Card::diamonds);
                myCards[count] = c;
            } else {
                Card c(cRank, Card::hearts);
                myCards[count] = c;
            }
            cRank = cRank +1;
            count = count +1;
        }
    }
    for (int i=0;i<SIZE;i++){
        cout << myCards[i] << " ";
    }
}

int Deck::size() const {
    return (sizeof(myCards)/ sizeof(myCards[0]));
}

void Deck::shuffle() {
    if (size() > 1){
        for (int i=0;i<size()*2;i++){
            int r1 = rand() % size();
            int r2 = rand() % size();
            Card temp = myCards[r1];
            myCards[r1] = myCards[r2];
            myCards[r2] = temp;
        }
    }
    for (int i=0;i<SIZE;i++){
        cout << myCards[i] << " ";
    }
}

Card Deck::dealCard() {
    if (myIndex>=0 && myIndex<SIZE) {
        Card temp = myCards[myIndex];
        myIndex++;
        return temp;
    }
}