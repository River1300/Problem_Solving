/* ----- < 11단계 정렬 > ----- */
//
//
//
//
//
/* --- < 2750 > --- */

/*
< 문제 >
	N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

< 출력 >
	첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//#include <vector>
//
//int Partition(std::vector<int>& vec, int low, int high)
//{
//	// 1. 기준 값을 배열의 마지막 원소로 지정
//	int pivot = vec[high];
//	// 2. 배열에서 피벗보다 작은 원소들을 찾아서 작은 값들의 구역으로 이동시키기 위한 인덱스 i를 설정
//	//		=> i는 작은 값들의 구역의 끝을 나타내는 인덱스로 이 구역은 피벗과의 비교를 통에 늘어날 수 있다.
//	//		=> i를 low - 1로 설정하는 이유는 작은 값들의 구역이 아직 시작하지 않았다는 것을 나타내기 위함
//	int i = low - 1;
//
//	for (int j = low; j < high; j++)
//	{	// 3. 배열의 각 원소를 탐색하면서, 피벗보다 작은 값이 발견되면 i를 증가시켜서 작은 값 구역을 넓힌다.
//		if (vec[j] <= pivot)
//		{
//			i++;
//			std::swap(vec[i], vec[j]);
//		}
//	}
//	// 4. 피벗의 위치를 재배치, i 은 작은 값들의 구역의 끝( 피벗보다 작은 값들 중에서 가장 큰 값 ), high는 배열의 끝
//	//		=> 두 원소의 위치를 swap, 결과적으로 피벗은 작은 값들의 구역과 큰 값들의 구역을 나누는 위치에 배치된다. 
//	std::swap(vec[i + 1], vec[high]);
//	return i + 1;
//}
//
//void QuickSort(std::vector<int>& vec, int low, int high)
//{
//	if (low < high)
//	{
//		int pivotIndex = Partition(vec, low, high);
//
//		QuickSort(vec, low, pivotIndex - 1);
//		QuickSort(vec, pivotIndex + 1, high);
//	}
//}
//
//int main()
//{
//	std::vector<int> vec = { 10,7,8,9,1,5 };
//	int n = vec.size();
//
//	QuickSort(vec, 0, n - 1);
//
//	for (int e : vec) std::cout << e << ' ';
//	std::cout << '\n';
//}

/* --- < 2751 > --- */

/*
< 문제 >
	N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다.
	둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

< 출력 >
	첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//#include <vector>
//
//void Merge(std::vector<int>& vec, int left, int mid, int right)
//{
//	// 1. left 부터 mid 까지의 요소의 개수( Left Part SIZE ), mid + 1부터 right까지의 요소의 개수( Right Part SIZE )
//	int n1 = mid - left + 1;
//	int n2 = right - mid;
//
//	// 2. Left 공간, Right 공간에 정렬되지 않은 값을 배정
//	std::vector<int> leftVec(n1);
//	std::vector<int> rightVec(n2);
//	for (int i = 0; i < n1; i++)
//	{
//		leftVec[i] = vec[left + i];
//	}
//	for (int i = 0; i < n2; i++)
//	{
//		rightVec[i] = vec[mid + 1 + i];
//	}
//
//	// 3. 비교해 가며 작은 값을 우선적으로 배정
//	int i = 0; int j = 0; int k = left;
//	while (i < n1 && j < n2)
//	{
//		if (leftVec[i] <= rightVec[j])
//		{
//			vec[k] = leftVec[i];
//			i++;
//		}
//		else
//		{
//			vec[k] = rightVec[j];
//			j++;
//		}
//		k++;
//	}
//
//	// 4. 남은 값이 있을 경우 일괄적으로 배정
//	while (i < n1)
//	{
//		vec[k] = leftVec[i];
//		i++;
//		k++;
//	}
//	while (j < n2)
//	{
//		vec[k] = rightVec[j];
//		j++;
//		k++;
//	}
//}
//
//void MergeSort(std::vector<int>& vec, int left, int right)
//{
//	if (left < right)
//	{
//		int mid = left + (right - left) / 2;
//
//		MergeSort(vec, left, mid);
//		MergeSort(vec, mid + 1, right);
//
//		Merge(vec, left, mid, right);
//	}
//}
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	std::vector<int> vec(N);
//	for (int i = 0; i < N; i++) std::cin >> vec[i];
//
//	MergeSort(vec, 0, N - 1);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << vec[i] << '\n';
//	}
//}

/* --- < 10989 > --- */

/*
< 문제 >
	N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다.
	둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 10,000보다 작거나 같은 정수이다.

< 출력 >
	첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

< 풀이 >
	Counting Sort - 계수 정렬
		#. 원소간 비교없이 정렬할 수 있는 카운팅 정렬
		#. 원소간 비교하지 않고 각 원소가 몇개 등장하는지 갯수를 세서 정렬하는 방식
		#. 모든 원소는 양의 정수여야 한다.
		#. 시간 복잡도로 퀵정렬, 병합정렬에 비해 일반적으로 빠르다.
		#. 정렬을 위한 길이 N의 배열 하나, 계수를 위한 길이 K의 배열 하나. O(N+K)의 공간 복잡도를 가진다.

	arr[N]{1, 0, 3, 1, 3, 1};
		=> arr 배열의 원소 중 최대 값은 3이다.
		=> 0 ~ 3 까지 인덱스를 가지는 계수를 위한 배열을 할당한다.
		=> temp[4] 계수를 위한 배열의 원소는 모두 0으로 초기화 시킨다.
		=> 각 원소들의 갯수를 계산하여 count[원소]에 담는다.
		=> temp[0] = 1, temp[1] = 3, temp[2] = 0, temp[3] = 2 이렇게 arr배열에 있는 원소 값을 temp인덱스로 갯수를 담는다.
		=> 누적합을 계산한다.
		=> 누적합을 이용하여 정렬한다.
		=> 누적합은, 정렬된 배열에 각 값이 들어갈 위치를 확보하는 것이라고 생각하면 된다.
		=> temp[1] += temp[0]; == 3 += 1 == count[i] += count[i-1]; == temp[1] = 4
		=> temp[2] += temp[1]; == 0 += 4 == count[i] += count[i-1]; == temp[2] = 4
		=> temp[3] += temp[2]; == 2 += 4 == count[i] += count[i-1]; == temp[3] = 6
		=> 누적 합의 의미는 다음과 같다.
		=> 0은 0번째에서 1번째 사이까지 위치하고 ( 0 )
		=> 1은 1번째에서 4번째 사이에 ( 1, 2, 3 )
		=> 2는 4번째에서 4번째 사이에 ( X )
		=> 3은 4번째에서 6번째 사이에 ( 4, 5 )위치한다는 말이다.
		=> result[N] 누적합을 이용해서 정렬시키는 단계
		=> 이때 주어진 arr 배열의 오른쪽에서 왼쪽으로 진행해야 안정정렬이 가능하다.
		=> arr[5] = 1, temp[1] = 4, 이때 누적합 -1을 해주고 그 위치로 보낸다. 4 - 1 = 3
		=> result[3] = 1 누적합인 temp[1]이 의미하는 것은 " 1은 1번째에서 4번째 사이에( 1, 2, 3 )위치한다" 는 것
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> count(10001, 0);
//
//	for (int i = 0; i < N; i++)
//	{
//		int num;
//		std::cin >> num;
//		count[num]++;
//	}
//
//	for (int i = 1; i <= 10000; i++)
//	{
//		if (count[i] == 0) continue;
//
//		for (int j = 0; j < count[i]; j++) std::cout << i << '\n';
//	}
//}

/* --- < 2108 > --- */

/*
< 문제 >
	수를 처리하는 것은 통계학에서 상당히 중요한 일이다.
	통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

	산술평균 : N개의 수들의 합을 N으로 나눈 값
	중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	최빈값 : N개의 수들 중 가장 많이 나타나는 값
	범위 : N개의 수들 중 최댓값과 최솟값의 차이

	N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다.
	그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

< 출력 >
	첫째 줄에는 산술평균을 출력한다.
	소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

	둘째 줄에는 중앙값을 출력한다.

	셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

	넷째 줄에는 범위를 출력한다.
*/

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	// 1. 입력 받은 값을 저장할 배열과 입력 받은 값의 갯수를 저장할 배열을 만든다.
//	std::vector<int> v1(N);
//	std::vector<int> v2(8001, 0);
//
//	int sum{};
//	int temp;
//	int max{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> v1[i];
//		sum += v1[i];
//		// 2. 값은 -4000 ~ +4000 까지 입력 받을 수 있으므로 0 번 인덱스를 -4000 이라고 가정하여 입력 받은 값에 + 4000을 한다.
//		v2[v1[i] + 4000]++;
//	}
//
//	std::qsort(v1.data(), v1.size(), sizeof(v1[0]), [](const void* left, const void* right)
//		{
//			return *static_cast<const int*>(left) - *static_cast<const int*>(right);
//		});
//
//	int index;
//	bool second{};
//
//	for (int i = 0; i <= 8000; i++)
//	{	// 3. 가장 많이 입력된 값을 index 로 저장하여 -4000 을 연산하여 출력
//		if (v2[i] > max)
//		{
//			max = v2[i];
//			index = i;
//		}
//	}
//
//	for (int i = index + 1; i <= 8000; i++)
//	{	// 4. 많이 입력된 값이 여러개 일 때 가장 큰 값을 뽑는다.
//		if (v2[i] == max)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	int average = round(sum / static_cast<double>(N));
//
//	std::cout << average << '\n';
//	std::cout << v1[N / 2] << '\n';
//	std::cout << index - 4000 << '\n';
//	std::cout << v1[N - 1] - v1[0] << '\n';
//}

/* --- < 1427 > --- */

/*
< 문제 >
	배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

< 입력 >
	첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

< 출력 >
	첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	std::string N;
//	std::cin >> N;
//
//	char number;
//	int arr[10]{};
//
//	for (int i = 0; i < N.size(); i++)
//	{
//		number = N[i];
//		arr[(number - '0')]++;
//	}
//
//	for (int i = 9; i >= 0; i--)
//	{
//		for (int j = 0; j < arr[i]; j++)
//		{
//			std::cout << i;
//		}
//	}
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//int main()
//{
//	std::string N;
//	std::cin >> N;
//
//	std::sort(N.begin(), N.end(), std::greater<char>());
//
//	std::cout << N << '\n';
//}

/* --- < 11650 > --- */

/*
< 문제 >
	2차원 평면 위의 점 N개가 주어진다.
	좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다.
	둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다.
	(-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.

< 출력 >
	첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.

< 풀이 >
	STL sort함수를 이용하면 알아서 vector의 first를 기준으로 정렬하고, first가 같으면 second를 기준으로 정렬한다.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, int>> point;
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::pair<int, int> temp;
//		std::cin >> temp.first >> temp.second;
//
//		point.push_back(temp);
//	}
//
//	std::sort(point.begin(), point.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << point[i].first << " " << point[i].second << '\n';
//	}
//}

/* --- < 11651 > --- */

/*
< 문제 >
	2차원 평면 위의 점 N개가 주어진다.
	좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다.
	둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다.
	(-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.

< 출력 >
	첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, int>> point;
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::pair<int, int> temp;
//		std::cin >> temp.first >> temp.second;
//
//		point.push_back(temp);
//	}
//
//	std::sort(point.begin(), point.end(),
//		[](const std::pair<int, int>& a, const std::pair<int, int>& b)
//		{
//			return (a.second != b.second) ? a.second < b.second : a.first < b.first;
//		});
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << point[i].first << " " << point[i].second << '\n';
//	}
//}

/* --- < 1181 > --- */

/*
< 문제 >
	알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

	길이가 짧은 것부터
	길이가 같으면 사전 순으로

< 입력 >
	첫째 줄에 단어의 개수 N이 주어진다.
	(1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다.
	주어지는 문자열의 길이는 50을 넘지 않는다.

< 출력 >
	조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.
*/

//#include <iostream>
//#include <list>
//#include <algorithm>
//
//int main()
//{
//	std::list<std::string> name;
//
//	int N;
//	std::cin >> N;
//
//	std::string temp;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> temp;
//		name.push_back(temp);
//	}
//
//	name.sort([](const std::string& left, const std::string& right)
//		{
//			return (left.size() != right.size()) ? left.size() < right.size() : left < right;
//		});
//
//	name.unique();
//
//	for (auto e : name)
//	{
//		std::cout << e << '\n';
//	}
//}

/* --- < 10814 > --- */

/*
< 문제 >
	온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다.
	이때, 회원들을 나이가 증가하는 순으로,
	나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 온라인 저지 회원의 수 N이 주어진다. (1 ≤ N ≤ 100,000)

	둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다.
	나이는 1보다 크거나 같으며, 200보다 작거나 같은 정수이고, 이름은 알파벳 대소문자로 이루어져 있고,
	길이가 100보다 작거나 같은 문자열이다. 입력은 가입한 순서로 주어진다.

< 출력 >
	첫째 줄부터 총 N개의 줄에 걸쳐 온라인 저지 회원을 나이 순,
	나이가 같으면 가입한 순으로 한 줄에 한 명씩 나이와 이름을 공백으로 구분해 출력한다.

< 풀이 >
	stable_sort : 여러 값들이 묶여있는 배열을 비교할 때 하나의 요소로 정렬을 했을 때 다른 요소들의 정렬 순서도
			정렬 전과 같이 그대로 유지될 수 있도록 하는 정렬이다.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//struct Member
//{
//	int age;
//	std::string name;
//};
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<Member> members(N);
//
//	for (int i = 0; i < N; i++) std::cin >> members[i].age >> members[i].name;
//
//	std::sort(members.begin(), members.end(), [](const Member& a, const Member& b)
//		{
//			return (a.age == b.age ? false : a.age < b.age);
//		});
//
//	for (const Member& member : members) std::cout << member.age << ' ' << member.name << '\n';
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, std::string>> name;
//
//	int N;
//	std::cin >> N;
//
//	std::pair<int, std::string> temp;
//	
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> temp.first >> temp.second;
//
//		name.push_back(temp);
//	}
//
//	std::stable_sort(name.begin(), name.end(),
//		[](const std::pair<int, std::string>& left, const std::pair<int, std::string>& right)
//		{
//			return left.first < right.first;
//		});
//
//	for (auto e : name)
//	{
//		std::cout << e.first << " " << e.second << '\n';
//	}
//}

/* --- < 18870 > --- */

/*
< 문제 >
	수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

	Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.

	X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

< 입력 >
	첫째 줄에 N이 주어진다.

	둘째 줄에는 공백 한 칸으로 구분된 X1, X2, ..., XN이 주어진다.

< 출력 >
	첫째 줄에 X'1, X'2, ..., X'N을 공백 한 칸으로 구분해서 출력한다.

< 풀이 >
	1. 값들을 오름차순으로 정렬
	2. 중복을 제거 (메모의 unique와 erase부분. unique는 리턴값으로 '중복처리로 뒤로 미룬 첫번째 위치'를 반환한다. ex 3의 위치)
	3. 이 때 값들의 index값이 문제에서 요구하는 정답.

	하지만 이미 입력값을 오름차순으로 정렬해놓았기에,
	입력에서 주어진 순서로 주어진 값의 index 값을 출력해줘야했다.

	따라서 벡터를 두개로 뒀고
	두 벡터에 동일하게 입력값을 넣어주고 하나의 벡터만 정렬한 뒤 중복을 제거해주었고

	lower_bound를 통해 이진탐색을 진행하여 인덱스 값을 출력해주었다.
	lower_bound : 이진탐색기반. 해당하는 값보다 크거나 같은값이 제일 처음 등장하는 곳 위치를 리턴. (정렬 전제)
*/

//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> vec(N);
//	std::map<int, int> compressed;
//
//	for (int i = 0; i < N; i++) std::cin >> vec[i];
//
//	std::vector<int> sorted_vec = vec;
//	std::sort(sorted_vec.begin(), sorted_vec.end());
//	sorted_vec.erase(std::unique(sorted_vec.begin(), sorted_vec.end()), sorted_vec.end());
//
//	for (int i = 0; i < sorted_vec.size(); i++)
//	{
//		compressed[sorted_vec[i]] = i;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << compressed[vec[i]] << ' ';
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> point(N);
//	std::vector<int> result(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> point[i];
//		result[i] = point[i];
//	}
//
//	std::sort(point.begin(), point.end());
//	point.erase(std::unique(point.begin(), point.end()), point.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << std::lower_bound(point.begin(), point.end(), result[i]) - point.begin() << " ";
//	}	std::cout << '\n';
//}