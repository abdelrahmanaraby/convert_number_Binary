#include <string>
using namespace std;
string get_binary(int x){

    string n="" ;
while (x>0)
{
    /* code */
n+=(x%2==0?"0":"1");
    x/=2;

}
reverse (n.begin(),n.end());
return n;
};
#pragma once
