#ifndef EXPRESSION_IDENTITY_HPP
#define EXPRESSION_IDENTITY_HPP

#include "expressions.hpp"
#include "lambda/identity.hpp"

template<typename x> struct λ<x, x> : public identity {};

#endif
