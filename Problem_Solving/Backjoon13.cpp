/* ----- < 13단계 기하 1 > ----- */
//
//
//
//
//
/* --- < 1085 > --- */

/*
< 문제 >
	한수는 지금 (x, y)에 있다.
	직사각형은 각 변이 좌표축에 평행하고,
	왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다.
	직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 x, y, w, h가 주어진다.

< 출력 >
	첫째 줄에 문제의 정답을 출력한다.

< 제한 >
	1 ≤ w, h ≤ 1,000
	1 ≤ x ≤ w-1
	1 ≤ y ≤ h-1
	x, y, w, h는 정수
*/

//#include <iostream>
//#include <algorithm>
//
//int main()
//{
//	int x, y, w, h;
//	std::cin >> x >> y >> w >> h;
//
//	// 1. 더 짧은 거리를 찾아서 저장
//	int distX = std::min(x, w - x);
//	int distY = std::min(y, h - y);
//	int dist = std::min(distX, distY);
//
//	std::cout << dist << '\n';
//}

/* --- < 3009 > --- */

/*
< 문제 >
	세 점이 주어졌을 때,
	축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

< 입력 >
	세 점의 좌표가 한 줄에 하나씩 주어진다.
	좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

< 출력 >
	직사각형의 네 번째 점의 좌표를 출력한다.

< ^ 연산자 >
	두 항의 같은 자리의 비트가 서로 다를 경우 1을 반환( 비트 XOR )
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
//	// 직사각형의 대각선은 항상 서로를 교차한다. 
//	// 즉, 첫 번째 점과 두 번째 점을 이용하여 대각선을 찾고, 이 대각선의 끝점에 세 번째 점이 위치하게 된다. 
//	// 그렇게 되면 네 번째 점의 좌표를 찾을 수 있다.
//	// 입력으로 주어진 세 점의 좌표를 aX, bY, cX, dY, eX, fY에 저장한 후, 
//	// XOR(^) 연산을 사용하여 네 번째 점의 좌표를 계산한다.
//	// aX ^ cX ^ eX : x 좌표의 값 중에서 한 번만 나타나는 값을 찾는다. 대각선의 양 끝 중에서 x 좌표 값이 한 번만 나타나게 된다.
//	// bY ^ dY ^ fY : y 좌표의 값 중에서 한 번만 나타나는 값을 찾는다. 대각선의 양 끝 중에서 y 좌표 값이 한 번만 나타나게 된다.
//	std::cout << (aX ^ cX ^ eX) << ' ' << (bY ^ dY ^ fY) << '\n';
//}

//#include <iostream>
//
//int main() 
//{
//	int x = 0, y = 0;
//
//	// 각 점의 x좌표와 y좌표를 입력 받고, XOR 연산을 사용하여 네 점의 x좌표와 y좌표를 비교한다. 
//	// 이렇게 하면 중복되지 않는 x좌표와 y좌표가 각각 x와 y 변수에 남게 된다. 
//	// 그래서 마지막에 출력할 때 이 x와 y 값을 사용하여 직사각형의 네 번째 점의 좌표를 구한다.
//	// 여기서 XOR (^) 연산을 사용하는 이유는 XOR 연산은 두 번 등장하는 값을 취소시켜서 하나만 남기는데, 
//	// 이 문제에서는 한 번 등장하는 좌표가 직사각형의 네 번째 점의 좌표이기 때문이다.
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
< 문제 >
	과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다.
	( w = 4, h = 3, v = 5 )
	주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

< 입력 >
	입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다.
	각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.

< 출력 >
	각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.

< 풀이 >
	직각 삼각형 = 작은 두 변들의 제곱은 가장 긴 변의 제곱과 같다.
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
//		// 1. 입력 받은 값을 정렬 하여 가잔 큰 변의 길이를 찾는다.
//		int sides[] = { num1,num2,num3 };
//		std::sort(sides, sides.size());
//		num1 = sides[0];
//		num2 = sides[1];
//		num3 = sides[2];
//		// 2. 공식에 따라 맞는지 아닌지 확인
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