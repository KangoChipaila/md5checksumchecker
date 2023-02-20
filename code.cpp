#include <iostream>
#include <cctype>
using namespace std;

bool md5HashComparison (string a, string b)
{
    int counter;

    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (isalpha(a[i]))
            {
                a[i] = static_cast<char>(tolower(a[i]));
            }
            else
            {
                continue;
            }
        }

        for (int i = 0; i < b.size(); i++)
        {
            if (isalpha(b[i]))
            {
                b[i] = static_cast<char>(tolower(b[i]));
            }
            else
            {
                continue;
            }
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
            {
                counter++;
            }

            else
            {
                continue;
            }
        }

        if (counter == a.size())
        {
            return true;
        }
    }


}

int main()
{
    string onlineMD5, downloadedMD5;

    cout << "Enter the MD5 hash shown on the website: ";
    cin >> onlineMD5;

    cout << "\nEnter the MD5 hash shown in your terminal: ";
    cin >> downloadedMD5;



    if (md5HashComparison(onlineMD5, downloadedMD5))
    {
        cout << "File integrity: secure" << endl;
    }
    else
    {
        cout << "File integrity: compromised" << endl;
    }


    return 0;
}
