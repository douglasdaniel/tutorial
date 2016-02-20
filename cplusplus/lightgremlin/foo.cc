#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cctype>
#include <cmath>
#include <signal.h>

using namespace std;

typedef float Nit;

int main() {
  Nit t;
  cin >> t;
  if(t>20){
    cerr << "NO";
    // abort();
  }

  for(Nit i=0; i<t; i++){
    float s=0;
    if(s>10e18){
      // abort();
      cerr << "NO";
    }
    Nit g=0;
    if(g>24){
      // abort();
      cerr << "NO";
    }
    cin >> s;
    cin >> g;
    
    //    Nit* primes;
    //    primes = new Nit[g];
    //    memset(primes, 0, sizeof(long)*g);
    vector<Nit> primes(9999);
    for(Nit j=0; j<g; j++){
      cin >> primes[j];
    }
    
    // switches
    vector<Nit> swich(s);
    //    Nit* swich;
    //    swich = new Nit[s];
    //    memset(swich, 0, sizeof(Nit)*s);
    //    for(Nit m=s; m<=s; m++){
    //      swich[m]=0;
    //    }

    for(Nit k=0; k<g; k++){
      Nit step = primes[k];
      Nit ind = step;

      while(ind <= s){
	swich[ind] = ((int)swich[ind] ^ 1);
	//	cout << typeid(swich[ind]).name() << endl;
	//	cout << ind << ": switch: " << swich[ind] << endl;
	ind = ind + step;
      }
      
    }//end gremlin loop
    //    delete swich;

    Nit on=0;
    for(Nit l=0; l<=s; l++){
      if(swich[l]==1)
	on++;
    }

    cout << on << endl;
    // Nit ons = count_if(swich.begin(), swich.end(), [](bool in)->bool{ return in; });
    //Nit up = 0;
    //for(Nit n : swich){
    //up += n;
    //}
    //cout << ons << endl;
    //    cout << up << endl;    
  } // end for loop
  
  


  return 0;
} // bye main()

