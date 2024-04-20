#include <iostream>

using namespace std;

int main()
{

    // Write your code here

    int num , lastdigit;
    int even = 0, odd = 0;
    cin >> num;

    while (num)
    {

        lastdigit = num % 10;

        if (lastdigit % 2 == 0)
        {

            even = even + lastdigit;
        }

        else if (lastdigit % 2 != 0)

        {

            odd = odd + lastdigit;
        }

        num = num / 10;
    }

    cout << even << " " << odd;
}
