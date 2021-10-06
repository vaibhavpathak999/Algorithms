/**
 * We will be given a vector and number 'element'.
 * We are required to find the first occurrence and last occurrence of element in vector.
 * 
 * Author : prashant-th18 (github : https://github.com/prashant-th18)
 */
#include <iostream> // For I/O operations
#include <vector> // For vector
#include <algorithm> // For sort function
#include <cassert> // For assert
using namespace std;

// First occurence of a number using binary search
int firstOccurence_B_search(vector<int> v, int key)
{
    int si = 0, ei = (int)v.size() - 1;
    int mid, ans = -1;
    while(si <= ei)
    {
        mid = (si + ei) / 2;
        if (v[mid] == key)
        {
            // if found, I will update answer and put "ei = mid - 1", so as to see if there's any other 
            // occurence before "ans"
            ans = mid;
            ei = mid - 1;
        }
        else if (v[mid] < key)
        {
            si = mid + 1;
        }
        else
        {
            ei = mid - 1;
        }
    }
    return ans;
}
// Last occurence of a number using binary search
int lastOccurence_B_search(vector<int> v, int key)
{
    int si = 0, ei = (int)v.size() - 1;
    int mid, ans = -1;
    while(si <= ei)
    {
        mid = (si + ei) / 2;
        if (v[mid] == key)
        {
            // if found, i will update answer and put "si = mid + 1", so as to see if there's any other 
            // occurence after "ans"
            ans = mid;
            si = mid + 1;
        }
        else if (v[mid] < key)
        {
            si = mid + 1;
        }
        else
        {
            ei = mid - 1;
        }
    }
    return ans;
}
void test()
{
    vector<int> v = {1, 2, 3, 3, 5, 6, 6, 6, 8};
    assert(firstOccurence_B_search(v, 3) == 2); // First occurrence of 3 is "index 2"

    assert(lastOccurence_B_search(v, 6) == 7); // Last occurrence of 6 is "index 7";

    cout << "All Test Cases passed successfully!";

}
int main()
{
    test();
    return 0;
}