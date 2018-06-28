#ifndef LAMBDA_HPP
#define LAMBDA_HPP

// The idea of the lambda calculus is that we have a set of function-like objects
// which implement the following interface. 
struct lambda {
    virtual lambda& operator()(lambda&) = 0;
    
    // lambda composition is supported. 
    lambda& operator*(lambda&);
    
    // lambda currying is supported. 
    lambda& operator-(lambda&);
};

#endif
