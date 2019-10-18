// Program to check if the number is prime or not

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
int num,count=0;
cout<<"Enter an integer ";
cin>>num;
for(int i = 2; i <= sqrt(num) ; i++)
    {
        if(num%i==0)
        count++;
    }
if(count == 1)
cout<<"It's a Prime Number\n";
else
cout<<"It's not a Prime Number\n";
return 0;
}
