/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: k
 *
 * Created on 8 September 2016, 12:50 AM
 */

#include <cstdlib>
#include <sstream>
#include <iostream>
#include "HPStack.h"
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    HPStack stack;
    HPStack mem;
    string line;
    while (getline(cin, line)) {
        stringstream expression(line);
        string token;
        while (expression >> token) {
            transform(token.begin(), token.end(), token.begin(), ::tolower);
            if (isdigit(token[0])) {
                //cout << "that's a number" << endl;
                stack.push(atof(token.data()));
            } else if (token == "pi") {
                stack.push(M_PI);
            } else if (token == "chs") {
                double x = stack.pop();
                x *= -1;
                stack.push(x);
            } else if (token == "recip") {
                double x = stack.pop();
                x = 1 / x;
                stack.push(x);
            } else if (token == "log") {
                double x = stack.pop();
                x = log10(x);
                stack.push(x);
            } else if (token == "ln") {
                double x = stack.pop();
                x = log(x);
                stack.push(x);
            } else if (token == "exp") {
                double x = stack.pop();
                x = exp(x);
                stack.push(x);
            } else if (token == "sqrt") {
                double x = stack.pop();
                x = sqrt(x);
                stack.push(x);
            } else if (token == "sin") {
                double x = stack.pop();
                x = sin(x);
                stack.push(x);
            } else if (token == "cos") {
                double x = stack.pop();
                x = cos(x);
                stack.push(x);
            } else if (token == "tan") {
                double x = stack.pop();
                x = tan(x);
                stack.push(x);
            } else if (token == "arcsin") {
                double x = stack.pop();
                x = asin(x);
                stack.push(x);
            } else if (token == "arccos") {
                double x = stack.pop();
                x = acos(x);
                stack.push(x);
            } else if (token == "arctan") {
                double x = stack.pop();
                x = atan(x);
                stack.push(x);
            } else if (token == "pow") {
                double x = stack.pop();
                double y = stack.pop();
                x = pow(x, y);
                stack.push(x);
            } else if (token == "sto") {
                mem.push(stack.peek());
            } else if (token == "rcl") {
                stack.push(mem.peek());
            } else if (token == "clr") {
                for (int i = 0; i < 4; i++) {
                    stack.push(0.0);
                }
            } else if (token == "clx") {
                double x = stack.pop();
            } else if (token == "swap") {
                double x = stack.pop();
                double y = stack.pop();
                stack.push(x);
                stack.push(y);
            } else if (token == "roll") {
                double x = stack.pop();
                double y = stack.pop();
                double z = stack.pop();
                double t = stack.pop();
                stack.push(x);
                stack.push(t);
                stack.push(z);
                stack.push(y);
            } else if (token == "enter") {
                stack.push(stack.peek());
            } else if (token == "+") { //other arithmetic ops similar
                //cout << "you pressed +" << endl;
                //stack.show();
                double x = stack.pop();
                //stack.show();
                double y = stack.pop();
                //stack.show();
                stack.push(y + x);
            } else if (token == "-") {
                //cout << "you pressed -" << endl;
                double x = stack.pop();
                double y = stack.pop();
                stack.push(y - x);
            } else if (token == "*") {
                //cout << "you pressed *" << endl;
                double x = stack.pop();
                double y = stack.pop();
                stack.push(x * y);
            } else if (token == "/") {
                //cout << "you pressed /" << endl;
                double x = stack.pop();
                double y = stack.pop();
                stack.push(y / x);
            }
            //stack.show();
        }
        cout << stack.peek() << endl;


    }
    return 0;
}

