// FizzBuzz: Write a program that prints numbers from 1 to N, but for multiples of 3, print "Fizz," for multiples of 5, print "Buzz," and for multiples of both 3 and 5, print "FizzBuzz." Use C++ for this problem

#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> result;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
            result.push_back("FizzBuzz");
        else if (i % 3 == 0)
            result.push_back("Fizz");
        else if (i % 5 == 0)
            result.push_back("Buzz");
        else
            result.push_back(to_string(i));
    }

    return result;
}

int main()
{
    int n = 20;
    vector<string> result = fizzBuzz(n);

    for (const string &s : result)
        cout << s << " ";

    return 0;
}
