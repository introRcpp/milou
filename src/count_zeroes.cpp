#include <Rcpp.h>
using namespace Rcpp;

//[[Rcpp::export]]
int count_zeroes(IntegerVector x) {
  int re = 0;
  for(auto a : x)
    if(a == 0) ++re;
  return re;
}
