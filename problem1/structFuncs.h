#ifndef STRUCTFUNCS_H
#define STRUCTFUNCS_H

template<typename S>
unsigned long getPadding(S s) {
  int size = sizeof(s);
  int padding = size - 28; // 28 = sum of elements 


  return padding;
}

#endif
