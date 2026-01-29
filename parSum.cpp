#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input = 0;
    vector<int> arr;

    cout << "Enter numbers (-1 to stop):" << endl;
    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        arr.push_back(input);
    }

    int target;
    cout << "Enter the sum target: ";
    cin >> target;

    pair<int, int> result = {-1, -1};
    bool found = false;

    for (int i = 0; i < arr.size() && !found; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                result = {i, j};
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << "Pairs: (" << arr[result.first] << ", " << arr[result.second] << ")";
    else
        cout << "No pair found";

    return 0;
}
