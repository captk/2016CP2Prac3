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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    HPStack stack;
    string line;
    while (getline(cin, line)) {
        stringstream expression(line);
        string token;
        while (expression >> token) {
            if (isdigit(token[0])) {
                //cout << "that's a number" << endl;
                stack.push(atof(token.data()));
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
            stack.show();
        }


    }
    return 0;
}

