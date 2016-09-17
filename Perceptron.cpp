/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Perceptron.cpp
 * Author: Corn
 * 
 * Created on 27 August 2016, 10:44
 */

#include <iostream>
#include<vector>
#include "Perceptron.h"
#include<fstream>

Perceptron::Perceptron() {
}

Perceptron::Perceptron(const Perceptron& orig) {
}

Perceptron::~Perceptron() {
}

Perceptron::Perceptron(double bias){
    Link *temp=new Link;
    temp->unit=0;
    temp->input=1;
    temp->weight=bias;        
   this->Links.push_back(*temp); 
   delete[] temp;
}

void Perceptron::setBiaslink(double bias){
    this->Links[0].weight=bias;
    this->Links[0].unit=0;
    this->Links[0].input=1;
}

void Perceptron::setWeights(){
    
    ifstream weights; 
     weights.open("weights.txt",std::ifstream::in); 
    while(weights.good()){
         int i=1;
    weights >> this->Links[i].weight; 
    cout << this->Links[i].weight << "\n"<< endl;
    i++;
        }
    weights.close();  
}

void Perceptron::setUnits(){
    ifstream units; 
     units.open("units.txt",std::ifstream::in); 
    while(units.good()){
         int i=1;
    units >> this->Links[i].unit; 
    cout << this->Links[i].unit << "\n"<< endl;
    i++;
        }
    units.close();
}

void Perceptron::setInputs(double inputs[]){
    
    for (unsigned int i=1;i<Links.size();i++){
        this->Links[i].input=inputs[i-1];
    }    
}

void Perceptron:: calculateOutput(){
    for(unsigned int i=0;i<this->Links.size();i++){
        this->output+=this->Links[i].weight*this->Links[i].input;
    }
} 
double Perceptron::getOutput(){
    return(this->output);
}
