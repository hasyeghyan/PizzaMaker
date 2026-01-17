#ifndef MARGARITA_HPP
#define MARGARITA_HPP

#include <string>
#include "IPizza.hpp"

class Margarita : public IPizza {
    public:
       virtual ~Margarita() = default;

       virtual const std::string description() override { return "Margarita"; }
       virtual double cost() override { return 5000; }
};

#endif