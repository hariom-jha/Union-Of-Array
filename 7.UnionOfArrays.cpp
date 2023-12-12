#include <iostream>
#include <vector>

using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4};
  int sizearr = 4;
  int brr[] = {6, 7, 8, 9};
  int sizebrr = 4;

  vector<int> ans;

  for (int i = 0; i < sizearr; i++)
  {
    ans.push_back(arr[i]);
  }

  for (int i = 0; i < sizebrr; i++)
  {
    ans.push_back(brr[i]);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}