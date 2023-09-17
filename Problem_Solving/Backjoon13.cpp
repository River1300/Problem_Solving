/* ----- < 13�ܰ� ���� 1 > ----- */
//
//
//
//
//
/* --- < 1085 > --- */

/*
< ���� >
	�Ѽ��� ���� (x, y)�� �ִ�.
	���簢���� �� ���� ��ǥ�࿡ �����ϰ�,
	���� �Ʒ� �������� (0, 0), ������ �� �������� (w, h)�� �ִ�.
	���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� x, y, w, h�� �־�����.

< ��� >
	ù° �ٿ� ������ ������ ����Ѵ�.

< ���� >
	1 �� w, h �� 1,000
	1 �� x �� w-1
	1 �� y �� h-1
	x, y, w, h�� ����
*/

//#include <iostream>
//#include <algorithm>
//
//int main()
//{
//	int x, y, w, h;
//	std::cin >> x >> y >> w >> h;
//
//	// 1. �� ª�� �Ÿ��� ã�Ƽ� ����
//	int distX = std::min(x, w - x);
//	int distY = std::min(y, h - y);
//	int dist = std::min(distX, distY);
//
//	std::cout << dist << '\n';
//}

/* --- < 3009 > --- */

/*
< ���� >
	�� ���� �־����� ��,
	�࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ��° ���� ã�� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	�� ���� ��ǥ�� �� �ٿ� �ϳ��� �־�����.
	��ǥ�� 1���� ũ�ų� ����, 1000���� �۰ų� ���� �����̴�.

< ��� >
	���簢���� �� ��° ���� ��ǥ�� ����Ѵ�.

< ^ ������ >
	�� ���� ���� �ڸ��� ��Ʈ�� ���� �ٸ� ��� 1�� ��ȯ( ��Ʈ XOR )
*/

//#include <iostream>
//
//int main()
//{
//	int x1, y1, x2, y2, x3, y3;
//	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//
//	int x4, y4;
//
//	if (x1 == x2)
//	{
//		x4 = x3;
//	}
//	else if (x1 == x3)
//	{
//		x4 = x2;
//	}
//	else
//	{
//		x4 = x1;
//	}
//
//	if (y1 == y2)
//	{
//		y4 = y3;
//	}
//	else if (y1 == y3)
//	{
//		y4 = y2;
//	}
//	else
//	{
//		y4 = y1;
//	}
//	std::cout << x4 << ' ' << y4 << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int aX, bY, cX, dY, eX, fY;
//	std::cin >> aX >> cX >> eX >> bY >> dY >> fY;
//
//	// ���簢���� �밢���� �׻� ���θ� �����Ѵ�. 
//	// ��, ù ��° ���� �� ��° ���� �̿��Ͽ� �밢���� ã��, �� �밢���� ������ �� ��° ���� ��ġ�ϰ� �ȴ�. 
//	// �׷��� �Ǹ� �� ��° ���� ��ǥ�� ã�� �� �ִ�.
//	// �Է����� �־��� �� ���� ��ǥ�� aX, bY, cX, dY, eX, fY�� ������ ��, 
//	// XOR(^) ������ ����Ͽ� �� ��° ���� ��ǥ�� ����Ѵ�.
//	// aX ^ cX ^ eX : x ��ǥ�� �� �߿��� �� ���� ��Ÿ���� ���� ã�´�. �밢���� �� �� �߿��� x ��ǥ ���� �� ���� ��Ÿ���� �ȴ�.
//	// bY ^ dY ^ fY : y ��ǥ�� �� �߿��� �� ���� ��Ÿ���� ���� ã�´�. �밢���� �� �� �߿��� y ��ǥ ���� �� ���� ��Ÿ���� �ȴ�.
//	std::cout << (aX ^ cX ^ eX) << ' ' << (bY ^ dY ^ fY) << '\n';
//}

//#include <iostream>
//
//int main() 
//{
//	int x = 0, y = 0;
//
//	// �� ���� x��ǥ�� y��ǥ�� �Է� �ް�, XOR ������ ����Ͽ� �� ���� x��ǥ�� y��ǥ�� ���Ѵ�. 
//	// �̷��� �ϸ� �ߺ����� �ʴ� x��ǥ�� y��ǥ�� ���� x�� y ������ ���� �ȴ�. 
//	// �׷��� �������� ����� �� �� x�� y ���� ����Ͽ� ���簢���� �� ��° ���� ��ǥ�� ���Ѵ�.
//	// ���⼭ XOR (^) ������ ����ϴ� ������ XOR ������ �� �� �����ϴ� ���� ��ҽ��Ѽ� �ϳ��� ����µ�, 
//	// �� ���������� �� �� �����ϴ� ��ǥ�� ���簢���� �� ��° ���� ��ǥ�̱� �����̴�.
//	for (int i = 0; i < 3; i++) 
//	{
//		int a, b;
//		std::cin >> a >> b;
//
//		x ^= a;
//		y ^= b;
//	}
//	
//	std::cout << x << ' ' << y << '\n';
//}

/* --- < 4153 > --- */

/*
< ���� >
	���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�.
	( w = 4, h = 3, v = 5 )
	�־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.

< �Է� >
	�Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�.
	�� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.

< ��� >
	�� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�.

< Ǯ�� >
	���� �ﰢ�� = ���� �� ������ ������ ���� �� ���� ������ ����.
	(3*3)+(4*4)=5*5
	9+16=25;
*/

//#include <iostream>
//#include <algorithm>
//
//int main()
//{
//	int num1, num2, num3;
//
//	while (std::cin >> num1 >> num2 >> num3)
//	{
//		if (a == 0 && b == 0 && c == 0) break;
//
//		// 1. �Է� ���� ���� ���� �Ͽ� ���� ū ���� ���̸� ã�´�.
//		int sides[] = { num1,num2,num3 };
//		std::sort(sides, sides.size());
//		num1 = sides[0];
//		num2 = sides[1];
//		num3 = sides[2];
//		// 2. ���Ŀ� ���� �´��� �ƴ��� Ȯ��
//		if (num1* num1 + num2 * num2 = num3 * num3) std::cout << "right\n";
//		else std::cout << "wrong\n";
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int x, y, z;
//
//	while (std::cin >> x >> y >> z)
//	{
//		if (x == 0 && y == 0 && z == 0) { break; }
//
//		if (x > y && x > z)
//		{
//			(y * y + z * z == x * x) ? 
//				std::cout << "right" << '\n' : std::cout << "wrong" << '\n';
//		}
//		else if (y > x && y > z)
//		{
//			(x*x+z*z==y*y)?
//				std::cout << "right" << '\n' : std::cout << "wrong" << '\n';
//		}
//		else if (z > x && z > y)
//		{
//			(x*x+y*y==z*z)?
//				std::cout << "right" << '\n' : std::cout << "wrong" << '\n';
//		}
//	}
//}

//#include<iostream>
//
//int main()
//{
//	int a, b, c;
//
//	while (std::cin>>a>>b>>c)
//	{
//		if (a == 0 && b == 0 && c == 0) { break; }
//
//		if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
//			std::cout << "right" << '\n';
//		else
//			std::cout << "wrong" << '\n';
//	}
//}

/* --- < 2477 > --- */

/*
< ���� >
	�ð� �ִ� �¾����� ���� �쿡�� Ŀ�ٶ� ���ܹ��� �ִ�.
	���� �¾��̴� �� �翡�� �ڶ�� ���ܰ� ����ü �� ���� �Ǵ��� �ñ�������.
	��� �˾Ƴ� �� �ִ��� ����� �����ϴٰ� ���� ���� ���̵� ���ö���.
	����ī! 1m2�� ���̿� �ڶ�� ���� ������ ��Ƹ� ����,
	���ܹ��� ���̸� ���ϸ� ��ʽ��� �̿��Ͽ� ������ �Ѱ����� ���� �� �ִ�.

	1m2�� ���̿� �ڶ�� ������ ������ ��ƷȰ�, ���� ���ܹ��� ���̸� ���ϸ� �ȴ�.
	���ܹ��� ��-�� ����̰ų� ��-�ڸ� 90��, 180��, 270�� ȸ���� ���(��, ��, �� ���)�� �������̴�.
	�������� ���� ���(�������� ��)�� ��� ���� �����̰ų� ���� �����̾���.
	���� �� �����̿��� ����Ͽ� ���� �ѷ��� ���鼭 ���� ���̸� ��� �����Ͽ���.

	���� ��� ���ܹ��� �� �׸��� ���� ����̶�� ����.
	�׸����� �������� ����, ������ ����, �Ʒ����� ����, ������ �����̴�.
	�� �׸��� ������ ���������� ����Ͽ�, �ݽð�������� �������� 30m, �������� 60m,
	�������� 20m, �������� 100m, �������� 50m,
	�������� 160m �̵��ϸ� �ٽ� ��������� �ǵ��ư��� �ȴ�.

	�� �׸��� ���ܹ�  ������ 6800m2�̴�.
	���� 1m2�� ���̿� �ڶ�� ������ ������ 7�̶��,
	�� �翡�� �ڶ�� ������ ������ 47600���� ���ȴ�.

	1m2�� ���̿� �ڶ�� ������ ������,
	���ܹ��� �̷�� �������� ������ �� ���������� ����Ͽ� �ݽð��������
	�ѷ��� ���鼭 ������ ���� ����� ���̰� ������� �־�����.
	�� ���ܹ翡�� �ڶ�� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù ��° �ٿ� 1m2�� ���̿� �ڶ�� ������ ������ ��Ÿ���� ���� ���� K (1 �� K �� 20)�� �־�����.
	���ܹ��� ��Ÿ���� �������� ������ �� ���������� ����Ͽ� �ݽð��������
	�ѷ��� ���鼭 ������ ���� ����� ���� (1 �̻� 500 ������ ����) ��
	��° �ٺ��� �ϰ� ��° �ٱ��� �� �ٿ� �ϳ��� ������� �־�����.
	���� ���⿡�� ������ 1, ������ 2, ������ 3, ������ 4�� ��Ÿ����.

< ��� >
	ù° �ٿ� �Է����� �־��� �翡�� �ڶ�� ������ ���� ����Ѵ�.

< Ǯ�� >
	ū �簢������ ���� �簢���� ���� �Ǵ� ����
	�ٸ�, ���� �簢���� ��� ���� ���̳�?

	���ǿ� ���� ������ �ݽð� �������� ������ �־����� ������ �ݵ��
	ù ��° �߸��� ���� ���� �� ��° �߸��� ���� ���� index�� 1����, �� �پ� ���� ���̴�.

	���� �� ��° �߸��� ���� ���� ã�� �ٸ� �׿� ���� index+2�� indxe+3�� ���� ������ ���� �ȴ�.
*/

//#include <iostream>
//
//int main()
//{
//	std::pair<int, int> block[6];
//
//	int count;
//	std::cin >> count;
//
//	int high{}, width{};
//	int temp1, temp2;
//
//	for (int i = 0; i < 6; i++)
//	{
//		// 1. �������� ���� ���� + ���� ���̸� �Է� �޴´�.
//		std::cin >> block[i].first >> block[i].second;
//
//		// 2. ���� ������ ����( Horizontal )�̰� �� ���� ���̰� ��ٸ�
//		if ((block[i].first == 1 || block[i].first == 2) && width < block[i].second)
//		{
//			// 3. ���� ���̸� �����ϰ� ���� �������� �� ��°�� �׷��� ������ �ε����� �����Ѵ�.
//			width = block[i].second;
//			temp1 = i;
//		}
//		// 4. ���� ������ ����( Vertical )�̰� �� ���� ���̰� ��ٸ�
//		if ((block[i].first == 3 || block[i].first == 4) && high < block[i].second)
//		{
//			// 5. ���� ���̸� �����ϰ� ���� �������� �� ��°�� �׷��� ������ �ε����� �����Ѵ�.
//			high = block[i].second;
//			temp2 = i;
//		}
//	}
//
//	int index;
//
//	// 6. �������� ���� �� ���� ������ �׷��� �� == �������� ���� �� ��
//	//		=> ���� �簢���� ���� ���� �ε����� ã�� ���� �۾�
//	if (block[(temp1 + 1) % 6].second == block[temp2].second)
//	{
//		index = temp2;
//	}
//	else
//	{
//		index = temp1;
//	}
//
//	int mh{ block[(index + 2) % 6].second };
//	int mw{ block[(index + 3) % 6].second };
//
//	// 7. ū �簢���� ���� �簢���� ����.
//	int big{ high * width };
//	int smol{ mh * mw };
//
//	std::cout << (big - smol) * count << '\n';
//}

//#include <iostream>
//
//int main() 
//{
//	int count;
//	std::cin >> count;
//
//	int way[6], value[6];
//	for (int i = 0; i < 6; i++) 
//	{
//		// 1. �ϴ� �� ���� �Է� �޴´�.
//		std::cin >> way[i] >> value[i];
//	}
//
//	int temp, index;
//	int max{ -1 };
//	for (int i = 0; i < 6; i++) 
//	{
//		// 2. ���� ���� ū ������ ã�� ����.
//		temp = value[i] * value[(i + 1) % 6];
//		if (max < temp) 
//		{
//			max = temp;
//			// 3. ���� ū ��( ����� ���� )�� ���� �پ� �ִµ� �� �� ���� �׷��� ���� �ε����� �����Ѵ�.
//			index = i;
//		}
//	}
//
//	// 4. ���� �׷��� ū ���� �ε���, �� ����, �� ����, �� ������ �׷��� ���� ���� �簢���� ���� ���� �ȴ�.
//	int min = value[(index + 3) % 6] * value[(index + 4) % 6];
//	std::cout << (max - min) * count << '\n';
//}

/* --- < 3053 > --- */

/*
< ���� >
	19���� ���� ������ �츣�� ��������Ű�� ����Ŭ���� ������ �� �ý� �������� �����ߴ�.
	�ý� �����п��� �� �� T1(x1,y1), T2(x2,y2) ������ �Ÿ��� ������ ���� ���� �� �ִ�.

	D(T1,T2) = |x1-x2| + |y1-y2|

	�� �� ������ �Ÿ��� ������ ������ ���Ǵ� ��Ŭ���� �����п����� ���ǿ� ����.
	���� �ý� �����п��� ���� ���Ǵ� ��Ŭ���� �����п��� ���� ���ǿ� ����.

	��: ��� ���� � ������ �Ÿ��� ������ ������ ����
	������ R�� �־����� ��, ��Ŭ���� �����п��� ���� ���̿�,
	�ý� �����п��� ���� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ������ R�� �־�����. R�� 10,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
	ù° �ٿ��� ��Ŭ���� �����п��� �������� R�� ���� ���̸�,
	��° �ٿ��� �ý� �����п��� �������� R�� ���� ���̸� ����Ѵ�.
	������� ������ 0.0001���� ����Ѵ�.

< Ǯ�� >
	������ * ������ * 3.14
	������ * ������ * 2

	��Ŭ���� �����п��� �� ������ �Ÿ��� ��ǥ��� �� �ִܰŸ��� ���Ѵ�.
	������ ���� ���ÿ��� �ýð� �� �������� �ٸ� �������� �̵��Ѵٰ� �����غ���.
	�ýô� �ǹ��� �հ� ������ �� �����Ƿ� �ǹ��� ���� �¿�� ���� �̵��� ���̴�.
*/

//#include <iostream>
//
//int main()
//{
//	double R;
//	std::cin >> R;
//
//	std::cout.precision(6);
//	std::cout << R * R * 3.1415926535 << '\n';
//	std::cout << R * R * 2 << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int R;
//	std::cin >> R;
//
//	double U{ static_cast<double>(R) * R * 3.14159265359 };
//	double T{ static_cast<double>(R) * R * 2 };
//
//	std::cout.precision(6);
//	std::cout.setf(std::ios::fixed, std::ios::floatfield);
//	std::cout << U << '\n' << T << '\n';
//}