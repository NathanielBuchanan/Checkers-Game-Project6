/**
 *  @file       checkers.h
 *  @author     Nathaniel Buchanan (nb333218@ohio.edu)
 *  @brief      This is Part A of Project 6 for CS 2401. This is the header
 *              file for the game of checkers. It has the 4 functions that are 
 *              in use for the implementation, and the rest of them are stubs
 *              but are not currently being used.
 *  @version    0.1
 *  @date       2020-11-24
 * 
 *  @copyright  Copyright (c) 2020
 */
#ifndef CHECKERS_H
#define CHECKERS_H
#include "game.h"
#include "space.h"
namespace main_savitch_14
{
    class Checkers:public game
    {
        public:
            ///default contructor
            Checkers();
            ///The next player makes a specified move
    	    void make_move(const std::string& move);
            ///Restarts the game at the beginning
    	    void restart();
            ///Display the status of the current game
            void display_status() const;
            ///Returns true if the given move is legal for the next player
            bool is_legal(const std::string& move) const;

            ///stubs of the purely virtual functions

            /// Return a pointer to a copy of myself: PHASE 3
            game* clone() const {}
            /// Compute all the moves that the next player can make: PHASE 3
            void compute_moves(std::queue<std::string>& moves) const {}
            /// Evaluate a board position: PHASE 3
            /// NOTE: positive values are good for the computer.
            int evaluate() const {}
            /// Return true if the current game is finished: PHASE 2
            bool is_game_over() const {}
        private:
            Space board[8][8];
    };
}
#endif ///CHECKERS_H