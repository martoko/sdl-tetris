#include "Pieces.hpp"

/**
 * @return All possible tetrominos, at all possible rotations
 */
std::vector<std::vector<std::vector<Piece>>> getPieces() {

    int pieces_raw[7][4][4][4] = {
            {
                    {
                            {0, 0, 0, 0},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0},
                            {0, 0, 0, 0}},

                    {
                            {0, 0, 1, 0},
                            {0, 0, 1, 0},
                            {0, 0, 1, 0},
                            {0, 0, 1, 0}},

                    {
                            {0, 0, 0, 0},
                            {0, 0, 0, 0},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0}},

                    {
                            {0, 1, 0, 0},
                            {0, 1, 0, 0},
                            {0, 1, 0, 0},
                            {0, 1, 0, 0}},
            },
            {
                    {
                            {0, 1, 1, 0},
                            {0, 1, 1, 0},
                            {0, 0, 0, 0}},

                    {
                            {0, 1, 1, 0},
                            {0, 1, 1, 0},
                            {0, 0, 0, 0}},

                    {
                            {0, 1, 1, 0},
                            {0, 1, 1, 0},
                            {0, 0, 0, 0}},

                    {
                            {0, 1, 1, 0},
                            {0, 1, 1, 0},
                            {0, 0, 0, 0}},
            },
            {
                    {
                            {0, 1, 0},
                            {1, 1, 1},
                            {0, 0, 0}},

                    {
                            {0, 1, 0},
                            {0, 1, 1},
                            {0, 1, 0}},

                    {
                            {0, 0, 0},
                            {1, 1, 1},
                            {0, 1, 0}},

                    {
                            {0, 1, 0},
                            {1, 1, 0},
                            {0, 1, 0}},
            },
            {
                    {
                            {0, 1, 1},
                            {1, 1, 0},
                            {0, 0, 0}},

                    {
                            {0, 1, 0},
                            {0, 1, 1},
                            {0, 0, 1}},

                    {
                            {0, 0, 0},
                            {0, 1, 1},
                            {1, 1, 0}},

                    {
                            {1, 0, 0},
                            {1, 1, 0},
                            {0, 1, 0}},
            },
            {
                    {
                            {1, 1, 0},
                            {0, 1, 1},
                            {0, 0, 0}},

                    {
                            {0, 0, 1},
                            {0, 1, 1},
                            {0, 1, 0}},

                    {
                            {0, 0, 0},
                            {1, 1, 0},
                            {0, 1, 1}},

                    {
                            {0, 1, 0},
                            {1, 1, 0},
                            {1, 0, 0}},
            },
            {
                    {
                            {1, 0, 0},
                            {1, 1, 1},
                            {0, 0, 0}},

                    {
                            {0, 1, 1},
                            {0, 1, 0},
                            {0, 1, 0}},

                    {
                            {0, 0, 0},
                            {1, 1, 1},
                            {0, 0, 1}},

                    {
                            {0, 1, 0},
                            {0, 1, 0},
                            {1, 1, 0}},
            },
            {
                    {
                            {0, 0, 1},
                            {1, 1, 1},
                            {0, 0, 0}},

                    {
                            {0, 1, 0},
                            {0, 1, 0},
                            {0, 1, 1}},

                    {
                            {0, 0, 0},
                            {1, 1, 1},
                            {1, 0, 0}},

                    {
                            {1, 1, 0},
                            {0, 1, 0},
                            {0, 1, 0}},

            },
    };

    std::vector<std::vector<std::vector<Piece>>> top_pieces;

    for (int color = 0; color < 7; ++color) {
        std::vector<std::vector<Piece>> color_pieces;

        for (int rot = 0; rot < 4; ++rot) {
            std::vector<Piece> rot_pieces;

            for (int y = 0; y < 4; ++y) {
                for (int x = 0; x < 4; ++x) {
                    if (pieces_raw[color][rot][y][x] == 1) {
                        rot_pieces.push_back(Piece(x, y));
                    }
                }
            }
            color_pieces.push_back(rot_pieces);
        }

        top_pieces.push_back(color_pieces);
    }

    return top_pieces;
}