#pragma once

#include "Mark.h"
#include "Number.h"

class Card {
public:
    Card();
    Card(Mark mark, Number number);
    void operator=(const Card& other);

public:
    Mark get_mark() {
        return _mark;
    }
    Number get_Number() {
        return _number;
    }

protected:
    Mark _mark;
    Number _number;
};