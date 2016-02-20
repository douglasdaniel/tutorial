#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

typedef unsigned long Int;

int main(){
  
 Int n;
 cin >> n;
 Int** tacos;
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
  
  tacos[size++] = n_taco;
  //  cout << "the number is now \n" << tacos[size];
  
 } //end for loop
  
 for(Int j=0; j<n; j++){
   cout << tacos[j] << "\n";
 } 
  return 0;

} //end main function
