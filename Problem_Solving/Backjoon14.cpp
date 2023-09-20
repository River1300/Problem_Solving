/* ----- < 14단계 정수론 및 조합론 > ----- */
//
//
//
//
//
/* --- < 5086 > --- */

/*
< 문제 >
	4 × 3 = 12이다.
	이 식을 통해 다음과 같은 사실을 알 수 있다.
	3은 12의 약수이고, 12는 3의 배수이다.
	4도 12의 약수이고, 12는 4의 배수이다.
	두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.

	첫 번째 숫자가 두 번째 숫자의 약수이다.
	첫 번째 숫자가 두 번째 숫자의 배수이다.
	첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

< 입력 >
	입력은 여러 테스트 케이스로 이루어져 있다.
	각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다.
	마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.

< 출력 >
	각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를,
	배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int num1, num2;
//
//	while (std::cin >> num1 >> num2)
//	{
//		if (num1 == 0 && num2 == 0) { break; }
//
//		if (num2 % num1 == 0) { std::cout << "factor" << '\n'; }
//		else if (num1 % num2 == 0) { std::cout << "multiple" << '\n'; }
//		else { std::cout << "neither" << '\n'; }
//	}
//}

/* --- < 1037 > --- */

/*
< 문제 >
	양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다.
	어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 N의 진짜 약수의 개수가 주어진다.
	이 개수는 50보다 작거나 같은 자연수이다.
	둘째 줄에는 N의 진짜 약수가 주어진다.
	1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

< 출력 >
	첫째 줄에 N을 출력한다.
	N은 항상 32비트 부호있는 정수로 표현할 수 있다.

< 풀이 >
	양수 A의 가장 작은 약수가 min 이라고 할때 가장 큰 약수 max =  A/min이 된다.
	따라서 min(최소)값과 max(최대)값을 서로 곱해주면 A를 구할 수 있다.
	그런데 30의 경우 약수가 2, 3 ,5 일텐데 위의 말대로라면 2 * 5 = 10 이 정답이 아닌가?
	할 수도 있다.
	그러나 문제에서 "N의 진짜 약수가 전부 주어진다" 라고 했기 때문에
	30이 답이라면 2,3,5,6,10,15 가 주어졌을 것이다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int max{};
//	int min{ 1000000 };
//
//	for (int i = 0; i < N; i++)
//	{
//		int num;
//		std::cin >> num;
//
//		if (max < num) max = num;
//		if (min > num) min = num;
//	}
//
//	std::cout << max * min << '\n';
//}

/* --- < 2609 > --- */

/*
< 문제 >
	두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에는 두 개의 자연수가 주어진다.
	이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

< 출력 >
	첫째 줄에는 입력으로 주어진 두 수의 최대공약수를,
	둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.

< 풀이 >
	#include <numeric>
	std::gcd();	// 최대 공약수
	std::lcm();	// 최소 공배수

	num1(60) % num2(48) = result(12)
	num1(48) % num2(12) = result(0)
	num1(12) % num2(0) -> return num1(12);

	num1(60) X num2(48) = result(2880)
	result(2880) / gcd(12) = 240;
*/

//#include <iostream>
//
//int DevideNum(int num1, int num2)
//{
//	return num2 ? DevideNum(num2, (num1 % num2) : num1);
//}
//
//int main()
//{
//	int num1, num2;
//	std::cin >> num1 >> num2;
//
//	std::cout << DevideNum(num1, num2) << '\n';
//	std::cout << num1 * num2 / DevideNum(num1, num2) << '\n';
//}

/* --- < 1934 > --- */

/*
< 문제 >
	두 자연수 A와 B에 대해서, A의 배수이면서 B의 배수인 자연수를 A와 B의 공배수라고 한다.
	이런 공배수 중에서 가장 작은 수를 최소공배수라고 한다.
	예를 들어, 6과 15의 공배수는 30, 60, 90등이 있으며, 최소 공배수는 30이다.

	두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
	둘째 줄부터 T개의 줄에 걸쳐서 A와 B가 주어진다. (1 ≤ A, B ≤ 45,000)

< 출력 >
	첫째 줄부터 T개의 줄에 A와 B의 최소공배수를 입력받은 순서대로 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//
//int GCD(int a, int b)
//{
//	return b ? GCD(b, a % b) : a;
//}
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int A, B;
//		std::cin >> A >> B;
//
//		std::cout << A * B / GCD(A, B) << '\n';
//	}
//}