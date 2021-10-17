/**
 * @author      : 
 * @file        : Cube
 * @created     : sábado oct 16, 2021 14:25:27 -05
 */

#ifndef CUBE_HPP
#define CUBE_HPP

#include "Face.hpp"

/*
* Se implementa la clase Cube donde se van a definir 
* los metodos de giro para el cubo.
*/
class Cube
{
    public:
        Cube ();
        /*Metodos de giro del cubo*/
        void girarUp();
	void girarDown();
	void girarRight();
	void girarLeft();
        //~Cube ();
    private:
        /* private data */
        std::vector<int> colors;
        /* Caras del cubo */
        Face Up;
        Face Down;
        Face Front;
        Face Left;
        Face Right;
        Face Back;
};

Cube::Cube() {
    colors = {1,2,3,4,5,6}; // Colores representados como enteros
}

#endif /* end of include guard CUBE_HPP */

