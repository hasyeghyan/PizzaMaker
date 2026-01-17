#ifndef CHEESE_HPP
#define CHEESE_HPP

#include "BaseDecorator.hpp"

class Cheese : public BaseDecorator {
    public:
       Cheese(std::shared_ptr<IPizza> p) : BaseDecorator(p) {}
       virtual ~Cheese() = default;
       
       virtual const std::string description() override;
       virtual double cost() override;
};

#endif