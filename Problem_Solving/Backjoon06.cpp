/* ----- < 6�ܰ� ���ڿ� > ----- */
//
//
//
//
//
/* --- < 10809 > --- */

/*
< ���� >
	���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.
	������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
	���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �ܾ� S�� �־�����.
	�ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

< ��� >
	������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ,
	... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.
	����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�.
	�ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
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
//	// 1. ���ĺ��� ���� ��ġ�� ������ �迭�� �ʱ�ȭ
//	std::vector<int> result(26, -1);
//
//	// 2. �Է����� �־��� �ܾ �� ���ھ� Ž��
//	for (int i = 0; i < S.length(); i++)
//	{
//		// 3. �ƽ�Ű �ڵ尪�� ���Ѵ�.
//		int index = S[i] - 'a';
//		// 4. �ش� ���ڰ� ���� ù ���� �� ���̶�� �ε��� ��ȣ�� ���ҷ� ��� �ش�.
//		if (result[index] == -1) result[index] = i;
//	}
//
//	for (int i : result) std::cout << i << ' ';
//}

/* --- < 1157 > --- */

/*
< ���� >
	���ĺ� ��ҹ��ڷ� �� �ܾ �־�����,
	�� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
	��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

< �Է� >
	ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����.
	�־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.

< ��� >
	ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�.
	��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	// 1. ���ĺ��� ���� Ƚ���� ������ �迭�� �ʱ�ȭ
//	int count[26]{};
//
//	// 2. �ܾ �� ���ھ� Ž���ϸ鼭 ���ĺ��� ���� Ƚ���� ī��Ʈ
//	for (char c : S)
//	{
//		if ('a' <= S[c] && S[c] <= 'z')
//			count[c - 'a']++;
//		else
//			count[c - 'A']++;
//	}
//
//	// 3. ���� Ƚ���� ������ �迭���� ���� ū ��
//	int max{};
//	// 4. �ش� ����
//	char maxChar = { '?' };
//	// 5. �ߺ� �÷���
//	bool isDup{ false };
//
//	for (int i = 0; i < 26; i++)
//	{
//		// 6. �ߺ��Ǵ� ���� �ִ��� Ȯ���Ѵ�.
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
< ���� >
	���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����.
	�� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

< �Է� >
	ù �ٿ� ���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����.
	�� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�.
	�ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����.
	���� ���ڿ��� �������� �����ϰų� ���� �� �ִ�.

< ��� >
	ù° �ٿ� �ܾ��� ������ ����Ѵ�.
*/

//#include <iostream>
//#include <string>
//#include <sstream>
//
//// ���忡 ���Ե� �ܾ��� ������ ���� �Լ�
//int CountWords(const std::string& str)
//{
//	std::istringstream iss(str);	// ������ inputstringstream���� ����
//
//	int count{};
//	std::string word;
//
//	// >> ������ ������ �������� �� ���� ī��Ʈ �Ѵ�.
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
< ���� >
	������� ���� ����� ������ ���� ���Ѵ�. ����� ���ڸ� �дµ� ������ �ִ�.
	�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���.
	����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���. �� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
	����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�.

	���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.
	����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.

	�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����.
	�� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.

< ��� >
	ù° �ٿ� ����� ����� ����Ѵ�.
*/

//#include <iostream>
//
//// �Է¹��� ���� ����� ��ȯ�ϴ� �Լ�
//int Revers(int num)
//{
//	int result{};
//
//	// �Ű������� 1�� �ڸ� ���ڸ� % �������� �ް� �Ű������� / 10�� �Ͽ� �ش�.
//	// 1�� �ڸ� ���� ���� ���� * 10�� �Ͽ��ش�.
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
< ���� >
	������� �ҸӴϴ� �Ʒ� �׸��� ���� ������ ���̾� ��ȭ�⸦ ����Ѵ�.
	��ȭ�� �ɰ� ���� ��ȣ�� �ִٸ�, ���ڸ� �ϳ��� ���� ������ �ݼ� ���� �ִ� �� ���� �ð�������� ������ �Ѵ�.
	���ڸ� �ϳ� ������ ���̾��� ó�� ��ġ�� ���ư���, ���� ���ڸ� �������� ���̾��� ó�� ��ġ���� �ٽ� ������ �Ѵ�.

	���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�.
	1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���, �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.

	������� �ҸӴϴ� ��ȭ ��ȣ�� �� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��.
	��, � �ܾ �� ��, �� ���ĺ��� �ش��ϴ� ���ڸ� �ɸ� �ȴ�.
	���� ���, UNUCIC�� 868242�� ����.

	�ҸӴϰ� �ܿ� �ܾ �־����� ��, �� ��ȭ�� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����. �ܾ��� ���̴� 2���� ũ�ų� ����, 15���� �۰ų� ����.

< ��� >
	ù° �ٿ� ���̾��� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ����Ѵ�.
*/

//#include <iostream>
//#include <string>
//
//// �־��� ���ڿ��� ���� �ð��� ��ȯ�ϴ� �Լ�
//int CallTime(const std::string& str)
//{
//	int time{};
//
//	// �ݺ����� ���鼭 �� ���ھ� �ð��� �߰��Ѵ�.
//	for (char c : str) 
//	{
//		// ���ڰ� �����Ƿ� switch���� Ȱ���Ѵ�.
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
//	// �Էµ� ���ڿ��� ��ȸ
//	for (int i = 0; i < fx.size(); i++)
//	{
//		// �� ��ȣ�� ù ��° ���ڸ� ��ȸ
//		for (char C : "ADGJMPTW")
//		{
//			// �Էµ� ���ڿ��� ��ǥ ���ڿ� ���ų� �� Ŀ�� �� ���� 1�� �����ش�.
//			count += (fx[i] >= C);
//		}
//		// ���󺹱� �ð� �߰�
//		count++;
//	}
//
//	std::cout << count << '\n';
//}

/* --- < 1316 > --- */

/*
< ���� >
	�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�,
	�� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.

	���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����,
	kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
	aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

	�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �ܾ��� ���� N�� ���´�.
	N�� 100���� �۰ų� ���� �ڿ����̴�.
	��° �ٺ��� N���� �ٿ� �ܾ ���´�.
	�ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

< ��� >
	ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.
*/

//#include <iostream>
//#include <string>
//#include <cstring>
//
//// �׷� �ܾ����� �ƴ��� Ȯ���ϴ� �Լ�
//bool GroupWord(const std::string& word)
//{
//	// 1. �ε����� ���縵���� �����ϰ� ���� �� ���� �ִ��� üũ�Ѵ�.
//	bool en[26]{ false };
//
//	// 2. �Ű������� ���޹��� ������ ��ȸ �Ѵ�.
//	for (int i = 0; i < word.length(); i++)
//	{	// 3. �ƽ�Ű �ڵ�� ��ȯ�Ͽ� ���縵�� �ε����� ���Ѵ�.
//		int index = word[i] - 'a';
//		// 4. �̹� ������ ���� �����鼭 ���ÿ� �ٷ� ������ ���縵�� ���� ���縵�� �ٸ� ��� �� ������ �׷� �ܾ �ƴϴ�.
//		if (en[index] && word[i - 1] != word[i]) return false;
//		// 5. �ƴ϶�� ���縵�� ó�� ���� ������ ǥ���Ѵ�.
//		en[index] = true;
//	}
//	// 6. ������ �ݺ����� Ż�� �ߴٸ� �� �ܾ�� �׷� �ܾ��̴�.
//	return true;
//}
//// �׷� �ܾ��� ������ ���� �Լ�
//int CountGroup(int n)
//{
//	int count{};
//	// 1. �Է� ���� n ��ŭ �ܾ �Է��ϸ鼭 �׷� �ܾ����� Ȯ��
//	for (int i = 0; i < n; i++)
//	{
//		std::string word;
//		std::cin >> word;
//
//		if (GroupWord(word)) count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int result = CountGroup(N);
//	std::cout << result << '\n';
//}