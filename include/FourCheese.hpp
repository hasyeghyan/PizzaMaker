#ifndef FOURCHEESE_HPP
#define FOURCHEESE_HPP

#include <string>
#include "IPizza.hpp"

class FourCheese : public IPizza {
    public:
       virtual ~FourCheese() = default;

       virtual const std::string description() override { return "FourCheese"; }
       virtual double cost() override { return 3000; }
};

#endif