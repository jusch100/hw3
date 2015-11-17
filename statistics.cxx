#include <cmath>
#include <iostream>
#include <cstdlib>

 using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

void f(double* p, const int N){
  
    for(int i=0; i<N; i++){
      p[i] = rand()/(double)RAND_MAX;
    }

}
void g(double& mean, double& var, const int N, double* p){

  for(int i=0; i<N; i++){
    mean += p[i]/N;
  }
  var = 0;
  for(int i=0; i<N; i++){
    var += pow(p[i]-mean,2)/N;
  }
}
int main(){
 srand(time(NULL));
 const int N = 100;
 double p[N];
 double mean, var;
 // Some lines here....
 f(p, N);
 g(mean, var, N, p);
cout << "Mean = " << mean << endl;
cout << "Variance = " << var << endl;

   return 0;
}
