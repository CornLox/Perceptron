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

#include <cstdlib>
#include<vector>
#include "Perceptron.h"
#include <new>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
     Perceptron *Perc=new Perceptron(2.0);
     
     ofstream weights;
     
     
     double *in=new double[2];
     in[0]=0.0;
     in[1]=0.0;
     
     Perc->setWeights(in);
    
    delete[]in;
    delete[] Perc;
    
    
    
     
    return 0;
}

