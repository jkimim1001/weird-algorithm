#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{

  int x;
  cin >> x;

  while(x != 1){
    cout << x << ' ';
    if(x % 2 == 0){
      x = x/2;
    } else {
      x = 3 * x + 1;
    }
  }

  cout << 1;
  
  return 0;
}

