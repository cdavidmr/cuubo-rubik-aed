/**
 * @author      : Cristian David (cdavidmr@$HOSTNAME)
 * @file        : Row
 * @created     : sábado oct 16, 2021 15:40:24 -05
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
        int sq_left;
        int sq_right;
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

