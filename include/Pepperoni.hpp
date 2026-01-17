#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include <string>
#include "IPizza.hpp"

class Pepperoni : public IPizza {
    public:
       virtual ~Pepperoni() = default;

       virtual const std::string description() override { return "Pepperoni";}
       virtual double cost() override { return 6000; }
};

#endif