#ifndef IPIZZA_HPP
#define IPIZZA_HPP

#include <string>

class IPizza {
    public:
       virtual ~IPizza() = default;
       
       virtual const std::string description() = 0;
       virtual double cost() = 0;
};

#endif