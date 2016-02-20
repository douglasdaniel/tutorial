#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

typedef double Int;

int main(){
  
 int n;
 cin >> n;

 if(n<1 || n>100){
   return 0;
 }

 Int *tacos = new Int[30];

 size_t size = 0;
 

 for( Int i=0; i<n; i++ ){

  Int s,m,b,r;
  cin >> s;
  cin >> m;
  cin >> b;
  cin >> r;

  Int n_taco=0;
 
  while( (m>0 && b>0) && s>0 ){
    m--;
    b--;
    n_taco++;
    s--;
  }
  Int t=max(m,b);
  while( (t>0 && r>0) && s>0){
    t--;
    r--;
    s--;
    n_taco++;
  }
  
  *tacos = n_taco;
  tacos++;

  
 } //end for loop
   
 tacos = tacos - n;

 for(Int j=0; j<n; j++){
   cout << *tacos << endl;
   tacos++;
 }

 delete [] tacos;
  return 0;

} //end main function
