#ifndef EXPRESSION_CONSTANT_HPP
#define EXPRESSION_CONSTANT_HPP

#include "identity.hpp"
#include "free.hpp"
#include "lambda/constant.hpp"
#include "lambda/curry.hpp"

template<typename... > struct constant_expression;

template<> struct constant_expression<> : public identity {
    constant_expression(lambda& any) {};
};

template<typename y>
struct constant_expression<y> : public lambda {
    constant_expression(lambda& any):constant_lambda(any) {};
    lambda& operator()(lambda& of) {
        return constant_lambda;
    }
private:
    lambda& constant_lambda;
};

template<typename y, typename... r>
struct constant_expression<y, r...> : public lambda {
    constant_expression(lambda& any):constant_lambda(any) {};
    lambda& operator()(lambda& of) {
        return constant_expression<r...>(constant_lambda)(of);
    }
private:
    lambda& constant_lambda;
};

template<typename x, typename y, typename... r>
struct λ<x, x, y, r...> : public lambda {
    lambda& operator()(lambda& any) {
        return *new constant_expression<y, r...>(any);
    }
};

#endif
