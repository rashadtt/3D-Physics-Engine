#include <iostream>
#include "vector2d.h"


int main() {
    Vector2D v1(3, 4);
    Vector2D v2(1, 2);
    
    Vector2D result = v1 + v2;
    std::cout << "Result of addition: " << result << std::endl;

    return 0;
}
