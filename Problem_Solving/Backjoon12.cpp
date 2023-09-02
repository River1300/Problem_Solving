/* ----- < 12�ܰ� ���հ� �� > ----- */
//
//
//
//
//
/* --- < 10815 > --- */

/*
< ���� >
	���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�.
	����̴� ���� ī�� N���� ������ �ִ�.
	���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� ������ �ִ��� �ƴ�����
	���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ����̰� ������ �ִ� ���� ī���� ���� N(1 �� N �� 500,000)�� �־�����.
	��° �ٿ��� ���� ī�忡 �����ִ� ������ �־�����.
	���� ī�忡 �����ִ� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����.
	�� ���� ī�忡 ���� ���� �����ִ� ���� ����.

	��° �ٿ��� M(1 �� M �� 500,000)�� �־�����.
	��° �ٿ��� ����̰� ������ �ִ� ���� ī������ �ƴ����� ���ؾ� �� M���� ������ �־�����,
	�� ���� �������� ���еǾ��� �ִ�.
	�� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����

< ��� >
	ù° �ٿ� �Է����� �־��� M���� ���� ���ؼ�,
	�� ���� ���� ���� ī�带 ����̰� ������ ������ 1��, �ƴϸ� 0�� �������� ������ ����Ѵ�.

< Ǯ�� >
	����̰� ������ �ִ� ī�� [card], ������ �ִ��� Ȯ���ϴ� [check]
	���� �� ���� �̿��Ѵ�.

	Ȯ���ϴ� ī�� ����ŭ �ݺ��ϸ鼭 �̺� Ž���� �Ѵ�.
	������� ī����� ���Ľ��Ѿ� �̺� Ž���� �����ϴ�.

	Ȯ�� ī�带 ��� ������� ī�� ����� ���鼭 �� ī�尡 �ִ����� Ȯ���Ѵ�.
	low�� high�� ������ ����� mid���� �����ϸ鼭

	������� ī��[mid] < Ȯ��ī���̸� low�� mid+1�� �����Ѵ�.
	������� ī�� > Ȯ��ī�� high�� mid-1�� �����Ѵ�.

	low   mid   high
	[1][2][4][6][10]
		  [2]	=> check[i] < card[mid] Ȯ��ī�尡 �� ���� ���� ���

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
//// �ߺ��� ���� �����ϰ� ���� �ʰ�, ������ Ž���� ������ �����ϰ��� �� ���� set�� ����ϴ� ���� ȿ���� 
//// �׷��� �ߺ��� ���� ����ϰ�, ���ĵ� ������ �����͸� �ٷ��� �ϴ� ��� vector�� ���� Ž���� Ȱ���� ���� �ִ�. 
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
< ���� >
	�� N���� ���ڿ��� �̷���� ���� S�� �־�����.
	�Է����� �־����� M���� ���ڿ� �߿��� ���� S�� ���ԵǾ� �ִ� ����
	�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���ڿ��� ���� N�� M (1 �� N �� 10,000, 1 �� M �� 10,000)�� �־�����.

	���� N���� �ٿ��� ���� S�� ���ԵǾ� �ִ� ���ڿ����� �־�����.

	���� M���� �ٿ��� �˻��ؾ� �ϴ� ���ڿ����� �־�����.

	�Է����� �־����� ���ڿ��� ���ĺ� �ҹ��ڷθ� �̷���� ������,
	���̴� 500�� ���� �ʴ´�. ���� S�� ���� ���ڿ��� ���� �� �־����� ���� ����.

< ��� >
	ù° �ٿ� M���� ���ڿ� �߿� �� �� ���� ���� S�� ���ԵǾ� �ִ��� ����Ѵ�.
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