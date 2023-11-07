#pragma once

#include "Mark.h"
#include "Number.h"

class Card {
public:
    Card();
    Card(Mark mark, Number number);
    void operator=(const Card& other);

public:
    Mark get_mark() const {
        return _mark;
    }
    Number get_Number() const {
        return _number;
    }

protected:
    Mark _mark;
    Number _number;
};