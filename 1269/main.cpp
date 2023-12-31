/*자연수를 원소로 갖는 공집합이 아닌 두 집합 A와 B가 있다. 이때, 두 집합의 대칭 차집합의 원소의 개수를 출력하는 프로그램을 작성하시오. 두 집합 A와 B가 있을 때, (A-B)와 (B-A)의 합집합을 A와 B의 대칭 차집합이라고 한다.

예를 들어, A = { 1, 2, 4 } 이고, B = { 2, 3, 4, 5, 6 } 라고 할 때,  A-B = { 1 } 이고, B-A = { 3, 5, 6 } 이므로, 대칭 차집합의 원소의 개수는 1 + 3 = 4개이다.*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b, i, temp;
    unordered_set<int> comb;
    cin >> a >> b;

    while (a--)
    {
        cin >> temp;
        comb.insert(temp);
    }

    while (b--)
    {
        cin >> temp;
        auto iter = comb.find(temp);
        if (iter == comb.end())
            comb.insert(temp);
        else
            comb.erase(iter);
    }

    cout << comb.size();

    return 0;
}