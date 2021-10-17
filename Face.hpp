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
        Face ();            //Constructor
        //~Face ();         //Destructor
        set_row_sup(int s);        
        set_row_inf(int i);
        get_row_sup();       //Obtener fila superior
        get_row_inf();       //Obtener fila inferior
               
    private:
        int color;          //Color que poseerá la cara
        Row row_sup;        //Fila superior
        Row row_inf;        //Fila inferior
};

Face::Face() {}     //Constructor

Row Face::set_row_sup(int s){
       row_sup = s;
}

Row Face::set_row_inf(int i){
       row_inf = i;
}

Row Face::get_row_sup(){           //Obtener fila superior
    return row_sup;
}

Row Face::get_row_inf(){           //Obtener fila inferior
    return row_inf;
}

#endif 
