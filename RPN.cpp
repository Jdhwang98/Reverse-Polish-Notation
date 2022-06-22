//
// Created by Johnathan Hwang on 3/28/22.
//

#include "RPN.h"

bool RPN::isOperator(char op) {
    switch(op){
        case '*':return true;
        case '/':return true;
        case '+':return true;
        case '-':return true;
        case '^': return true;
        default: return false;
    };
}

int RPN::evaluate(int operandLeft, int operandRight, char op) {
    int l = operandLeft;
    int r = operandRight;
    switch(op){
        case'*': return l * r;
        case'/': return l/r;
        case'+': return l+r;
        case'-': return l-r;
        case'^': return l^r;
        default: return false;
    }
}

int RPN::solve(std::string expression) {
    std::stack<char> stack;
   for(int i = 0; i < expression.length(); i++){
       if(isdigit(expression[i])){
           stack.push(toNumber(expression[i]));
       }
       else if(isOperator(expression[i])){

           char l = stack.top();
           stack.pop();
           char r = stack.top();
           stack.pop();
           stack.push(evaluate(l,r,expression[i]));
       }
   }
  return stack.top();
}

int RPN::toNumber(char value) {
    assert(isdigit(value));
    return value - '0';
}
