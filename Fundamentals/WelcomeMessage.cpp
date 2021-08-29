#include<iostream>
using namespace std;

int main()
{
    string name;

    cout<<"May I know your name?";
    /*cin>>name; it will take only one word*/
    getline(cin,name);

    cout<<"Welcome Mr/Miss "<<name<<endl;

    return 0;
}
