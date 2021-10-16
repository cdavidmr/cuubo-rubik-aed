/**
 * @author      : Cristian David (cdavidmr@$HOSTNAME)
 * @file        : Cube
 * @created     : sábado oct 16, 2021 14:25:27 -05
 */

#ifndef CUBE_HPP
#define CUBE_HPP


class Cube
{
    public:
        Cube ();
        //~Cube ();
    private:
        /* private data */
				void girarUp();
				void girarDown();
				void girarRight();
				void girarLeft();
				void girarBack();
};

#endif /* end of include guard CUBE_HPP */

