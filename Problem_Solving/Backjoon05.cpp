/* ----- < 5�ܰ� �Լ� > ----- */
//
//
//
//
//
/* --- < 4673 > --- */

/*
< ���� >
	���� �ѹ��� 1949�� �ε� ������ D.R. Kaprekar�� �̸� �ٿ���.
	���� ���� n�� ���ؼ� d(n)�� n�� n�� �� �ڸ����� ���ϴ� �Լ���� ��������.
	���� ���, d(75) = 75+7+5 = 87�̴�.

	���� ���� n�� �־����� ��,
	�� ���� �����ؼ� n, d(n), d(d(n)), d(d(d(n))), ...�� ���� ���� ������ ���� �� �ִ�.

	���� ���, 33���� �����Ѵٸ� ���� ���� 33 + 3 + 3 = 39�̰�,
	�� ���� ���� 39 + 3 + 9 = 51, ���� ���� 51 + 5 + 1 = 57�̴�.
	�̷������� ������ ���� ������ ���� �� �ִ�.

	33, 39, 51, 57, 69, 84, 96, 111, 114, 120, 123, 129, 141, ...

	n�� d(n)�� �����ڶ�� �Ѵ�.
	���� �������� 33�� 39�� �������̰�,
	39�� 51�� ������, 51�� 57�� �������̴�.
	�����ڰ� �� ������ ���� ��쵵 �ִ�.
	���� ���, 101�� �����ڰ� 2��(91�� 100) �ִ�.

	�����ڰ� ���� ���ڸ� ���� �ѹ���� �Ѵ�.
	100���� ���� ���� �ѹ��� �� 13���� �ִ�.
	1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97

	10000���� �۰ų� ���� ���� �ѹ��� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	�Է��� ����.

< ��� >
	10,000���� �۰ų� ���� ���� �ѹ��� �� �ٿ� �ϳ��� �����ϴ� ������ ����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//
//// d(n) �Լ��� �Է� ���� n�� �� �ڸ� ���� ���� ���Ͽ� ��ȯ�Ѵ�.
//int d(int n)
//{
//	int sum{ n };
//
//	while (n > 0)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//
//	return sum;
//}
//
//int main()
//{
//// 1. ���� 10000���� �迭�� ���ͷ� �غ��ϰ� true������ �ʱ�ȭ �Ѵ�.
//	std::vector<bool> self(10000, true);
//// 2. 1���� 10000���� ��ȸ�ϸ� �� ������ �����ڸ� ���Ѵ�.
//	for (int i = 1; i < 10000; i++)
//	{
//		int temp = d(i);
//		// 3. �����ڸ� ������ �ε����� Ȱ���Ͽ� false�� �����Ѵ�.
//		if (temp < 10000) self[temp] = false;
//	}
//// 4. ������ true���� �� �ε����� ����Ѵ�.
//	for (int i = 1; i < 10000; i++)
//	{
//		if (self[i]) std::cout << i << ' ';
//	}
//}

/* --- < 1065 > --- */

/*
< ���� >
	� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
	���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
	N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

< ��� >
	ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.
*/

//#include <iostream>
//
//// �Է� ���� ���� �Ѽ��� ã�Ƽ� ������ ��ȯ�ϴ� �Լ�
//int Han(int N)
//{
//	int count{};
//
//// 1. 99 ������ ���� ��� �Ѽ��̴�.
//	if (N < 100) count = N;
//	else
//	{
//		count = 99;
//
//		for (int i = 100; i <= N; i++)
//		{	// 2. �� �ڸ����� ���̰� �����ϴٸ� ������ �ø���.
//			if (((i / 100) - (i / 10 % 10)) == ((i / 10 % 10) - (i % 10))) count++;
//		}
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
//	std::cout << Han(N) << '\n';
//}