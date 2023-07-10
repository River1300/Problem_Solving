/* ----- < 6단계 문자열 > ----- */
//
//
//
//
//
/* --- < 10809 > --- */

/*
< 문제 >
	알파벳 소문자로만 이루어진 단어 S가 주어진다.
	각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
	포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 단어 S가 주어진다.
	단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

< 출력 >
	각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치,
	... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
	만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다.
	단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	// 1. 알파벳의 등장 위치를 저장할 배열을 초기화
//	std::vector<int> result(26, -1);
//
//	// 2. 입력으로 주어진 단어를 한 글자씩 탐색
//	for (int i = 0; i < S.length(); i++)
//	{
//		// 3. 아스키 코드값을 구한다.
//		int index = S[i] - 'a';
//		// 4. 해당 문자가 만약 첫 등장 한 것이라면 인덱스 번호를 원소로 쥐어 준다.
//		if (result[index] == -1) result[index] = i;
//	}
//
//	for (int i : result) std::cout << i << ' ';
//}

/* --- < 1157 > --- */

/*
< 문제 >
	알파벳 대소문자로 된 단어가 주어지면,
	이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
	단, 대문자와 소문자를 구분하지 않는다.

< 입력 >
	첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다.
	주어지는 단어의 길이는 1,000,000을 넘지 않는다.

< 출력 >
	첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
	단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	// 1. 알파벳의 등장 횟수를 저장할 배열을 초기화
//	int count[26]{};
//
//	// 2. 단어를 한 글자씩 탐색하면서 알파벳의 등장 횟수를 카운트
//	for (char c : S)
//	{
//		if ('a' <= S[c] && S[c] <= 'z')
//			count[c - 'a']++;
//		else
//			count[c - 'A']++;
//	}
//
//	// 3. 등장 횟수를 저장한 배열에서 가장 큰 값
//	int max{};
//	// 4. 해당 문자
//	char maxChar = { '?' };
//	// 5. 중복 플래그
//	bool isDup{ false };
//
//	for (int i = 0; i < 26; i++)
//	{
//		// 6. 중복되는 값이 있는지 확인한다.
//		if (count[i] > max)
//		{
//			max = count[i];
//			maxChar = 'A' + i;
//			isDup = false;
//		}
//		else if (count[i] == max)
//		{
//			isDup = true;
//		}
//	}
//
//	if (isDup)
//		std::cout << "?\n";
//	else
//		std::cout << maxChar << '\n';
//}

/* --- < 1152 > --- */

/*
< 문제 >
	영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
	이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
	단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

< 입력 >
	첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
	이 문자열의 길이는 1,000,000을 넘지 않는다.
	단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다.
	또한 문자열은 공백으로 시작하거나 끝날 수 있다.

< 출력 >
	첫째 줄에 단어의 개수를 출력한다.
*/

//#include <iostream>
//#include <string>
//#include <sstream>
//
//// 문장에 포함된 단어의 갯수는 세는 함수
//int CountWords(const std::string& str)
//{
//	std::istringstream iss(str);	// 문장을 inputstringstream으로 저장
//
//	int count{};
//	std::string word;
//
//	// >> 식으로 공백을 기준으로 한 개씩 카운트 한다.
//	while (iss >> word) count++;
//
//	return count++;
//}
//
//int main()
//{
//	std::string S;
//	std::getline(std::cin, S);
//
//	std::cout << CountWords(S) << '\n';
//}

/* --- < 2908 > --- */

/*
< 문제 >
	상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다.
	이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다.
	상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.
	상수는 수를 다른 사람과 다르게 거꾸로 읽는다.

	예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다.
	따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

	두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다.
	두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

< 출력 >
	첫째 줄에 상수의 대답을 출력한다.
*/

//#include <iostream>
//
//// 입력받은 수를 뒤집어서 반환하는 함수
//int Revers(int num)
//{
//	int result{};
//
//	// 매개변수의 1의 자리 숫자를 % 연산으로 받고 매개변수를 / 10을 하여 준다.
//	// 1의 자리 부터 받은 값은 * 10을 하여준다.
//	while (num > 0)
//	{
//		result = result * 10 + num % 10;
//		num /= 10;
//	}
//
//	return result;
//}
//
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//
//	a = Revers(a);
//	b = Revers(b);
//
//	int result = (a > b) ? a : b;
//	std::cout << result << ' ';
//}

//#include <iostream>
//
//int main()
//{
//	std::string num1, num2;
//	std::cin >> num1 >> num2;
//
//	int a, b;
//
//	a = (num1[0] - '0') + (num1[1] - '0') * 10 + (num1[2] - '0') * 100;
//	b = (num2[0] - '0') + (num2[1] - '0') * 10 + (num2[2] - '0') * 100;
//
//	int result = (a > b) ? a : b;
//	std::cout << result << ' ';
//}

/* --- < 5622 > --- */

/*
< 문제 >
	상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
	전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다.
	숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.

	숫자 1을 걸려면 총 2초가 필요하다.
	1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

	상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다.
	즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다.
	예를 들어, UNUCIC는 868242와 같다.

	할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

< 출력 >
	첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
*/

//#include <iostream>
//#include <string>
//
//// 주어진 문자열을 통해 시간을 반환하는 함수
//int CallTime(const std::string& str)
//{
//	int time{};
//
//	// 반복문을 돌면서 한 문자씩 시간을 추가한다.
//	for (char c : str) 
//	{
//		// 문자가 많으므로 switch문을 활용한다.
//		switch (c) {
//		case 'A': case 'B': case 'C':
//			time += 3;
//			break;
//		case 'D': case 'E': case 'F':
//			time += 4;
//			break;
//		case 'G': case 'H': case 'I':
//			time += 5;
//			break;
//		case 'J': case 'K': case 'L':
//			time += 6;
//			break;
//		case 'M': case 'N': case 'O':
//			time += 7;
//			break;
//		case 'P': case 'Q': case 'R': case 'S':
//			time += 8;
//			break;
//		case 'T': case 'U': case 'V':
//			time += 9;
//			break;
//		case 'W': case 'X': case 'Y': case 'Z':
//			time += 10;
//			break;
//		}
//	}
//	return time;
//}
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	int time = CallTime(S);
//	std::cout << time << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	std::string fx;
//	std::cin >> fx;
//
//	int count{};
//
//	// 입력된 문자열을 순회
//	for (int i = 0; i < fx.size(); i++)
//	{
//		// 각 번호의 첫 번째 문자를 순회
//		for (char C : "ADGJMPTW")
//		{
//			// 입력된 문자열이 대표 문자와 같거나 더 커질 때 까지 1씩 더해준다.
//			count += (fx[i] >= C);
//		}
//		// 원상복귀 시간 추가
//		count++;
//	}
//
//	std::cout << count << '\n';
//}