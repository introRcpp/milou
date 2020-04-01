#ifndef _milou_split_
#define _milou_split_

#include <vector>
#include <utility>

template<typename T1, typename T2>
std::pair< std::vector<T2>, std::vector<T2> > split(T1 x, T2 a0) {
  std::vector<T2> lo;
  std::vector<T2> hi;
  for(auto & a : x)
    if(a < a0) 
      lo.push_back(a);
    else 
      hi.push_back(a);
  return std::make_pair(lo,hi);
}

#endif
