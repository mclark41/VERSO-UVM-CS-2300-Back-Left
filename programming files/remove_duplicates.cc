#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    //  Create empty vector of ints
    vector<int> unique_arr;
    // Sort a copy of the provided vector
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0; i < n; i++) { // Loop through copy of sorted arr
        if(i == 0 || arr[i] != arr[i-1]) {
            // If the previous element is NOT the same as the current,
            // add it to the new array
            unique_arr.push_back(arr[i]);
        }
        else{
            // Otherwise, add it to the removed elements
            removed_elements.push_back(arr[i]);
        }
    }
    // Return sorted array of arr with no duplicates
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);

    cout << "Original array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i = 0; i < unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i = 0; i < removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
