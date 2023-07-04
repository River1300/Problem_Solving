/* ----- < 4단계 1차원 배열 > ----- */
//
//
//
//
//
/* --- < 2577 > --- */

/*
< 문제 >
	세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에
	0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
	예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고,
	계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

< 입력 >
	첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다.
	A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.

< 출력 >
	첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다.
	마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 1부터 9까지의 숫자가
	각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//// 배열의 갯수를 0 ~ 9 값으로 가정하고 원소 값을 증가 시키는 방식으로 숫자의 갯수를 구한다.
//// % 10을 계산하면 항상 1의 자리 값이 남고, / 10을 계산하면 1의 자리 값만 제거된다.
//	int count[10]{};
//
//	int result = 123 * 456 * 768;
//
//	while (result > 0)
//	{
//		int value = result % 10;
//		count[value]++;
//		result /= 10;
//	}
//
//	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
//	{
//		std::cout << count[i] << ' ';
//	}
//}

//#include <iostream>
//
//int main()
//{
//	// 1. 3개의 자연수 A, B, C
//	int A, B, C;
//	std::cin >> A >> B >> C;
//	// 2. A, B, C를 곱한 값을 변수 result에 저장
//	int result = A * B * C;
//	// 3. 길이가 10인 배열을 생성, 각 숫자가 나온 횟수를 저장
//	int count[10]{};
//
//	while (result > 0)
//	{
//		//result를 10으로 나눈 나머지를 구하고 해당 나머지에 해당하는 count 배열의 인덱스를 증가시킵니다.
//		int value = result % 10;
//		count[value]++;
//		//result를 10으로 나눈 후 result를 갱신합니다.
//		result /= 10;
//		//위 과정을 result가 0이 될 때까지 반복합니다.
//	}
//	//count 배열의 각 요소 값을 출력합니다.
//	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
//	{
//		std::cout << count[i] << ' ';
//	}
//}

/* --- < 3052 > --- */

/*
< 문제 >
	두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
	예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.
	수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
	그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다.
	이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

< 출력 >
	첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/

//#include <iostream>
//// 1. 중복되는 값은 무시되면서 값을 저장할 수 있는 컨테이너 Set을 활용한다.
//#include <set>
//
//int main()
//{
//	// 2. 정수 배열에 입력
//	int arr[10];
//	// 3. % 42의 값을 저장할 컨테이너
//	std::set<int> result;
//
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		std::cin >> arr[i];
//		result.insert(arr[i] % 42);
//	}
//	// 4. 컨테이너의 크기를 출력
//	std::cout << result.size() << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	// 1. 정수 배열에 입력
//	int arr[10];
//	// 2. % 42의 값을 넣을 배열
//	int result[42]{};
//
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		// 3. 정수를 입력 받으면서 % 42의 값을 증가
//		std::cin >> arr[i];
//		result[arr[i] % 42]++;
//	}
//	// 4. 서로 다른 값을 셀 정수
//	int count{};
//
//	for (int i = 0; i < sizeof(result) / sizeof(int); i++)
//	{
//		// 5. 42를 순회 하며 0이 아닌 값을 찾을 때마다 정수 증가
//		if (result[i] != 0)
//			count++;
//	}
//	std::cout << count << '\n';
//}

/* --- < 1546 > --- */

/*
< 문제 >
	세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다.
	일단 세준이는 자기 점수 중에 최댓값을 골랐다.
	이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

	예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

	세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 시험 본 과목의 개수 N이 주어진다.
	이 값은 1000보다 작거나 같다.
	둘째 줄에 세준이의 현재 성적이 주어진다.
	이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.

< 출력 >
	첫째 줄에 새로운 평균을 출력한다.
	실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하이면 정답이다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	double* scores = new double[N];
//	double max{};
//
//	// 1. 배열에 점수를 입력 받으면서 최대 값을 찾는다.
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> scores[i];
//		if (max < scores[i]) max = scores[i];
//	}
//
//	double result{};
//
//	// 2. 배열을 순회 하며 최대 값으로 나누면서 합산한다.
//	for (int i = 0; i < N; i++)
//	{
//		result += scores[i] / max * 100;
//	}
//
//	std::cout << result / N << '\n';
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
//	std::vector<double> scores(N);
//
//	for (int i = 0; i < N; i++)
//		std::cin >> scores[i];
//	double max = *std::max_element(scores.begin(), scores.end());
//
//	double result{};
//	for (int i = 0; i < N; i++)
//		result += scores[i] / max * 100;
//	std::cout << result / N << '\n';
//}

/* --- < 8958 > --- */

/*
< 문제 >
	"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
	문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
	예를 들어, 10번 문제의 점수는 3이 된다.

	"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

	OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 테스트 케이스의 개수가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다.
	문자열은 O와 X만으로 이루어져 있다.

< 출력 >
	각 테스트 케이스마다 점수를 출력한다.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::string result;
//		std::cin >> result;
//
//		// 1. 퀴즈 점수와 연속된 정답 점수를 담을 변수가 필요하다.
//		int score{};
//		int sumScore{};
//		
//		// 2. 반복문을 문자 단위로 순회한다.
//		for (char c : result)
//		{
//			// 3. O 문자를 발견하였을 경우 연속된 정답 점수를 +1 증가시키고 이 값을 퀴즈 점수에 더한다.
//			if (c == 'O')
//			{
//				sumScore++;
//				score += sumScore;
//			}
//			else
//			{
//				// 4. O문자가 아닐 경우 연속된 정답 점수를 0으로 초기화 한다.
//				sumScore = 0;
//			}
//		}
//
//		std::cout << "최종 점수 : " << score << '\n';
//	}
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<std::string> nan(N);
//	for (int i = 0; i < N; i++)
//		std::cin >> nan[i];
//
//	for (const std::string test : nan)
//	{
//		int score{};
//		int sumScore{};
//
//		for (char c : test)
//		{
//			if (c == 'O')
//			{
//				sumScore++;
//				score += sumScore;
//			}
//			else
//			{
//				sumScore = 0;
//			}
//		}
//
//		std::cout << score << '\n';
//	}
//}

/* --- < 4344 > --- */

/*
< 문제 >
	대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다.
	당신은 그들에게 슬픈 진실을 알려줘야 한다.

< 입력 >
	첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

	둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,
	이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

< 출력 >
	각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int C;
//	std::cin >> C;
//
//	for (int i = 0; i < C; i++)
//	{
//		int N;
//		std::cin >> N;
//
//		std::vector<int> scores(N);
//		int sum{};
//
//		for (int j = 0; j < N; j++)
//		{
//			// 1. 학생 점수를 입력받으면서 점수의 총합을 구한다.
//			std::cin >> scores[j];
//			sum += scores[j];
//		}
//		// 2. 학생 평균 점수를 구한다.
//		double avg = static_cast<double>(sum) / N;
//		int count{};
//
//		for (int j = 0; j < N; j++)
//		{
//			// 3. 평균보다 높은 점수를 보유한 학생의 수를 구한다.
//			if (scores[j] > avg)
//				count++;
//		}
//
//		double result = static_cast<double>(count) / N * 100;
//		
//		std::cout << std::fixed;
//		std::cout.precision(3);
//		std::cout << result << "%\n";
//	}
//}