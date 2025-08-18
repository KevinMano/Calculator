/*
Author: Kevin Mano
Brief: 

*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

class Expression{

    //evaluates expression and return string representation of the result.
    virtual std::string evaluate(){};
    
    //prints expression
    virtual void print(){}; 
};