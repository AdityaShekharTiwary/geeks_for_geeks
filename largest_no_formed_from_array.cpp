static int myCompare(string x, string y)
{
    string a = x + y;
    string b = y + x;
    return a > b;
}

string printLargest(vector<string> &arr) {
    sort(arr.begin(), arr.end(), myCompare);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}