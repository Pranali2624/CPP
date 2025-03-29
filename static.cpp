#include<iostream>
#include<string.h>
using namespace std;
class cEmp{
    int empid;
    char name[20];
    static int count;

public:
    cEmp();
    cEmp(int id,char nm[]);
    void display();
    static  void showCount();
    void setEmp();

};
int cEmp::count=0;

cEmp::cEmp(){
    empid=0;
    name[0]='\0';
    count++;
}
cEmp::cEmp (int id,const char *nm[]){
    empid=id;
    strcpy(name,*nm);
    count++;
}

void cEmp::display(){
    cout<<"Employee ID : "<<empid<<endl;
    cout<<"Employee Name : "<<name<<endl;
    showCount();
}
void cEmp::showCount(){
    cout<<"count is:"<<count<<endl;
}

void setEmp(){
        cout<<"enetr id:"<<endl;
        cin>> empid;
        cout<<"enter your name"<<endl;
        cin>> name;

    }

int main(){


    cEmp e1,e2,e3;
    e1.setEmp();
    e2.setEmp();
    e3.setEmp();
    e1.display();
    return 0;

}

