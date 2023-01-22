#include <catch2/catch_all.hpp>

#include "../src/Chess/piece.h"

// general tests
TEST_CASE("do Tests works!"){
    REQUIRE(true);
}

// data test
TEST_CASE("making Pieces") {

    using namespace AnoBot;
    REQUIRE(getPiece(Colour::BLACK, PieceType::KING) == Piece::B_KING);
    REQUIRE(getPiece(Colour::BLACK, PieceType::QUEEN) == Piece::B_QUEEN);
    REQUIRE(getPiece(Colour::BLACK, PieceType::ROOK) == Piece::B_ROOK);
    REQUIRE(getPiece(Colour::BLACK, PieceType::BISHOP) == Piece::B_BISHOP);
    REQUIRE(getPiece(Colour::BLACK, PieceType::KNIGHT) == Piece::B_KNIGHT);
    REQUIRE(getPiece(Colour::BLACK, PieceType::PAWN) == Piece::B_PAWN);

    REQUIRE(getPiece(Colour::WHITE, PieceType::KING) == Piece::W_KING);
    REQUIRE(getPiece(Colour::WHITE, PieceType::QUEEN) == Piece::W_QUEEN);
    REQUIRE(getPiece(Colour::WHITE, PieceType::ROOK) == Piece::W_ROOK);
    REQUIRE(getPiece(Colour::WHITE, PieceType::BISHOP) == Piece::W_BISHOP);
    REQUIRE(getPiece(Colour::WHITE, PieceType::KNIGHT) == Piece::W_KNIGHT);
    REQUIRE(getPiece(Colour::WHITE, PieceType::PAWN) == Piece::W_PAWN);
}

