#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0)
    {
       return 1;
    }
    
    return n*fact(n-1);
}




int main() 

{

int i;
cin>>i;

int ans=fact(i);
cout<<ans;

return 0;
}