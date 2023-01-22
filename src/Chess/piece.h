#ifndef PIECE_H
#define PIECE_H

namespace AnoBot {
    
    enum Colour {
        WHITE, BLACK, COLOR_NB = 2
    };

    enum PieceType {
        NO_PIECE_TYPE, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING,
        ALL_PIECES = 0,
        PIECE_TYPE_NB = 8
    };

    enum Piece {
        NO_PIECE,
        W_PAWN = PAWN,     W_KNIGHT, W_BISHOP, W_ROOK, W_QUEEN, W_KING,
        B_PAWN = PAWN + 8, B_KNIGHT, B_BISHOP, B_ROOK, B_QUEEN, B_KING,
        PIECE_NB = 16
    };

    constexpr Piece getPiece(Colour c, PieceType type){
        return Piece(c << 3 | type);
    }

    constexpr  Colour color_of(Piece pc) {
        return Colour(pc >> 3);
    }

    constexpr PieceType type_of(Piece pc) {
        return PieceType(pc & 7);
    }

}

#endif