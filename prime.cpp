// Program to check if a number is prime or not

#include <iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Enter a no. ";
cin>>n;
for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
if(count==1)
cout<<"It's a Prime\n";
else
cout<<"It's not a Prime\n";
return 0;
}
