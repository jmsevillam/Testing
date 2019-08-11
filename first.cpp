#include <iostream>

double f(double x, double v){

return -x;

}
double g(double x, double v){

  return v;

}


int main(){
double dt=0.01;

double v=0.2,x=0.1;


for(int i=0; i<1000;i++){

  v+=dt*f(x,v);
  x+=dt*g(x,v);
  std::cout<<i*dt<<' '<<x<<' '<<v<<std::endl;
}


  return 0;
}
