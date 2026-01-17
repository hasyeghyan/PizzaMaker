#ifndef OLIVES_HPP
#define OLIVES_HPP

#include "BaseDecorator.hpp"

class Olives : public BaseDecorator {
    public:
       Olives(std::shared_ptr<IPizza> p) : BaseDecorator(p) {}
       virtual ~Olives() = default;
       
       virtual const std::string description() override;
       virtual double cost() override;
};

#endif