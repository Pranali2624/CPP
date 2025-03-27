#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *arr;
    char str[20];
    cout<<"enter string"<<endl;
    cin>> str;
    arr=new char[strlen(str)+1];
    strcpy(arr,str);
    cout<<"string is"<<arr<<endl;
    delete []arr;
    return 0;

}