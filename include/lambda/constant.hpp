#ifndef LAMBDA_CONSTANT_HPP
#define LAMBDA_CONSTANT_HPP

#include "lambda.hpp"

// If we have a lambda, we can define a constant function which
// always returns that lambda. 
struct constant : public lambda {
    lambda& inner;
    constant(lambda& in):inner(in){}
    lambda& operator()(lambda& any) {
        return inner;
    };
};

#endif
