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

/* --- < 1620 > --- */

/*
< 문제 >
	오박사 : 그럼 다솜아 이제 진정한 포켓몬 마스터가 되기 위해 도감을 완성시키도록 하여라.
	일단 네가 현재 가지고 있는 포켓몬 도감에서 포켓몬의 이름을 보면 포켓몬의 번호를 말하거나,
	포켓몬의 번호를 보면 포켓몬의 이름을 말하는 연습을 하도록 하여라.
	나의 시험을 통과하면, 내가 새로 만든 도감을 주도록 하겠네.

< 입력 >
	첫째 줄에는 도감에 수록되어 있는 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M이 주어져.
	N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수인데,
	자연수가 뭔지는 알지? 모르면 물어봐도 괜찮아.
	나는 언제든지 질문에 답해줄 준비가 되어있어.

	둘째 줄부터 N개의 줄에 포켓몬의 번호가 1번인 포켓몬부터 N번에 해당하는 포켓몬까지
	한 줄에 하나씩 입력으로 들어와.
	포켓몬의 이름은 모두 영어로만 이루어져있고,
	또, 음... 첫 글자만 대문자이고, 나머지 문자는 소문자로만 이루어져 있어.
	아참! 일부 포켓몬은 마지막 문자만 대문자일 수도 있어.
	포켓몬 이름의 최대 길이는 20, 최소 길이는 2야.
	그 다음 줄부터 총 M개의 줄에 내가 맞춰야하는 문제가 입력으로 들어와.
	문제가 알파벳으로만 들어오면 포켓몬 번호를 말해야 하고, 숫자로만 들어오면,
	포켓몬 번호에 해당하는 문자를 출력해야해.
	입력으로 들어오는 숫자는 반드시 1보다 크거나 같고, N보다 작거나 같고,
	입력으로 들어오는 문자는 반드시 도감에 있는 포켓몬의 이름만 주어져. 그럼 화이팅!!!

< 출력 >
	첫째 줄부터 차례대로 M개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어!!!.
	입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을,
	문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼. 그럼 땡큐~
*/

//#include <iostream>
//#include <string>
//#include <map>
//
//int main() 
//{
//// 1. 입력 받기( 번호, 이름 )
//	int N, M; 
//	std::cin >> N >> M;
//
//// 2. std::map 을 사용하여 key 값에 번호, value 값에 이름을 / key 값에 이름, value 값에 번호를 저장한다.
//	std::map<std::string, std::string> poket;
//	std::string s;
//
//	for (int i = 1; i <= N; i++) 
//	{
//		std::cin >> s;
//
//		poket[s] = std::to_string(i);
//		poket[std::to_string(i)] = s;
//	}
//
//// 3. M 개의 문제에 대해 map에서 value 값을 꺼내어 출력한다.
//	while (M--) 
//	{ 
//		std::cin >> s;
//		std::cout << poket[s] << '\n';
//	}
//}

/* --- < 10816 > --- */

/*
< 문제 >
	숫자 카드는 정수 하나가 적혀져 있는 카드이다.
	상근이는 숫자 카드 N개를 가지고 있다.
	정수 M개가 주어졌을 때,
	이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.

	둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다.
	숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

	셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다.

	넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며,
	이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고,
	10,000,000보다 작거나 같다.

< 출력 >
	첫째 줄에 입력으로 주어진 M개의 수에 대해서,
	각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.
*/

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int N, Q, X;
//	std::cin >> N >> Q;
//	std::unordered_map<int, int> card;
//// 1. 입력 받기 ( 상근이가 보유하고 있는 카드 번호를 Key로 value는 갯수로 )
//	for (; N > 0; N--)
//		std::cin >> X, card[X]++;
//// 2. M으로 값을 입력 받을 때 map의 key 값을 탐색하여 value 값을 출력
//	for (; Q > 0; Q--)
//		std::cin >> X, std::cout << card[X] << ' ';
//}

/* --- < 1764 > --- */

/*
< 문제 >
	김진영이 듣도 못한 사람의 명단과,
	보도 못한 사람의 명단이 주어질 때,
	듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다.

	이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과,
	N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다.
	이름은 띄어쓰기 없이 알파벳 소문자로만 이루어지며, 그 길이는 20 이하이다.
	N, M은 500,000 이하의 자연수이다.

	듣도 못한 사람의 명단에는 중복되는 이름이 없으며, 보도 못한 사람의 명단도 마찬가지이다.

< 출력 >
	듣보잡의 수와 그 명단을 사전순으로 출력한다.
*/

//#include<iostream>
//#include<map>
//
//int main() 
//{
//	std::map<std::string, int> MP;
//	std::string S;
//
//	int N, M, cnt;
//	std::cin >> N >> M;
//// 1. 이름을 key로 N을 저장하며 value 값을 +1
//	for (int i = 0; i < N + M; i++) {
//		std::cin >> S;
//		MP[S]++;
//		if (MP[S] > 1) cnt++;
//	}
//// 2. value 값이 2인 key를 출력
//	std::cout << cnt;
//	for (auto i : MP) {
//		if (i.second == 2) {
//			std::cout << '\n' << i.first;
//		}
//	}
//}

/* --- < 1269 > --- */

/*
< 문제 >
	자연수를 원소로 갖는 공집합이 아닌 두 집합 A와 B가 있다.
	이때, 두 집합의 대칭 차집합의 원소의 개수를 출력하는 프로그램을 작성하시오.
	두 집합 A와 B가 있을 때, (A-B)와 (B-A)의 합집합을 A와 B의 대칭 차집합이라고 한다.

	예를 들어, A = { 1, 2, 4 } 이고, B = { 2, 3, 4, 5, 6 } 라고 할 때,
	A-B = { 1 } 이고, B-A = { 3, 5, 6 } 이므로,
	대칭 차집합의 원소의 개수는 1 + 3 = 4개이다.

< 입력 >
	첫째 줄에 집합 A의 원소의 개수와 집합 B의 원소의 개수가 빈 칸을 사이에 두고 주어진다.
	둘째 줄에는 집합 A의 모든 원소가,
	셋째 줄에는 집합 B의 모든 원소가 빈 칸을 사이에 두고 각각 주어진다.
	각 집합의 원소의 개수는 200,000을 넘지 않으며, 모든 원소의 값은 100,000,000을 넘지 않는다.

< 출력 >
	첫째 줄에 대칭 차집합의 원소의 개수를 출력한다.
*/

//#include <iostream>
//#include <map>
//
//int main()
//{
//	int count{};
//	int Asize, Bsize;
//	std::cin >> Asize >> Bsize;
//
//	std::map<int, int> AB;
//
//	for (int i = 0; i < Asize + Bsize; i++)
//	{
//		int num;
//		std::cin >> num;
//		AB[num]++;
//	}
//
//	for (int i = 0; i < AB.size(); i++)
//	{
//		if (AB[i] != 2) count++;
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <set>
//
//int main()
//{
//	int diff{};
//	int Asize, Bsize;
//	std::cin >> Asize >> Bsize;
//
//	std::set<int> A, B;
//
//	for (int i = 0; i < Asize; i++)
//	{
//		int num;
//		std::cin >> num;
//		A.insert(num);
//	}
//	for (int i = 0; i < Bsize; i++)
//	{
//		int num;
//		std::cin >> num;
//		B.insert(num);
//	}
//
//	for (int e : A)
//	{
//		if (B.find(e) == B.end()) diff++;
//	}
//	for (int e : B)
//	{
//		if (A.find(e) == A.end()) diff++;
//	}
//
//	std::cout << diff << '\n';
//}

//#include <iostream>
//#include <map>
//
//int main()
//{
//	int Asize, Bsize;
//	std::cin >> Asize >> Bsize;
//
//	std::map<int, int> AB;
//
//	for (int i = 0; i < Asize + Bsize; i++)
//	{
//		int num;
//		std::cin >> num;
//		(AB[num]) ? AB.erase(num) : AB[num] = 1;
//	}
//
//	std::cout << AB.size() << '\n';
//}

/* --- < 11478 > --- */

/*
< 문제 >
	문자열 S가 주어졌을 때, S의 서로 다른 부분 문자열의 개수를 구하는 프로그램을 작성하시오.

	부분 문자열은 S에서 연속된 일부분을 말하며, 길이가 1보다 크거나 같아야 한다.

	예를 들어, ababc의 부분 문자열은
	a, b, a, b, c, ab, ba, ab, bc, aba, bab, abc, abab, babc, ababc가 있고, 서로 다른것의 개수는 12개이다.

< 입력 >
	첫째 줄에 문자열 S가 주어진다. S는 알파벳 소문자로만 이루어져 있고, 길이는 1,000 이하이다.

< 출력 >
	첫째 줄에 S의 서로 다른 부분 문자열의 개수를 출력한다.
*/

//#include <iostream>
//#include <string>
//#include <set>
//
//int main()
//{
//	std::string input;
//	std::cin >> input;
//
//	std::set<std::string> substrings;
//
//	for (int i = 0; i < input.size(); i++)
//	{
//		std::string substring{};
//
//		for (int j = i; j < input.size(); j++)
//		{
//			substring += input[j];
//			substrings.insert(substring);
//		}
//	}
//
//	std::cout << substrings.size() << '\n';
//}

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	std::unordered_map<std::string, int> MP;
//	std::string temp;
//
//	for (int i = 0; i < S.size(); i++)
//	{
//		for (int j = 1; j <= S.size(); j++)
//		{
//			temp = S.substr(i, j);
//			MP[temp]++;
//		}
//	}
//
//	std::cout << MP.size() << '\n';
//}