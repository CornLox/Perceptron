/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Corn
 *
 * Created on 27 August 2016, 10:43
 */
#include <iostream>
#include<vector>
#include "Perceptron.h"
#include <new>
#include<fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
     Perceptron *Perc=new Perceptron(2.0);
           
     
    Perc->setWeights();
              
    Perc->setUnits();
    
    delete[] Perc;
    
    
    
     
    return 0;
}

