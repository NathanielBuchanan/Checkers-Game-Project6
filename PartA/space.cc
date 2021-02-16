/**
 *  @file       space.cc
 *  @author     Nathaniel Buchanan (nb333218@ohio.edu)
 *  @brief      This is Part A of Project 6 for CS 2401. This is the implementation file
 *              for the Space class. This involves using colors with an overloaded << and
 *              with an output function. It has empty spaces, unplayable spaces, and blue
 *              and white spaces.
 *  @version    0.1
 *  @date       2020-11-24
 * 
 *  @copyright  Copyright (c) 2020
 */

#include "space.h"
#include "colors.h"
namespace main_savitch_14
{
    ///default constructor
    Space::Space() 
    {
        color_of_space = 'e';
    }
    ///check to see if the piece is empty
    bool Space::is_empty()
    {
        return (color_of_space == 'e');
    }
    ///check to see if the piece is unplayable
    bool Space::is_unplayable()
    {
        return (color_of_space == 'u');
    }
    ///check to see if the piece is blue
    bool Space::is_blue()
    {
        return (color_of_space == 'b');
    }
    ///check to see if the piece is white
    bool Space::is_white() 
    {
        return (color_of_space == 'w');
    }
    ///make the space empty of pieces
    void Space::make_empty() 
    {
        color_of_space = 'e';
    }
    ///make the space unplayable
    void Space::make_unplayable()
    {
        color_of_space = 'u';
    }
    ///make the piece blue
    void Space::make_blue()
    {
        color_of_space = 'b';
    }
    ///make the piece white
    void Space::make_white()
    {
        color_of_space = 'w';
    }
    ///output function
    void Space::output(ostream& outs)const
    {
        if(color_of_space == 'e')
        {
            cout << B_BLACK << "     " << RESET;
        }
        else if(color_of_space == 'u')
        {
            cout << B_WHITE << "     " << RESET;
        }
        else if(color_of_space == 'b')
        {
            cout << B_BLACK << BLUE << "  B  " << RESET;
        }
        else if(color_of_space == 'w')
        {
            cout << B_BLACK << WHITE << "  W  " << RESET;
        }
        else
        {
            cout << "-----------------------------" << endl;
            cout << "ERROR IN THE OUTPUT FUNCTION!" << endl;
            cout << "-----------------------------" << endl;
        }
        
    }
    ///overloaded << operator
    ostream& operator <<(ostream& outs, const Space& s)
    {
        s.output(outs);
        return outs;
    }
}