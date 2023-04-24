// Jaccard similarity is prefferred over knn for genomics applications. Here is one implemented to be optimzed for speed
// for GT heatmaps
// J(A,B) = |A intersection B| / |A union B| 
// Requires 2 additional functions, which we will implement but will likely use someone else's faster implentation
// to optimize
// 1. Union(), takes 2 arrays of parameters ('./.', '0/0', '1/1', '0/1') and returns the paramaters that appear in either array
// 2. Intersection(), takes 2 arrays of paramters and returns only the parameters that appear in both arrays
#include <iostream>
#include <vallarray>

using std::valarray;

valarray Union(vallaray A, vallaray B){
    //Insert body of the function here
}

valarray Intersection(vallaray A, vallarray B){
    //Insert body of the function here
}

double Jaccard(vallaray A, vallaray B){
    //Insert body of the function here

}