#ifndef LAMBDA_CURRY_HPP
#define LAMBDA_CURRY_HPP

#include "lambda.hpp"

// Another thing we can do is curry lambdas. 
class curry : public lambda {
    lambda& curried;
public:
    curry(lambda& x):curried(x){}
    lambda& operator()(lambda& x) {
        return x(curried);
    }
};

#endif
