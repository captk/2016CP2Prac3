/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HPStack.h
 * Author: k
 *
 * Created on 8 September 2016, 1:14 AM
 */

#ifndef HPSTACK_H
#define HPSTACK_H

class HPStack {
public:
    HPStack();
    HPStack(const HPStack& orig);
    void push(int a);
    int pop();
    int peek();
    virtual ~HPStack();
private:
    int stack[4];
};

#endif /* HPSTACK_H */

