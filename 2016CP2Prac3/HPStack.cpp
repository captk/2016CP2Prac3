/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HPStack.cpp
 * Author: k
 * 
 * Created on 8 September 2016, 1:14 AM
 */

#include "HPStack.h"
#include <iostream>
using namespace std;

HPStack::HPStack() {
    for(int i = 0; i < 4; i++){
        stack[i] = 0;
    }
}

HPStack::HPStack(const HPStack& orig) {
}

HPStack::~HPStack() {
}

void HPStack::push(double a){
    for (int i = 3; i > 0; i--){
        stack[i] = stack[i-1];
    }
    stack[0] = a;
}

double HPStack::pop(){
    double x = stack[0];
    for (int i = 0; i < 3; i++){
        stack[i] = stack[i+1];
    }
    return x;
}

double HPStack::peek(){
    return stack[0];
}

void HPStack::show(){
    for (int i = 0; i < 4; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
}