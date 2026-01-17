#include "Mushrooms.hpp"

const std::string Mushrooms::description() {
    return (BaseDecorator::description() + ", " + "mushrooms");
}
       
double Mushrooms::cost() {
    return (BaseDecorator::cost() + 500);
}