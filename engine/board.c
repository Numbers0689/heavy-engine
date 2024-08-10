#include<stdio.h>
#include"heavy.h"

void ResetBoard(STRUCT_BOARD *pos) {
    int i = 0;

    for (i = 0; i < BOARD_SQ_NUM; ++i) {
        pos->pieces[i] = OFFBOARD;
    }

    for (i = 0; i < 64; ++i) {
        pos->pieces[SQ120(i)] = EMPTY;
    }

    for (i = 0; i < 3; i++) {
        pos->bigPiece[i] = 0;
        pos->majorPiece[i] = 0;
        pos->minorPiece[i] = 0;
        pos->pawns[i] = 0ULL;
    }

    for (i = 0; i < 13; i++) {
        pos->pieceNum[i] = 0;
    }

    pos->kingSq[WHITE] = pos->kingSq[BLACK] = NO_SQ;
    pos->side = BOTH;
    pos->enPas = NO_SQ;
    pos->fiftyMove = 0;

    pos->ply = 0;
    pos->hisPly = 0;

    pos->castlePerm = 0;

    pos->positionKey = 0ULL;
}