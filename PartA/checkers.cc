/**
 *  @file       checkers.cc
 *  @author     Nathaniel Buchanan (nb333218@ohio.edu)
 *  @brief      This is Part A of Project 6 for CS 2401. This is the implementation
 *              file for the game. It allows the program to draw the board, and then
 *              it allows for One move to work. If the move does not work, then it 
 *              says that it is illegal.
 *  @version    0.1
 *  @date       2020-11-24
 * 
 *  @copyright  Copyright (c) 2020
 */
#include "game.h"
#include "checkers.h"
namespace main_savitch_14
{
    ///default contructor
    Checkers::Checkers()
    {
        game::restart();
    }

    ///Restarts the game at the beginning
    void Checkers::restart()
    {
        ///both of these loops are making the board all empty; loop is vertical
        for(size_t i = 0; i < 8; i++)
        {
            ///this loop is for horizontal
            for(size_t j = 0; j < 8; j++)
            {
                board[i][j].make_empty();
            }
        }
        ///both of these loops are making the board have blue/white spaces; loop is vertical
        for(size_t i = 0; i < 8; i++)
        {
            ///this loop is for horizontal
            for(size_t j = 0; j < 8; j++)
            {
                if((i + j) % 2 == 0)
                {
                    board[i][j].make_unplayable();
                }
                ///add sum of the two numbers in 2D array, if odd, it places it
                else if(i < 3 && (i + j) % 2 == 1)
                {
                    board[i][j].make_blue();
                }
                else
                {
                    board[i][j].make_white();
                }
            }
            ///handles the two middle spaces that have no space; this algorithm is odd, but it works
            if(i == 2)
            {
                ///must add 1 to i b/c it is doing the next one (use new temp variable)
                int tempI = i + 1;
                ///loop that is going to go through and fill in the two middle sections
                for(size_t middleSections = 0; middleSections < 2; middleSections++)
                {
                    for(size_t j = 0; j < 8; j++)
                    {
                        if((tempI + j) % 2 == 0)
                        {
                            board[tempI][j].make_unplayable();
                        }
                        else if((tempI + j) % 2 == 1)
                        {
                            board[tempI][j].make_empty();
                        }
                    } ///closes the loop that is going through the row for middle section
                    tempI = tempI + 1;
                } ///closes the loop dealing with the middle section
                ///the skip over the middle two spots that start with no pieces
                i = i + 2;
            } ///closes if(i == 2)
        } ///closes the for loop making colored spaces
    }

    ///Display the status of the current game
    void Checkers::display_status() const
    {
        ///arrays for the labels
        char numberLabel[8] = {'8', '7', '6', '5', '4', '3', '2', '1'};
        char letterLabel[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
        cout << " ";
        ///print the letter labels at the top
        for(size_t i = 0; i < 8; i++)
        {
            cout << "   ";
            cout << letterLabel[i];
            cout << " ";
        }
        cout << endl;
        ///print the rest of the board
        for(size_t i = 0; i < 8; i++)
        {
            cout << numberLabel[i] << " ";
            for(size_t j = 0; j < 8; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl << endl;
    }

    ///Returns true if the given move is legal for the next player
    bool Checkers::is_legal(const std::string& move) const
    {
        ///hard code the 7 legal moves (white goes first)
        if(move == "A3B4" || move == "C3B4" || move == "C3D4" || move == "E3D4" || 
           move == "E3F4" || move == "G3F4" || move == "G3H4")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ///The next player makes a specified move
    void Checkers::make_move(const std::string& move)
    {
        if(move == "A3B4")
        {
            board[5][0].make_empty();
            board[4][1].make_white();
        }
        else if(move == "C3B4")
        {
            board[5][2].make_empty();
            board[4][1].make_white();
        }
        else if(move == "C3D4")
        {
            board[5][2].make_empty();
            board[4][3].make_white();
        }
        else if(move == "E3D4")
        {
            board[5][4].make_empty();
            board[4][3].make_white();
        }
        else if(move == "E3F4")
        {
            board[5][4].make_empty();
            board[4][5].make_white();
        }
        else if(move == "G3F4")
        {
            board[5][6].make_empty();
            board[4][5].make_white();
        }
        else if(move == "G3H4")
        {
            board[5][6].make_empty();
            board[4][7].make_white();
        }
        else
        {
            cout << "ERROR: make_move() function problem.";
        }
    }
}

