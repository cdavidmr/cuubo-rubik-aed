/**
 * @author      : 
 * @file        : Cube
 * @created     : sábado oct 16, 2021 14:25:27 -05
 */

#ifndef CUBE_HPP
#define CUBE_HPP

#include "Face.hpp"

class Cube
{
    public:
        Cube ();
				void girarUp();
				void girarDown();
				void girarRight();
				void girarLeft();
        //~Cube ();
    private:
        /* private data */
        Face Up;
        Face Down;
        Face Front;
        Face Left;
        Face Right;
        Face Back;
};

#endif /* end of include guard CUBE_HPP */

