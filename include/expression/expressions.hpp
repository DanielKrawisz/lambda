#ifndef EXPRESSION_EXPRESSIONS_HPP
#define EXPRESSION_EXPRESSIONS_HPP

#include "lambda/lambda.hpp"

// We write lambdas out of lambda expressions. 
template<typename A, typename x, typename... r>
struct expression{
    expression<expression<A, x>, r...> subexpression;
};

// a lambda expression is both a lambda and an expression.
// These are what we really want to find. 
template<typename M, typename... param> struct λ : public expression<M, param...>, public lambda {
    // Every lambda expression that we instantiate must implement this function. 
    lambda& operator()(lambda&);
};

#endif
