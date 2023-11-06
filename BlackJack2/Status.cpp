#include <iostream>
#include "Card.h"
#include "Status.h"

Card MakeRandomCard();

//�R���X�g���N�^
Status::Status() {
    _pcard = new Card[11];
    for (int i = 0; i < 11; ++i) {
        _pcard[i] = MakeRandomCard();
    }
    _outwardlyNum = 1;
    _score = 0;
}
//�R�s�[�R���X�g���N�^
Status::Status(const Status& other) {
    _pcard = new Card[11];
    for (int i = 0; i < 11; ++i) {
        _pcard[i] = other._pcard[i];
    }
    _outwardlyNum = other._outwardlyNum;
    _score = other._score;
}
//�f�X�g���N�^
Status::~Status() {
    if (_pcard != NULL) {
        delete[] _pcard;
        _pcard = NULL;
    }
}