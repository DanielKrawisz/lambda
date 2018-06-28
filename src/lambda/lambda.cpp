#include <lambda/composition.hpp>
#include <lambda/curry.hpp>

lambda& lambda::operator*(lambda& l) {
    return *new composition(*this, l);
}

lambda& lambda::operator-(lambda& l) {
    return *new curry(*this);
}
