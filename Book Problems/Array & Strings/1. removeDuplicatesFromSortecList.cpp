/******************************************************************************
Remove duplicate elements from a sorted list without using any extra space
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicatesFromSortedArray(vector<int>& arr) {
  int count = 1;
  int length = arr.size();
  for(int i = 1; i < length; i++) {
    if(arr[i - 1] != arr[i]) {
      arr[count++] = arr[i];
    }
  }

  return count;

}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
     arr.push_back(4);

    int ret = removeDuplicatesFromSortedArray(arr);
    cout << ret << endl;
    for(int i = 0; i < ret; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
