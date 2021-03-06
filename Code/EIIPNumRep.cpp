//
//  EIIPNumRep.cpp
//  Al_by_num_v2_array
//
//  Created by Avraam_Tapinos on 19/02/2016.
//  Copyright (c) 2016 Avraam_Tapinos. All rights reserved.
//

#include "EIIPNumRep.h"

//Destructor
EIIPNumRep::~EIIPNumRep(){};

//Constractor
EIIPNumRep::EIIPNumRep(){};

//Create the double array using the Process2dArray class
//generate the EIIP Numerical representation
void EIIPNumRep::setRep(double** &rep, std::string read){
    Process2dArray<double> CA;
    X = (int)read.size();
    CA.CreateArray(rep, Y, X);
    
    for (int i = 0; i < X; i++){
        if(std::toupper(read[i]) == 'T')
        {
            rep[0][i] = 0.1335;
        }
        else if(std::toupper(read[i]) == 'C'){
            rep[0][i] = 0.1340;
        }
        else if(std::toupper(read[i]) == 'G'){
            rep[0][i] = 0.0806;
        }
        else if(std::toupper(read[i]) == 'A'){
            rep[0][i] = 0.1260;
        }
        else{
            rep[0][i] = 0.1185;
        }
    }
    
};


//Return the X length (|------->)of the EIIP Numerical representation
int EIIPNumRep::returnX(){
    return X;
};

//
//                    ( ^ )
//                    ( | )
//Return the Y length ( | ) of the EIIP Numerical representation
int EIIPNumRep::returnY(){
    return Y;
};