#include<iostream>
using namespace std;


int main(){

int num=10, b=20;

cout << "before swap number is="<< num << endl;
cout << "before swap number is="<< b << endl;
swap(num,b);
cout << "after swap number is="<< num << endl;
cout << "after swap number is="<< b<< endl;
return 0;

}
 void swap(int n1,int n2){
    cout<<endl;
    int temp;
    temp= n1;
    n1=n2;
    n2=temp;

}