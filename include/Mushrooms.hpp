#ifndef MUSHROOMS_HPP
#define MUSHROOMS_HPP

#include "BaseDecorator.hpp"

class Mushrooms : public BaseDecorator {
    public:
       Mushrooms(std::shared_ptr<IPizza> p) : BaseDecorator(p) {}
       virtual ~Mushrooms() = default;
       
       virtual const std::string description() override;
       virtual double cost() override;
};

#endif