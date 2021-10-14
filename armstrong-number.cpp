#include <iostream>
using namespace std;

int main()
{
    int n, remaindar, num = 0, copyn;//declaring and initializing vaiables
    cout << "enter any number to check armstrong number" << endl;
    cin >> n;//taking input from user
    copyn = n;//copieng the value of n in the copyn variable
    while (n != 0)//stating while loop
    {
        remaindar = n % 10;//remaindar
        num = num + (remaindar * remaindar * remaindar);//sum of cube of its remaindars
        n = n / 10;//for next number
    }

    if (num == copyn)//checking the condition
    {
        cout << "this is an armstong number" << endl;
    }
    else
    {
        cout << "not an armstrong number" << endl;
    }
    return 0;
}
