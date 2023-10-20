#include<iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }
    int small=factorial(n-1);
    return n*small;
}
int main()
{
    cout<<factorial(5)<<endl;
}