#include <iostream>
using namespace std;
class cDate
{
int day,month,year;
public:
 cDate()
 {
    day=month=year=0;
 }
 cDate(int d,int m,int y)
 {
    day=d;
    month=m;
    year=y;
 }
 void display()
 {
    cout<<day<<"/"<<month<<"/"<<year<<endl;
 }
};
class cString
{
    private:
    int mLen;
    char *mbuff;
    public:
   
    cString()
    {
        mLen=0;
        mbuff=new char;
        *mbuff='\0';
    }
    cString(char ch,int len)
    {
        mLen=len;
        
        mbuff=new char[mLen+1];
        memset(mbuff,ch,mLen);
        mbuff[mLen]='\0';
    }   

    cString(const char *str)
    {
        mLen=strlen(str);
        mbuff=new char(mLen+1);
        strcpy(mbuff,str);
    }
    cString(const cString &s)
    {
        this->mLen=s.mLen;
        this->mbuff=new char[mLen+1];
        strcpy(this->mbuff,s.mbuff);
    }
      ~cString()
      {
        if(mbuff)
        {
           delete [] mbuff;
           mbuff=NULL;
        }
      }
      cString& operator=(const cString &s )
  { 
    if(*this==&s)
    return *this;
    else{   
    this.mLen=s.mLen;
        delete []this->mbuff;
    mbuff=new char(this.mLen+1);
    strcpy(this->mbuff,s.mbuff);
    return *this;
  }
}


    void displayString()
{
    cout<<"\nlength:-"<<mLen<<"\nBuffer:"<<mbuff;
}
  
};
// Online C++ compiler to run C++ program online

class Employee
{
    private:
    int id;
    string name;
    double basicsalary;
    double hra,ta,da,pf,it,grosssalary,netsalary;
    public:
    
    Employee(int empid, string ename, double esalary)
    {
        id=empid;
        name=ename;
        basicsalary=esalary;
    }
    
    void calculateAllowance()
    {
        cout<<"\n Calculated Allowance: ";
        hra=basicsalary*0.02;
        ta=basicsalary*0.03;
        da=basicsalary*0.04;
    
        grosssalary=basicsalary+hra+ta+da;
    }
    void calculateReduction()
    {   
        cout<<"\n Calculated Reduction: ";
        pf=grosssalary*0.05;
        it=grosssalary*0.10;
        
        netsalary=grosssalary-(pf+it);
    }
    
    void displayDetails()
    {
        cout<<"\n Employees Details: ";
        cout<<"\n ID: "<<id;
        cout<<"\n Name: "<<name;
        cout<<"\n Basic salary: "<<basicsalary;
        cout<<"\n HRA :"<<hra;
        cout<<"\n TA: "<<ta;
        cout<<"\n DA: "<<da;
        cout<<"\n PF: "<<pf;
        cout<<"\n IT: "<<it;
        cout<<"\n Net Salary: "<<netsalary;
        
    }
};

int main()
{
    int id;
    string name;
    double salary;
    
    cout<<"\n Enter Employee ID: ";
    cin>>id;
    cout<<"\n Enter Employee Name: ";
    cin>>name;
    cout<<"\n Enter Employee basic Salary: ";
    cin>>salary;
    
    Employee e(id,name,salary);
    e.calculateAllowance();
    e.calculateReduction();
    e.displayDetails();
    
    




    return 0;

}