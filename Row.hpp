/*esta clase se encarga de los cuadritos individuales de la parte izquierda y
derecha de la cara en general
ejemplo grafico:

        row1
|--------------------|
|         |          |
| sq_left | sq_right |
|         |          |
        row2
|--------------------|
|         |          |
| sq_left | sq_right |
|         |          |
|--------------------|

y asi con cada una de las caras del cubo
*/
#ifndef ROW_HPP
#define ROW_HPP


class Row
{
    public:
        Row ();
        int get_sq_left();
        int get_sq_right();
        int set_sq_right(int r);
        int set_sq_left(int l);
        //~Row ();
    private:
        /* private data */
        int sq_left;//cuadro de la hilera izquierda
        int sq_right;//cuadro de la hilera derecha
};

Row::Row() {
    sq_left = 0;
    sq_right = 0;
}

int Row::set_sq_right(int r){
    sq_right = r;
}

int Row::set_sq_left(int l){
    sq_left = l;
}

int Row::get_sq_right(){
    return sq_right;
}

int Row::get_sq_left(){
    return sq_left;
}


#endif /* end of include guard ROW_HPP */
