#ifndef FACE_HPP
#define FACE_HPP

#include <string>
#include <vector>
#include "Row.hpp"

/*
Se define la clase "Face" la cual permite definir las filas en cada una de ellas. 
Gráficamente se ve así:

       row_sup 
|---------|---------|
| sq_izq  | sq_der  |
|---------|---------|

       row_inf
|---------|---------|
| sq_izq  | sq_der  |
|---------|---------| */

class Face
{
    public:
        Face ();    //Constructor
        //~Face ();  //Destructor
    private:
        int color;    //Color que poseerá la cara
        Row row_sup;    //Fila superior
        Row row_inf;    //Fila inferior
};

Face::Face() {}     //Constructor



#endif /* end of include guard FACE_HPP */

