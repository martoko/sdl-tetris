#ifndef TETRIS_CPP_SDL2_TETRISWINDOW_HPP
#define TETRIS_CPP_SDL2_TETRISWINDOW_HPP


#include <vector>
#include "sdl/Window.hpp"
#include "sdl/Texture.hpp"
#include "Piece.hpp"
#include "Pieces.hpp"
#include "sdl/Timer.hpp"
#include "Tetromino.hpp"

const int BOARD_WIDTH = 264;
const int BOARD_HEIGHT = 402;

class TetrisWindow : public SDL::Window {
    SDL::Texture *tetromino_texture;
    SDL::Texture *board_img;
    SDL::Texture *ghost_texture;
    SDL::Texture *pause_img;

    TTF_Font *ubuntu_regular_20;
    TTF_Font *ubuntu_regular_48;
    SDL::Texture *score_text_texture;
    SDL::Texture *next_text_texture;
    SDL::Texture *hold_text_texture;
    SDL::Texture *pause_text_texture;

public:
    TetrisWindow(std::string name);

    virtual ~TetrisWindow();

    void drawBoard(int board[10][24]);

    void draw(Tetromino *tetromino);

    void drawPiece(int color, int x, int y);

    void drawGhost(Tetromino *tetromino);

    void drawGhostPiece(int color, int x, int y);

    void drawHold(Tetromino *tetromino);

    void drawGuiPiece(int color, int x, int y);

    void drawGui(Tetromino *tetromino, int anchor_x, int anchor_y);

    void drawNext(Tetromino *tetromino, int index);

    void drawPause();

    void drawBackground();

    void drawScoreValue(int score);
};


#endif //TETRIS_CPP_SDL2_TETRISWINDOW_HPP
