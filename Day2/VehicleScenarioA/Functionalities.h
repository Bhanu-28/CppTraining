/*
function to create 3 object on the heap 

*/

//can every single object do this ?
//or should a single object be able to do this ?? ->no 
//
#include "Vehicle.h"
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

/*
function to create 3 objects on the heap and store their adresses
in the container array 
*/
void CreateObjects(Vehicle* container[3]);

/*
function to find average of price values of 3 objects in container array*/
 
float AveragePrice(Vehicle* container[3]);
#endif // FUNCTIONALITIES_H
