#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int input = 0;
    vector<int> arr;
    cout << "Enter numbers between 1 to n where n is size of array and -1 to stop inputting:" << endl;
    while (input != -1)
    {
        cin >> input;
        if (input != -1)
        {
            arr.push_back(input);
        }
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}