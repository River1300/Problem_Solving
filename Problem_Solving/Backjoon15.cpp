/* ----- < 15단계 백트래킹 > ----- */
//
//
//
//
//
/* --- < 15649 > --- */

/*
< 문제 >
	자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는
	프로그램을 작성하시오.

	#. 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

< 입력 >
	첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

< 출력 >
	한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
	중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

	수열은 사전 순으로 증가하는 순서로 출력해야 한다.

< 깊이 우선 탐색( DFS, Depth - First Search ) >
	< Description > : 루트 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방법
		#1. 미로를 탐색할 때 한 방향으로 갈 수 있을 때까지 계속 가다가 더 이산 갈 수 없게 되면 가장 가까운 갈림길로 돌아와서 이곳으로 부터 다른 방향으로 다시 탐색
		#2. 즉, 넓게 탐색하기 전에 깊게 탐색하는 것
		#3. 사용하는 경우 : 모든 노드를 방문하고자 하는 경우에 사용
		#4. 깊이 우선 탐색이 너비 우선 탐색보다 좀더 간단
		#5. 단순 검색 속도 자체는 너비 우선 탐색에 비해 느림
	< 특징 >
		#1. 자기 자신을 호출하는 순환 알고리즘의 형태를 가지고 있다.
		#2. 전위 순회를 호맣나 다른 형태의 트리 순회는 모두 DFS의 한 종류이다.
		#3. 그래프 탐색의 경우 어떤 노드를 방문 했었는지 여부를 반드시 검사해야 한다.

< 풀이 >
	< 목표 > : 1부터 N까지의 자연수 중에서 중복 없이 M개의 수열을 "모두" 출력
		1) N과 M을 입력 받는다.
		2) M은 N보다 크면 않된다.
		3) N은 8보다 크면 않된다.
		4) 수열을 저장할 배열을 만든다.
		5) 백트래킹을 위한 방문 확인 배열을 만든다.
		6) for문으로 1부터 N까지 반복한다.
		7) 방문한 적 없는 수는 수열로 저장시키고 더 깊은 노드로 이동한다.
		8) 최종 목적지에서 저장된 수열을 출력한다.
		9) for문으로 돌아와서 다음 인덱스 수로 다른 수열을 저장하며 반복한다.
*/

//#include <iostream>
//
//int N, M;
//int arr[9];
//bool visited[9];
//
//void DFS(int count)	// 루트 노드 or 임의의 노드
//{
//	if (count == M)	// 루트 노드가 목표 노드에 도착할 경우
//	{	// arr[i]에 저장된 값을 M개 출력
//		for (int i = 0; i < M; i++) { std::cout << arr[i] << " "; }
//		std::cout << '\n';
//	}
//	else	// (count < M)일 경우 수열을 채운다.
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			if (!visited[i])	// [i] 노드에 방문한 적이 없을 경우
//			{
//				visited[i] = true;	// 방문 표시로 바꾸고
//				arr[count] = i;		// i를 수열에 저장하고
//				DFS(count + 1);		// 다음 노드로 이동
//				visited[i] = false;	// 돌아와서 방문 하지 않음으로 다시 바꿈
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	DFS(0);
//}