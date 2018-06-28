#ifndef ZERO_HPP
#define ZERO_HPP

#include "expressions.hpp"

// Not technically allowed under the lambda calculus, but c++ lets us do it.
struct zero : public lambda {
    lambda& operator()(lambda& x) {
        return *this;
    }
};

#endif
