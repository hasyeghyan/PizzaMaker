#include "ExtraSauce.hpp"

const std::string ExtraSauce::description() {
    return (BaseDecorator::description() + ", " + "extrasauce");
}
       
double ExtraSauce::cost() {
    return (BaseDecorator::cost() + 2000);
}