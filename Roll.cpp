/* 
 * File:   Roll.cpp
 * Author: Azusa
 * 
 * Created on October 15, 2015, 12:58 PM
 */

#include "Roll.h"

Roll::Roll() {
}

Roll::Roll(const Roll& orig) {
    this->die1 = orig.die1;
    this->die2 = orig.die2;
}

Roll::~Roll() {
}

Roll::Roll(int die1, int die2) {
    this->die1 = die1;
    this->die2 = die2;
}

int Roll::result() {
    return die1 + die2;
}
