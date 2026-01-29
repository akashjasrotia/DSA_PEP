#include <iostream>
#include <vector>
using namespace std;

int findFourTimes(const vector<int>& arr)
{
    int result = 0;
    int n = arr.size();

    for (int bit = 0; bit < 32; bit++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & (1 << bit))
                count++;
        }

        if (count % 3 != 0)
            result |= (1 << bit);
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Number appearing 4 times is: "
         << findFourTimes(arr) << endl;

    return 0;
}
