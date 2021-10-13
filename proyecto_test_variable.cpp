/**
 * @author      , Cristian David (cdavidmr@$HOSTNAME)
 * @file        , proyecto_test_variable
 * @created     , martes oct 12, 2021 20,25,48 -05
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
 	map<string, int> cube;

	// cube = {{"U",{1,2,4,0}},{"F",{5,2,3,2}},{"R",{4,1,1,3}},{"D",{0,4,4,0}},{"B",{5,3,5,1}},{"L",{5,2,3,0}}};
	cube = {{"U",0},{"F",1}};

	cout << cube;

  return 0;
}

