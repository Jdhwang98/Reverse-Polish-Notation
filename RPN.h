//
// Created by Johnathan Hwang on 3/28/22.
//

#ifndef CS3A_REVERSE_POLISH_NOTATION_RPN_H
#define CS3A_REVERSE_POLISH_NOTATION_RPN_H
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cassert>

class RPN {
private:

    std::queue<char> queue;
    static bool isOperator(char op);
    static int evaluate(int operandLeft, int operandRight, char op);
    static int toNumber(char value);
public:
    static int solve(std::string expression);



};
#endif //CS3A_REVERSE_POLISH_NOTATION_RPN_H
