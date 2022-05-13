///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file trim.cpp
/// @version 1.0
///
/// @author Zack Lown <zacklown@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "trim.h"
#include <cstring>
#include <iostream>
#define REMOVED_CHAR = '-' ;
using namespace std;

unsigned int string_length(const char *inString) {
    if( inString == nullptr ){
        return 0;
    } else {
        return strlen(inString);
    }//End of if
}//End of string_length

const char *trim_left(const char *inString) {
    if( inString == nullptr ){
        return nullptr;
    } else {
        char* buffer;
        char output[100];
        int i = 0;
        //strncpy(buffer, inString, sizeof(inString));
        for(i ; i < strlen(inString); i++){
        if (inString[i] != '-') {
            output[i] = inString[i];
        }
        }
    return output;
    }//End of if
}//End of trim_left

char *map_chars(const char *inString, char *buffer) {
    return buffer;
}
