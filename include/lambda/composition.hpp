#ifndef LAMBDA_COMPOSITION_HPP
#define LAMBDA_COMPOSITION_HPP

#include "lambda.hpp"

// We know how to form a lambda out of the composition of two lambdas, exactly
// as with function composition. 
struct composition : public lambda {
    lambda& a; 
    lambda& b;
    
    composition(lambda& a, lambda& b):a(a),b(b){}
    
    lambda& operator()(lambda& x) {
        return a(b(x));
    }
};

#endif
