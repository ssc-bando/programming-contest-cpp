#include <iostream>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <vector>


#include "fizzbuzz.h"

using namespace std;

void test_divide_with_3(){
    assert( fizzbuzz(3) == "fizz" );
    assert( fizzbuzz(9) == "fizz" );
    assert( fizzbuzz(123 * 3) == "fizz" );
}


void test_divide_with_5(){
    assert( fizzbuzz(5) == "buzz" );
    assert( fizzbuzz(20) == "buzz" );
    assert( fizzbuzz(100 * 5) == "buzz" );
}


void test_divide_with_15(){
    assert( fizzbuzz(15) == "fizzbuzz" );
    assert( fizzbuzz(45) == "fizzbuzz" );
    assert( fizzbuzz(123 * 15) == "fizzbuzz" );
}


void test_divide_with_other(){
    assert( fizzbuzz(1) == "1" );
    assert( fizzbuzz(23) == "23" );
    assert( fizzbuzz(1198) == "1198" );
}


void test(){
  test_divide_with_3();
  test_divide_with_5();
  test_divide_with_15();
  test_divide_with_other();
  cout << "OK." << endl;
}


float calculate_once(){
  auto start = clock();
  vector<int> range(1000000);
  iota(range.begin(), range.end(), 1);
  for(auto i : range){
    fizzbuzz(i);
  }
  auto end = clock();
  return (float)(end - start) / CLOCKS_PER_SEC;
}


void calculate_time(){
  const int times = 5;
  float result = 0;
  for(int i = 0; i < times; i++){
    result += calculate_once();
  }
  cout << result / times << " sec." << endl;
}


int main( int argc, char* argv[] ){
  if(argc == 1){
    test();
  }
  else{
    calculate_time();
  }
  return 0;
}

