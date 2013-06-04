#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

long double solve_17(string s)
{
    double b, e, a, total = 0;
    for(unsigned int i=0; i< s.length(); i++)
    {
        if(i%2==0)
        {
            b = double(s[i]-'0');
            e = double(s[i+1]-'0');
            a = pow(b,e);
        }
        else
        {
            a = 0;
        }
        total += a;

    }
    return total;
}

int main()
{
    long double answer = solve_17("342345820139586830203845861938475676");
    cout<< fixed<<answer;
    return 0;
}
