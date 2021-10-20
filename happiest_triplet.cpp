/*Approach :

1) sort all the arrays
2) initialize three pointers at the starting of each array
3) find the minimum and maximum of these three elements
4) if difference between maximum and minimum is smaller than the current difference then update the current difference
5) increment the pointer of the array with the minimum element

Time Complexity : O(NlogN)
Space Complexity : O(1)

C++ Code : -
*/

class Solution
{
public:

    int minimum(int a, int b, int c) {
        return min({a, b, c});
    }
    int maximum(int a, int b, int c) {
        return max({a, b, c});
    }

    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n)
    {
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        sort(arr3, arr3 + n);

        int x = 0, y = 0, z = 0;
        int curr_min = INT_MAX;
        vector<int> res;
        while (x < n && y < n && z < n) {
            int mini = minimum(arr1[x], arr2[y], arr3[z]);
            int maxi = maximum(arr1[x], arr2[y], arr3[z]);

            if (curr_min > maxi - mini) {
                res.clear();
                res.push_back(arr1[x]);
                res.push_back(arr2[y]);
                res.push_back(arr3[z]);
                curr_min = maxi - mini;
            }
            if (arr1[x] == mini) x++;
            else if (arr2[y] == mini) y++;
            else z++;
        }
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};