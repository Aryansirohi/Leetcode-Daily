#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void distributeElements(const vector<int>& arr, vector<int>& subsetA, vector<int>& subsetB) {
    // Sort the array in descending order
vector<int> sortedArr = arr;
    sort(sortedArr.rbegin(), sortedArr.rend());

    for (size_t i = 0; i < sortedArr.size(); ++i) {
        if (i % 2 == 0) {
            subsetA.push_back(sortedArr[i]);
        } else {
            subsetB.push_back(sortedArr[i]);
        }
    }
}

int main() {
     #ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);
#endif 

vector<int> arr = {2, 3, 5, 6, 7};
vector<int> subsetA, subsetB;

    distributeElements(arr, subsetA, subsetB);

    // Display the subsets and their sums
    cout << "Subset A: ";
    for (const auto& elem : subsetA) {
        cout << elem << " ";
    }
cout << "\nSum of Subset A: " << accumulate(subsetA.begin(), subsetA.end(),0) << endl;

    cout << "Subset B: ";
    for (const auto& elem : subsetB) {
        cout << elem << " ";
    }
    cout << "\nSum of Subset B: " << accumulate(subsetB.begin(), subsetB.end(),0) << endl;

    return 0;
}
n