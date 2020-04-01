#include <Rcpp.h>
#include "split.h"
using namespace Rcpp;

//[[Rcpp::export]]
List splitR_double(NumericVector x, double pivot) {
  auto re = split(x, pivot);
  List L;
  L["lo"] = wrap(std::get<0>(re));
  L["hi"] = wrap(std::get<1>(re));
  return L;
}

//[[Rcpp::export]]
List splitR_int(IntegerVector x, int pivot) {
  auto re = split(x, pivot);
  List L;
  L["lo"] = wrap(std::get<0>(re));
  L["hi"] = wrap(std::get<1>(re));
  return L;
}
