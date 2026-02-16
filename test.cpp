int functionName(vector<int> arr){
    unordered_map<int, int> freq;
    for (int num : arr)
        freq[num]++;
    vector<int> result;
    for (auto it : freq)
        if (it.second == 2)
            result.push_back(it.first);
    sort(result.begin(), result.end());
    return result;
}