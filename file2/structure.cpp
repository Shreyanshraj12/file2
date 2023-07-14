#include<iostream>
using namespace std;

struct employee
{
    /*data*/
int eId;
char favChar;
float salary;
};

int main() {
    struct employee shreyansh;
    shreyansh.eId = 1;
    shreyansh.favChar = 's';
    shreyansh.salary = 5000000;
cout<<"The value is "<<shreyansh.eId<<endl;
cout<<"The value is "<<shreyansh.favChar<<endl;
cout<<"The value is "<<shreyansh.salary<<endl;
return 0;
}




































