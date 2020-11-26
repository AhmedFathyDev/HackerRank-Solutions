
//  Read this: https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(void)
{
    int T;

    cin >> T;

    while (T--)
    {
        int N, K;
        size_t i = 0;

        cin >> N >> K;

        vector<int> A(N);
        deque<int> dq(K);

        for (size_t i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        while (i < K)
        {
            while (dq.size() && A[i] >= A[dq.back()])
            {
                dq.pop_back();
            }

            dq.push_back(i++);
        }

        while (i < N)
        {
            cout << A[dq.front()] << " ";

            while (dq.size() && dq.front() < i - K)
            {
                dq.pop_front();
            }

            while (dq.size() && A[i] >= A[dq.back()])
            {
                dq.pop_back();
            }

            dq.push_back(i++);
        }

        cout << "\n";
    }

    return EXIT_SUCCESS;
}