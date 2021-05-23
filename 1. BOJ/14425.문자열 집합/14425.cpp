#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

int N, M, ans;
string s;
map<string, bool> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /** N, M 숫자를 입력 받는다 */
    cin >> N >> M;

    /** map에 key, value로 맵핑하여 넣는다 */
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        m[s] = true;
    }

    /** 입력되는 문자열을 map의 key에 입력하여 true가 반환되는지 확인하여 개수를 카운팅 */
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (m[s]) ans++;
    }

    cout << ans << '\n';

}