/*
Author: Kevin Mano
Brief: 

*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include "Expression.h"

class ArithmeticExpression : public Expression{
    Expression left;
    Expression right;

    //evaluate the left expression and right expression.
    std::string evaluate(){
        
        void print(); //prints expression
    }

    float convert(std::string s){
        //converts a string (as would be returned by evaluate) to a float.
    }

};