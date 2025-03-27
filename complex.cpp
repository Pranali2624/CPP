#include<iostream>
using namespace std;

class complex{
int real;
int imag;
public:
complex();
complex(int r, int i);
void dispaly();
};
complex::complex(){
    real=imag=0;
}
complex::complex(int r, int i){
    real=r;
    imag=i;
}
void complex::dispaly(){
    cout<<real<<"+"<< imag  <<"i"<<endl;
}

int main(){
    complex c1;
    complex c2(11,22);
    c1.dispaly();
    c2.dispaly();
    return 0;
}