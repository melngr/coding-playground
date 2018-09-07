/* tuple.cpp */

#include <iostream>
#include <tuple>

int main() {
    auto t = std::make_tuple( 3, 4 );
    std::cout << '(' << std::get<0>(t) << ", " << std::get<1>(t) << ')' << std::endl;
}
