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

HPStack::HPStack() {
    for(int i = 0; i < 4; i++){
        stack[i] = 0;
    }
}

HPStack::HPStack(const HPStack& orig) {
}

HPStack::~HPStack() {
}

HPStack::push(int a){
    
}

HPStack::pop(){
    
}

HPStack::peek(){
    return stack[0];
}