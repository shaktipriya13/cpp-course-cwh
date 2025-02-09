#include <iostream>
using namespace std;
// int getCount(string s, int n)
// {

//     return num;
// }
int main()
{
    string s = "geeksforgeeks";
    int arr[26], index;
    int n = s.size();
    // code here.
    int num = 0;
    // s=to_lower(s);
    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
            arr[index] = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == s[i] && s[j - 1] != s[i])
                {
                    arr[index] = arr[index] + 1;
                }
            }
        }
    }
    // for (int i = 0; i < 25; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         num++;
    //     }
    // }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}