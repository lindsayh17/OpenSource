#include <iostream>
#include <sstream>
#include <iomanip>
//Should use using namespace std::
std::string rgb_to_hex(int r, int g, int b)
{
//Function returns a string and takes an input of 3 integers labeled r,g,b

    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));
//Using stringstream, ss is set equal to the hex value of the red, green, and blue values
    std::stringstream sss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;
//C++ function setw is used to set the width
    return ss.str(r, g, b);
}
//Function returns the string.

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
