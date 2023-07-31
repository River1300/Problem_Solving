/* ----- < 8단계 기본 수학2 > ----- */
//
//
//
//
//
/* --- < 1978 > --- */

/*
< 문제 >
	주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

< 입력 >
	첫 줄에 수의 개수 N이 주어진다. N은 100이하이다.
	다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

< 출력 >
	주어진 수들 중 소수의 개수를 출력한다.
*/

//#include <iostream>
//
//// 전달 받은 값이 소수인지 아닌지 판단하여 참/거짓으로 반환하는 함수
//bool SoSu(int N)
//{
//	if (N <= 1) return false;
//
////	1. 주어진 수가 소수인지 여부를 확인하기 위해 주어진 수보다 작거나 같은 모든 수를 검사
////		=> 10 : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10까지의 모든 수를 검사해야 하지만 어차피 6,7,8,9는 10으로 나누어 질 수 없다.
////		=> 반복의 제한 범위를 i * i <= N으로 지정하여 주어진 수보다 작은 수들은 검사하지 않도록
//	for (int i = 2; i * i <= N; i++)
//	{
//		// 2. 자기 자신 이외의 수와 나누어서 값이 떨어진다면 false
//		if (N % i == 0) return false;
//	}
//	// 3. 무사히 반복문을 탈출 했다면 true
//	return true;
//}
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int count{};
//
//	for (int i = 0; i < N; i++)
//	{
//		int number;
//		std::cin >> number;
//
//		if (SoSu(number)) count++;
//	}
//
//	std::cout << count << '\n';
//}

/* --- < 11653 > --- */

/*
< 문제 >
	정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

< 출력 >
	N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.

< 수학 >
	< 소인수분해 > : 자연수를 소인수로 분해하는 것
		=> 자연수를 소인수들의 곱으로 표현하는 것
		=> 자연수를 소수가 나올 때까지 계속 소수로 나눈다.
		=> 60 / 2 = 30 / 2 = 15 / 3 = 5
			=> 2, 3, 5는 60의 소인수

	< 약수 >
		=> 12 / 3 = 4일 때 나머지가 0으로 떨어지게 된다. 이 때 3을 약수라고 한다.

	< 인수 >
		=> 1 * 12 = 12일 때 1과 12는 12의 인수이다.
		=> 3 * 4 = 12도 마찬가지로 3과 4는 12의 인수이다.

	< 소인수 >
		=> 인수 중에서 소수인 것들을 소인수라고 한다.

	< 소수 >
		=> 1과 그 수 이외의 자연수로는 자눌 수 없는 1보다 큰 자연수

< 풀이 >
	N을 나누는 가장 작은 소인수를 찾을 때까지 2부터 차례로 N을 나누어 본다.
	소인수를 찾으면 N을 그 소인수로 나눈 후, 그 값을 N에 다시 저장한다.
	이를 반복하다 보면 N은 점점 작아지고 어느 순간, N자체가 소수가 되어 N을 나누는 수는 N자신 밖에 없게된다.
	따라서 N을 N으로 나누어 N에 1이 저장되면 코드가 종료된다.
*/

//#include <iostream>
//
//int main() 
//{
//	int N;
//	std::cin >> N;
//
//	for (int i = 2; i * i <= N; i++) 
//	{
//		while (N % i == 0) 
//		{
//			std::cout << i << '\n';
//			N /= i;
//		}
//	}
//
//	if (N > 1) 
//	{
//		std::cout << N << '\n';
//	}
//}

/* --- < 1929 > --- */

/*
< 문제 >
	M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

< 출력 >
	한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.

< 풀이 >
	소수는 자기 자신과 1로 밖에 나누어지지 않는다.
	그러면 어떤 수의 배수는 소수가 될 수 없다. 예를 들어
	2의 배수인 4, 6, 8 ...은 소수가 될 수 없고
	3의 배수인 6, 9, 12 ...은 소수가 될 수 없다.
*/

//#include <iostream>
//
//int main()
//{
//	int* arr = new int [1000001]{1, 1, };
//	int M, N;
//	std::cin >> M >> N;
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 2; i * j <= N; j++)
//		{
//			arr[i * j] = 1;
//		}
//	}
//	
//	for (int i = M; i <= N; i++)
//	{
//		if (arr[i] == 0) { std::cout << i << '\n'; }
//	}
//
//	delete[] arr;
//}

/* --- < 4948 > --- */

/*
< 문제 >
	베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

	이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

	예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

	자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오.

< 입력 >
	입력은 여러 개의 테스트 케이스로 이루어져 있다.
	각 케이스는 n을 포함하는 한 줄로 이루어져 있다.

	입력의 마지막에는 0이 주어진다.

< 출력 >
	각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.

< 제한 >
	1 ≤ n ≤ 123,456
*/

//#include <iostream>
//#include <vector>
//
//// 소수를 찾는 함수
//std::vector<bool> FindSo(int N)
//{	// 1. 모든 수를 소수로 가정하고 초기화
//	std::vector<bool> isPrime(N + 1, true);	
//	isPrime[0] = isPrime[1] = false;	// 당연히 0, 1은 소수에서 제외
//	// 2. 2부터 시작하여 N의 약수가 될 수 없는 수까지 반복한다.
//	for (int i = 2; i * i <= N; i++)
//	{	// 3. i가 소수일 경우 i의 배수들은 모두 소수가 아니다.
//		if (isPrime[i])
//		{
//			for (int j = i * i; j <= N; j += i)
//			{
//				isPrime[j] = false;
//			}
//		}
//	}
//	return isPrime;
//}
//
//int main()
//{
//	while (true)
//	{
//		int N;
//		std::cin >> N;
//
//		if (N == 0) break;
//
//		std::vector<bool> isPrime = FindSo(2 * N);	// 2N 이하의 소수들을 찾는다.
//
//		int cnt{};
//		for (int i = N = 1; i <= 2 * N; i++)
//		{
//			if (isPrime[i])cnt++;	// N보다 크고 2N 이하인 소수들의 개수를 센다.
//		}
//
//		std::cout << cnt << '\n';
//	}
//}

/* --- < 9020 > --- */

/*
< 문제 >
	1보다 큰 자연수 중에서  1과 자기 자신을 제외한 약수가 없는 자연수를 소수라고 한다.
	예를 들어, 5는 1과 5를 제외한 약수가 없기 때문에 소수이다.
	하지만, 6은 6 = 2 × 3 이기 때문에 소수가 아니다.

	골드바흐의 추측은 유명한 정수론의 미해결 문제로,
	2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다.
	이러한 수를 골드바흐 수라고 한다.
	또, 짝수를 두 소수의 합으로 나타내는 표현을 그 수의 골드바흐 파티션이라고 한다.
	예를 들면, 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7이다.
	10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.

	2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하시오.
	만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.

< 입력 >
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있고 짝수 n이 주어진다.

< 출력 >
	각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다.
	출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.

< 제한 >
	4 ≤ n ≤ 10,000

< 풀이 >
	에라토스테네스의 알고리즘을 이용해 1부터 10000까지 소수를 구한다.
	첫째값을 입력값의 절반부터 시작해 1씩 감소시킨다. 소수이면 두째값이 소수인지 판별한다.
	만약 첫째값, 둘째값 모두 소수이면 결과를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int* arr = new int[10001]{ 1,1 };
//	int T;
//	std::cin >> T;
//
//	for (int i = 2; i <= 10000; i++)
//	{
//		for (int j = 2; i * j <= 10000; j++)
//		{
//			arr[i * j] = 1;
//		}
//	}
//
//	for (; T > 0; T--)
//	{
//		int N;
//		std::cin >> N;
//
//		int length = N / 2;
//		for (int i = 0; i < length; i++)
//		{
//			int temp1 = length - i;
//			int temp2 = N - temp1;
//
//			if (arr[temp1] == 0)
//			{
//				if (arr[temp2] == 0)
//				{
//					std::cout << temp1 << ' ' << temp2 << '\n';
//					break;
//				}
//			}
//		}
//	}
//}