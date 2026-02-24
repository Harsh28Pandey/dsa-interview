//? Convert number to words

#include <iostream>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

// todo   for the number less than 1000...
string convert(int n)
{
    if (n == 0)
    {
        return "";
    }
    else if (n < 20) // todo   for the number less than 20...
    {
        return ones[n];
    }
    else if (n < 100) // todo   for the number less than 100
    {
        return tens[n / 10] + " " + convert(n % 10);
    }
    else // todo    for the number less than 1000..
    {
        return tens[n / 100] + "hundred" + convert(n % 100);
    }
}

string numberToWords(int num)
{
    if (num == 0)
        return "Zero";

    string result = "";

    // Process Billions
    if (num >= 1000000000)
    {
        result += convert(num / 1000000000) + "Billion ";
        num %= 1000000000;
    }
    // Process Millions
    if (num >= 1000000)
    {
        result += convert(num / 1000000) + "Million ";
        num %= 1000000;
    }
    // Process Thousands
    if (num >= 1000)
    {
        result += convert(num / 1000) + "Thousand ";
        num %= 1000;
    }
    // Process the remainder (Hundreds/Tens/Ones)
    result += convert(num);

    // Trim trailing spaces
    // while (!result.empty() && result.back() == ' ') result.pop_back();

    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Word representation: " << numberToWords(n) << endl;
    return 0;
}