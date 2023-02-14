

//  long long int int bala matter aache se samjh lo bhaiiiiiiiiiiii
#include <iostream>
#include <vector>

using namespace std;
long long int sumOf(vector<int> time)
{

    long long int sum = 0;

    for (int i = 0; i < time.size(); i++)
    {
        sum += time[i];
    }

    return sum;
}
bool isPossible(vector<int> time, int parts, int m,  long long int mid)
{
    long long int dayCount = 1;
    long long int timeSum = 0;
    for (int i = 0; i < time.size(); i++)
    {
        if (timeSum + time[i] <= mid)
        {
            timeSum += time[i];
        }
        else {
            dayCount++;
            if (dayCount > parts || time[i] > mid) {
              return false;
            }
            timeSum = time[i];
        }
    }

        return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long int start = 0, end = sumOf(time);

    long long int mid = start + (end - start) / 2;

    long long int ans = -1;
    while (start <= end)
    {

        if (isPossible(time, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
