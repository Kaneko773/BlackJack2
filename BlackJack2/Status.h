#pragma once

#include "Mark.h"
#include "Number.h"
#include "Card.h"

class Status :
    public Card {
public:
    Status();
    Status(const Status& other);
    ~Status();

public:
    Card get_pcard(int Index) {
        return _pcard[Index];
    }
    int get_outwardlyNum() {
        return _outwardlyNum;
    }
    void set_outwardlyNum() {
        ++_outwardlyNum;
    }
    int get_score() {
        return _score;
    }
    void set_score(Number point) {
        point == reset ? _score = 0 : _score += point;
    }

protected:
    Card* _pcard;
    int _outwardlyNum;
    int _score;
};