#ifndef POSITION_H
#define POSITION_H

#include <string>
#include "piece.h"
#include "chess_coords.h"

namespace AnoBot {

    enum CastlingRights {
        NO_CASTLING,
        WHITE_OO,
        WHITE_OOO = WHITE_OO << 1,
        BLACK_OO  = WHITE_OO << 2,
        BLACK_OOO = WHITE_OO << 3,

        KING_SIDE      = WHITE_OO  | BLACK_OO,
        QUEEN_SIDE     = WHITE_OOO | BLACK_OOO,
        WHITE_CASTLING = WHITE_OO  | WHITE_OOO,
        BLACK_CASTLING = BLACK_OO  | BLACK_OOO,
        ANY_CASTLING   = WHITE_CASTLING | BLACK_CASTLING,

        CASTLING_RIGHT_NB = 16
    };
    
    class Position {
        Piece board[Piece::PIECE_NB];
        Colour sideToMove;
        CastlingRights castlingRights;
        int rule50;
        int repetition;

        std::string set(std::string FEN);
        std::string getFEN();

        void put_piece(Piece pc, Square s);
        void remove_piece(Square s);
    };

}

#endif