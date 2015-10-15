/* 
 * File:   Roll.h
 * Author: Azusa
 *
 * Created on October 15, 2015, 12:58 PM
 */

#ifndef ROLL_H
#define	ROLL_H

class Roll {
public:
    Roll();
    Roll(const Roll& orig);
    virtual ~Roll();
    explicit Roll(int, int);
    int result();
private:
    int die1, die2;
};

#endif	/* ROLL_H */

