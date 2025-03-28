//Accept a number form user and write a function to check whehter it is even or odd by using function 
#include<iostream>
using namespace std;
class even
{
private:
    int n;
public:
void check(){
    cout<<"Enter a number "<<endl;
    cin>>n;
}
void evenodd(){
    if(n%2==0){
        cout<<"number is even"<<endl;      
    }
    else{cout<<"nunber is odd";}
}
};
int main(){
    even ev;
    ev.check();
    ev.evenodd();
    return 0;


}
 
