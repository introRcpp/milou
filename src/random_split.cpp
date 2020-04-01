#include <Rcpp.h>
#include "splitR.h"
using namespace Rcpp;

// [[Rcpp::export]]
List random_split_double(NumericVector x) {
  return splitR_double(x, sample(x, 1)[0] );
}

// [[Rcpp::export]]
List random_split_int(IntegerVector x) {
  return splitR_int(x, sample(x, 1)[0] );
}