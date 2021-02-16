/**
 *  @file       space.h
 *  @author     Nathaniel Buchanan (nb333218@ohio.edu)
 *  @brief      This is Part B of Project 6 for CS 2401. This header file is used
 *              for the 64 spaces that are on the checkers board. It has the empty,
 *              unplayable, and colored pieces. It also has functions used for output.
 *  @version    0.1
 *  @date       2020-12-4
 * 
 *  @copyright  Copyright (c) 2020
 */

#ifndef SPACE_H
#define SPACE_H
#include "colors.h"
#include <iostream>
namespace main_savitch_14
{
    class Space
    {
        public:
            ///default constructor
            Space();
            ///check to see if the piece is empty
            bool is_empty() const;
            ///check to see if the piece is unplayable
            bool is_unplayable() const;
            ///check to see if the piece is blue
            bool is_blue() const;
            ///check to see if the piece is white
            bool is_white() const;
            ///check to see if the piece is a blue king
            bool is_blue_king() const ;
            ///check to see if the piece is a white king
            bool is_white_king() const;
            ///make the space empty of pieces
            void make_empty();
            ///make the space unplayable
            void make_unplayable();
            ///make the piece blue
            void make_blue();
            ///make the piece white
            void make_white();
            ///make the piece a blue king
            void make_blue_king();
            ///make the piece a white king
            void make_white_king();
            ///member output function
            void output(std::ostream& outs)const;
        private:
            char color_of_space;
    };

    std::ostream& operator <<(std::ostream& outs, const Space& s);

}
#endif ///SPACE_H