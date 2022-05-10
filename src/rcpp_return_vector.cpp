#include <Rcpp.h>
using namespace Rcpp;

#include <vector> /* std::vector */

// [[Rcpp::export]]
std::vector<std::vector<double>> rcpp_return_vector() {
    
    // setup 2-dimensional output vector 
    std::vector<std::vector<double>> out(3, std::vector<double>(5, 0)) ;
    
    // override first slot
    std::vector<double> tmp(5, 1) ;
    
    out[0] = {
        1, 2,
        3,
        4, 5
    } ;
    
    // return vector
    return out ;
}
