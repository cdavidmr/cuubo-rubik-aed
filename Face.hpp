/**
 * @author      : Cristian David (cdavidmr@$HOSTNAME)
 * @file        : Face
 * @created     : sábado oct 16, 2021 15:51:26 -05
 */

#ifndef FACE_HPP
#define FACE_HPP

#include <string>
#include <vector>
#include "Row.hpp"

class Face
{
    public:
        Face ();
        std::vector<int> colors;
        //~Face ();
    private:
        /* private data */
        Row row_sup;
        Row row_inf;
};

Face::Face() {
    colors = {1,2,3,4,5,6}; 
}

#endif /* end of include guard FACE_HPP */

