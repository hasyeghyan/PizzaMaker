#include "Olives.hpp"

const std::string Olives::description() {
    return (BaseDecorator::description() + ", " + "olives");
}
       
double Olives::cost() {
    return (BaseDecorator::cost() + 1000);
}