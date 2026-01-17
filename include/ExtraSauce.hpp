#ifndef EXTRASOUCE_HPP
#define EXTRASOUCE_HPP

#include "BaseDecorator.hpp"

class ExtraSauce : public BaseDecorator {
    public:
       ExtraSauce(std::shared_ptr<IPizza> p) : BaseDecorator(p) {}
       virtual ~ExtraSauce() = default;
       
       virtual const std::string description() override;
       virtual double cost() override;
};

#endif