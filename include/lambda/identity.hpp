#ifndef LAMBDA_IDENTITY_HPP
#define LAMBDA_IDENTITY_HPP

#include "lambda.hpp"

struct identity : public lambda {
    lambda& operator()(lambda& X) {
        return X;
    }
};

#endif
