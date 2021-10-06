#include <bits/stdc++.h>
using namespace std;

struct activity
{
  int start, end;
};

bool sort_a(activity s1, activity s2)
{
  return (s1.end < s2.end);
}

void max_activity(activity arr[], int n)
{
  int count = 1;
  sort(arr, arr + n, sort_a);
  int i = 0;
  cout << "(" << arr[i].start << "," << arr[i].end << ")" << endl;
  for (int j = 1; j < n; j++)
  {
    if (arr[j].start >= arr[i].end)
    {
      count++;
      cout << "(" << arr[j].start << "," << arr[j].end << ")" << endl;
      i = j;
    }
  }
  cout << "Optimal no of activities = " << count << endl;
}
int main()
{
  int n;
  cin >> n;
  activity arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].start >> arr[i].end;
  }
  max_activity(arr, n);
  return 0;
}