#include <iostream>
#include "types.h"
#include "enums.h"

int main(){
	token ob;
	ob.set_pos(4);
	ob.set_type (4);
	std::cout << ob.get_pos() << std::endl;

       return 0;
}
