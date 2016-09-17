/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Perceptron.h
 * Author: Corn
 *
 * Created on 27 August 2016, 10:44
 */

#ifndef PERCEPTRON_H
#define PERCEPTRON_H



class Perceptron {
public:
    Perceptron();
    Perceptron(const Perceptron& orig);
    virtual ~Perceptron();
    Perceptron(double);  //constructor with bias
    void setBiaslink(double);
    void setWeights();
    void setUnits(int*);
    void setInputs(double*);
    void calculateOutput();
    double getOutput();
private:
    struct Link {
  double weight;
  double input;
  int unit;
} ;
    std::vector<Link> Links; // weights vector
    int gate;
    double output;
    double expectation;
};

#endif /* PERCEPTRON_H */

