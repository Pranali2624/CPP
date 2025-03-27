#include<iostream>
using namespace std;
class emp
{
private:
    int emp_id;
    char arry[20];
    double salary;
    double intensiv;
    double gross_salary;

public:
    void data(){
        cout<<"Enter Employee ID:"<<endl;
        cin>>emp_id;
        cout<<"Enter your name:" << endl;
        cin>>arry;
        cout<<"basic salary:"<<endl;
        cin>>salary;
        cout<<"insentive salary:"<<endl;
        cin>> intensiv;
        gross_salary=intensiv+salary;
        
    }
    
   // void disdata(){
    //    cout<<"Employee Id:"<<emp_id<<endl;
    //    cout<<"Name:"<< arry<< endl;
      //  cout<<"basic salary is:"<< salary <<endl;
        //cout<<"insentive salary:"<< intensiv<<endl;
        //cout<< "your gross salary:" << gross_salary;

    //}
    
};

int main(){
  emp e1;
 e1.data();
 //uy e1.disdata();
  return 0;
}