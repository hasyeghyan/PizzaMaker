#ifndef BASEDECORATOR_HPP
#define BASEDECORATOR_HPP

#include "IPizza.hpp"
#include <memory>

class BaseDecorator : public IPizza{
    public:
        BaseDecorator(std::shared_ptr<IPizza> p) : pizza{p} {}
        ~BaseDecorator() = default;

        virtual const std::string description() override { return pizza->description(); }
        virtual double cost() override { return pizza->cost(); }
       
    private:
        std::shared_ptr<IPizza> pizza;
};

#endif