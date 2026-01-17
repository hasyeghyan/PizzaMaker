#include "Cheese.hpp"

const std::string Cheese::description() {
    return (BaseDecorator::description() + ", " + "cheese");
}
       
double Cheese::cost() {
    return (BaseDecorator::cost() + 1500);
}