/* ----- < 12단계 집합과 맵 > ----- */
//
//
//
//
//
/* --- < 10815 > --- */

/*
< 문제 >
	숫자 카드는 정수 하나가 적혀져 있는 카드이다.
	상근이는 숫자 카드 N개를 가지고 있다.
	정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를
	구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.
	둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다.
	숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.
	두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

	셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다.
	넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며,
	이 수는 공백으로 구분되어져 있다.
	이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다

< 출력 >
	첫째 줄에 입력으로 주어진 M개의 수에 대해서,
	각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.

< 풀이 >
	상근이가 가지고 있는 카드 [card], 가지고 있는지 확인하는 [check]
	벡터 두 개를 이용한다.

	확인하는 카드 수만큼 반복하면서 이분 탐색을 한다.
	상근이의 카드들을 정렬시켜야 이분 탐색이 가능하다.

	확인 카드를 들고 상근이의 카드 목록을 보면서 이 카드가 있는지를 확인한다.
	low와 high를 가지고 가운데인 mid값을 도출하면서

	상근이의 카드[mid] < 확인카드이면 low를 mid+1로 변경한다.
	상근이의 카드 > 확인카드 high를 mid-1로 변경한다.

	low   mid   high
	[1][2][4][6][10]
		  [2]	=> check[i] < card[mid] 확인카드가 더 작은 값일 경우

	low high
	mid
	[1][2][4][6][10]
	[2]		=> check[i] > card[mid]
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	std::vector<int> cards(N);
//	for (int i = 0; i < N; i++) std::cin >> cards[i];
//
//	int M;
//	std::cin >> M;
//	std::vector<int> check(M);
//	for (int i = 0; i < M; i++) std::cin >> check[i];
//
//	std::sort(cards.begin(), cards.end());
//
//	for (int i = 0; i < M; i++)
//	{
//		int target = check[i];
//
//		int left = 0;
//		int right = N - 1;
//		bool found = false;
//
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//
//			if (cards[mid] == target)
//			{
//				found = true;
//				break;
//			}
//			else if (cards[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//
//		if (found) std::cout << "1\n";
//		else std::cout << "0\n";
//	}
//}

//#include <iostream>
//#include <set>
//
//// 중복된 값을 포함하고 있지 않고, 원소의 탐색을 빠르게 수행하고자 할 때는 set을 사용하는 것이 효율적 
//// 그러나 중복된 값을 허용하고, 정렬된 순서로 데이터를 다루어야 하는 경우 vector와 이진 탐색을 활용할 수도 있다. 
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::set<int> nNum;
//	int number;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> number;
//		nNum.insert(number);
//	}
//
//	int M;
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> number;
//		
//		std::set<int>::iterator itr;
//
//		itr = nNum.find(number);
//
//		if (itr == nNum.end())
//		{
//			std::cout << "0 ";
//		}
//		else
//		{
//			std::cout << "1 ";
//		}
//	}
//}

/* --- < 14425 > --- */

/*
< 문제 >
	총 N개의 문자열로 이루어진 집합 S가 주어진다.
	입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이
	총 몇 개인지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 문자열의 개수 N과 M (1 ≤ N ≤ 10,000, 1 ≤ M ≤ 10,000)이 주어진다.

	다음 N개의 줄에는 집합 S에 포함되어 있는 문자열들이 주어진다.

	다음 M개의 줄에는 검사해야 하는 문자열들이 주어진다.

	입력으로 주어지는 문자열은 알파벳 소문자로만 이루어져 있으며,
	길이는 500을 넘지 않는다. 집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다.

< 출력 >
	첫째 줄에 M개의 문자열 중에 총 몇 개가 집합 S에 포함되어 있는지 출력한다.
*/

//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::unordered_map<std::string, int> stringMap;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::string str;
//		std::cin >> str;
//		stringMap[str] = 1;
//	}
//
//	int count = 0;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::string str;
//		std::cin >> str;
//		if (stringMap.find(str) != stringMap.end()) count++;
//	}
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <string>
//#include <unordered_set>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::unordered_set<std::string> stringSet;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::string str;
//		std::cin >> str;
//		stringSet.insert(str);
//	}
//
//	int count = 0;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::string str;
//		std::cin >> str;
//		if (stringSet.count(str) > 0) count++;
//	}
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <set>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::set<std::string> S;
//
//	int count{};
//	std::string name;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> name;
//		S.insert(name);
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> name;
//
//		std::set<std::string>::iterator itr;
//		itr = S.find(name);
//
//		if (itr == S.end())
//		{
//			continue;
//		}
//		else
//		{
//			count++;
//		}
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <map>
//
//int N, M, cnt; 
//std::string x;
//
//std::map<std::string, int> S;
//
//int main() 
//{
//	std::cin >> N >> M; 
//
//	while (N--) 
//	{
//		std::cin >> x;
//		S[x] = 1; 
//	}
//	
//	while (M--) 
//	{
//		std::cin >> x;
//		if (S[x]) { cnt += 1; }
//	}
//
//	std::cout << cnt; 
//}