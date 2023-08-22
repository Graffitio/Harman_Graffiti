//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////
//int main()
//{
//	char fruit[20] = "strawberry";
//
//	printf("%s\n", fruit);
//	strcpy(fruit, "banana");
//	printf("%s\n", fruit);
//	return 0;
//}



//double centi_to_meter(int a);
//
//int main()
//{
//	double res;
//
//	res = centi_to_meter(187);
//	printf("%.2lf m \n", res);
//	return 0;
//}
//
//double centi_to_meter(int a)
//{
//	double temp;
//
//	temp = (double)a / 100;
//
//	return temp;
//}



//int sum(int a);
//
//int main()
//{
//	sum(10);
//	sum(100);
//
//	return 0;
//}
//
//int sum(int a)
//{
//	int temp = 0;
//
//	for (int i = 0; i <= a ; i++)
//	{
//		temp = temp + i;
//	}
//	printf("1부터 %d까지의 합 : %d\n", a, temp);
//
//	return temp;
//}

//
//int main()
//{
//	int A[3] = { 1,2,3 };
//	int B[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		B[i] = A[i % 3];
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char str1[80], str2[80];
//	char temp[80];
//
//	printf("두 문자열 입력 : ");
//	scantf(" %s %s", str1, str2);
//	printf("바꾸기 전 : $s, %s\n", str1, str2);
//	strcpy(temp, "banana");
//	strcpy(str2, "apple");
// 	strcpy(str1, temp); // blocking으로 진행되기 때문에, call by value로 하면, apple apple가 출력된다.
//
//
//	return 0;
//}


//int main()
//{
//	//char input[] = "DON'T Worry, Be Happy~";
//	char str[80];
//	int cnt = 0;
//
//	printf(" 문장 입력\n : ");
//	scanf("%s", str);
//	while (str[cnt])
//	{
//		if (str[cnt] >= 'A' && str[cnt] <= 'Z')
//		{
//			str[cnt] += 32;
//		}
//		cnt++;
//	}
//	printf("문장 출력 : %s \n", str);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int w; // 몸무게 변수 선언
//    double h_cm; // 키 변수 선언
//    double BMI;
//
//
//    printf("몸무게(kg)과 키(cm)를 입력 : ");
//    scanf("%d %lf", &w, &h_cm);
//
//    double h_m = (double)h_cm / 100;
//    BMI = (double)w / (h_m * h_m);
//
//    printf("%8.2lf\n", BMI);
//
//    if ((BMI >= 20.0) && (BMI < 25.0))
//        printf("표준입니다.");
//    else
//        printf("체중 관리가 필요합니다.");
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1, num2;
//	char cal;
//	double result;
//
//	printf("사칙연산 입력(정수) : ");
//	scanf("%d%c%d", &num1, &cal, &num2);
//
//	switch (cal)
//	{
//	case '+' :
//		result = num1 + num2;
//		break;
//	case '-' :
//		result = num1 - num2;
//		break;
//	case '*' :
//		result = num1 * num2;
//		break;
//	case '/':
//		result = (double)num1 / (double)num2;
//		break;
//	default :
//		printf("오류\n");
//		return;
//	}
//	printf("결과 : %d %c %d = %.2lf\n\n", num1, cal, num2, result);
//
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	char c = 'A';
//	float a = 2.0;
//	double d = 3.14;
//	void *p = &i;
//
//	//printf(" int i = %d, [%d]\n", i, &i);
//	//i = 2;
//	//printf(" int i = %d, [%d]\n", i, &i);
//	//printf(" int i = %d, [%x]\n", i, &i);
//	//printf(" int i = %d, [01x%8x]\n", i, &i);
//
//	//printf("c = %8c [0x%08x]\n", c, &c);
//	//printf("i = %8d [0x%08x]\n", i, &i);
//	//printf("a = %8.2f [0x%08x]\n", a, &a);
//	//printf("d = %8.4lf [0x%08x]\n", d, &d);
//
//	printf("c = %8c [0x%08x]\n", c, &c);
//	printf("i = %8d [0x%08x]\n", i, &i);
//	printf("a = %8.2f [0x%08x]\n", a, &a);
//	printf("d = %8.4lf [0x%08x]\n", d, &d);
//	printf("p = %8d [0x%08x]\n", *(int*)p, &p); // 포인터의 형 변환
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNTINGS
//#include <stdio.h>
//
//int main()
//{
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if ((i+j == 4) || (i == j))
//			{
//				printf("*");
//			}
//			else printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num, pt; // num을 2~(num-1)까지 나눴을 때, 아무 것도 나눠떨어지지 않는다면 그 것이 소수
//	int cnt = 0;
//
//	printf("2 이상의 정수 입력 : ");
//	scanf("%d", &num);
//
//	for (int i = 2; i < (num - 1); i++)
//	{
//		pt = 1; // pt가 1일 때만 출력되게끔 설정하기 위해 변수 선언
//		for (int j = 2; j < i; j++)
//		{
//			if ((i % j) == 0) // 나누어 떨어진다면? pt=0이 되고 반복문 탈출
//			{
//				pt = 0; 
//				break;
//			}
//			
//		}
//		if (pt == 1)
//		{
//			if (cnt < 5)
//			{
//				printf("%5d", i);
//				cnt++;
//			}
//			else
//			{
//				printf("\n");
//				cnt = 0;
//			}
//		}
//	}
//	return 0;
//}


//num = 5
//i : 5
//j : 1 2 3 4  














////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
//
//char buf[100];
//void MemoryDump(int start, int length); // 함수 프로토타입 선언
//
//int main(int argc, char *argv[])
//{
//	int start = 0x09000000; // 스타트 번지와
//	int length = 500; // length(크기)가 주어졌을 때,
//
//	int i = 1;
//	double d = 3.14;
//	void *p = malloc(100);
//
//	*(double *)p = d;
//	
//	MemoryDump((int)buf, length); // buf의 값은 array이기 때문에 int로 캐스팅
//
//	free(p);
//
//	return 0;
//}
//
//void MemoryDump(int start, int length) // 메모리 덤프가 뭐임?
//{
//	//void *vp = (void *)start; // void 포인터 변수 vp 선언
//	char *cp = buf;
//
//	int i = 0; // index 변수의 초기값은 0
//
//	// length만큼 뻉뻉이 돌려야 한다.
//	while (i<length) // 수행 조건 : i < length
//	{
//		//char *cp = (char *)vp; // void 타입이면 char에서 사용 불가하므로 char * 형으로 캐스팅(형변환)해준다.
//		//char c = *cp;
//		//char c = *((char *)vp); // 위의 두 줄을 간략화한 것
//		unsigned char c = *((char *)cp+i);
//		i++;
//		printf("0x%02x  ", c); // 2자리의 16진수로 출력, 2nibble(16진수 2개)
//	}
//}
//
//
//
//
//#include <stdio.h>
//
//int sum(int n);
//
//int main()
//{
//	sum(10);
//	sum(100);
//
//	return 0;
//}
//
//int sum(int n)
//{
//	int temp = 0;
//
//	for (int i = 0; i <= n; i++)
//	{
//		temp = temp + i;
//	}
//	printf("1부터 n까지의 합 : %d\n", temp);
//	//
//	return temp;
//}



//#include <stdio.h>
//#include <stdlib.h> 
//
//int main()
//{
//    void *ptr1 = malloc(4); // heap 영역의 동적 할당을 위한 malloc 함수
//    void *ptr2 = malloc(20);
//
//    printf("%#x \n", ptr1);
//    printf("%#x \n", ptr2);
//
//    free(ptr1); // heap영역에 할당되었던 메모리 공간 소멸을 위한 free()함수
//    free(ptr2);
//
//    return 0;
//}





//#include <stdio.h>
//#include <stdint.h>
//
//void memoryDump(const void *address, size_t length);
//
//int main()
//{
//    // 메모리 덤프를 수행할 메모리 주소와 길이
//    uint32_t startAddress = 0x09000000;
//    size_t length = 500;
//
//    // 메모리 덤프 수행
//    memoryDump((const void *)&startAddress, length);
//
//    return 0;
//    {
//
//void memoryDump(const void *address, size_t length);
//{
//     const uint8_t *ptr = (const uint8_t *)address;
//     for (size_t i = 0; i < length; i++)
//     {
//         printf("%03x", ptr[i]);
//         if ((i + 1) % 16 == 0)
//         {
//              printf("\n");
//         }
//     }
//}




//#include <stdio.h>
//#include <stdint.h>
//
//void memoryDump(const void *address, size_t length)
//{
//    const uint8_t *ptr = (const uint8_t *)address;
//    for (size_t i = 0; i < length; i++)
//    {
//        printf("0x%02X ", ptr[i]); // 바이트 값을 16진수로 출력
//
//        if ((i + 1) % 16 == 0)
//        {
//            printf("\n"); // 매 16바이트마다 줄바꿈
//        }
//    }
//}
//
//int main()
//{
//    // 메모리 덤프를 수행할 메모리 주소와 길이
//    uint32_t startAddress = 0x09000000;
//    size_t length = 500;
//
//    // 메모리 덤프 수행
//    memoryDump((const void *)&startAddress, length);
//
//    return 0;
//}







//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[80], str2[80];
//	char temp[80];
//
//	printf("두 문자열 입력 : ");
//	scanf("%s %s", &str1, &str2);
//	printf("바꾸기 전 : %s, %s\n", str1, str2);
//
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//
//	printf("바꾼 후 : %s, %s\n", str1, str2);
//
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//
//	char str[80];
//	int size, cnt = 0;
//
//	printf("문장 입력 : ");
//	//scanf("%s", &str); // 띄어쓰기나 줄바꿈이 있다면, 입력 종료
//	gets(str);
//
//	size = sizeof(str) / (sizeof(str[0]));
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = str[i] + ('a' - 'A'); // 아스키코드상, A보다 a가 더 뒤에 위치하므로 값이 크다.
//			cnt++;
//		}
//	}
//
//	printf(" 바뀐 문장 : %s\n", str);
//	printf(" 바뀐 문자 수 : %d", cnt);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int *pa;
//	pa = &a;
//
//	printf(" a = %d\n pa = %d\n *pa = %d\n", a, pa, *pa);
//
//	return 0;
//}










//
//// 미니 정렬 프로그램 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void swap(double *pa, double *pb);
//int line_up(double *maxp, double *midp, double *minp);
//
//int main()
//{
//	double max, mid, min;
//
//	printf("실수값 3개 입력 : ");
//	scanf("%lf %lf %lf", &max, &mid, &min); // 2.7, 1.5, 3.4
//	line_up(&max, &mid, &min);
//	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
//
//	return 0;
//}
//
//void swap(double *pa, double *pb)
//{
//	double temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//
//int line_up(double *maxp, double *midp, double *minp)
//{
//
//	if (*maxp < *midp) swap(maxp, midp);
//	if (*maxp < *minp) swap(maxp, minp);
//	if (*midp < *minp) swap(midp, minp);
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10; // ary[0] = 10
//	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10
//
//	printf("세 번쨰 배열 요소에 키보드 입력 :");
//	scanf("%d", ary + 2); // &ary[2]
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%5d", *(ary + i));
//	}
//
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ary[3];
//	int *pa = ary;
//	int i;
//
//	*pa = 10;
//
//	*(pa + 1) = 20;
//	pa[2] = pa[0] + pa[1];
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5d", pa[i]);
//	}
//
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 10, 20, 30, 40, 50 };
//	int *pa = ary;
//	int *pb = pa + 3; // *pt = 40
//
//	printf("pa : %u\n", pa); // 주소값
//	printf("pb : %u\n", pb); // 주소값 + 12(3 * 4bit)
//
//	pa++;
//	printf("pb - pa : %u\n", pb - pa); // pb - pa = (40 - 32) / sizeof(int) = 8/4 = 2
//
//	printf("앞에 있는 배열 요소의 값 출력 :"); 
//	if (pa < pb) printf("%d\n", *pa); // 
//	else printf("%d\n", *pb);
//
//	return 0;
//}


#/*define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_month(int *mp);

int main()
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	print_month(month);

	return 0;
}

void print_month(int *mp)
{
	for (int i = 0; i < 12; i++)
	{
		printf("%5d", mp[i]);
		if ((i+1)%5 == 0)
		{
			printf("\n");
		}

	}

}*/



//// 로또 번호 생성 프로그램 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void input_nums(int *lotto_nums); // 배열에 로또 번호를 입력하는 함수
//void print_nums(int *lotto_nums); // 배열에 저장된 값을 출력하는 함수
//
//int main()
//{
//	int lotto_nums[6];
//
//	input_nums(lotto_nums);
//	print_nums(lotto_nums);
//
//	return 0;
//}
//
//void input_nums(int *lotto_nums) // 1 ~ 45 중 6개의 서로 다른 수를 배열에 입력
//{
//	for (int i = 0; i < 6; i++)
//	{
//		lotto_nums[i] = rand() % 46;
//	}
//	
//}
//
//void print_nums(int *lotto_nums)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (lotto_nums[i] == lotto_nums[j])
//			{
//				printf("같은 번호가 있습니다!\n");
//				lotto_nums[j] = rand() % 46;
//			}
//		}
//		printf("번호 입력 : %d\n", lotto_nums[i]);
//	}
//	printf("로또 번호 : %d, %d, %d, %d, %d, %d",
//		lotto_nums[0], lotto_nums[1], lotto_nums[2], lotto_nums[3], lotto_nums[4], lotto_nums[5]);
//}





// 배열을 처리하는 함수 //

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void print_ary(int *ary);
//
//int main()
//{
//	int ary[5] = { 10, 20, 30, 40, 50 };
//
//	print_ary(ary);
//
//	return 0;
//}
//
//void print_ary(int *pa)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d \n", pa[i]);
//	}
//}


//// 크기가 다른 배열을 출력하는 함수 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//void print_ary(int *pa, int size);
//
//int main()
//{
//	int ary1[5] = {10, 20, 30, 40, 50 };
//	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
//
//	print_ary(ary1, 5);
//	printf("\n");
//	print_ary(ary2, 7);
//
//	return 0;
//}
//
//void print_ary(int *pa, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//}


//// 배열에 값을 입력하는 함수 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void input_ary(int *pa, int size);
//int find_max(int *pa, int size);
//void print_ary(int *pa, int size);
//
//int main()
//{
//	int ary[5];
//	int max;
//	int size = sizeof(ary) / sizeof(ary[0]);
//
//	input_ary(ary, size);
//	max = find_max(ary, size);
//	print_ary(ary, size);
//	printf("배열의 최댓값 : %.1lf\n", max);
//
//	return 0;
//}
//
//void input_ary(int *pa, int size)
//{
//	printf("%d개의 실수값 입력 : ", size);
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i); // &pa[i] 도 가능, 입력한 배열 요소의 주소를 전달
//	}
//}
//int find_max(int *pa, int size)
//{
//	double max;
//	max = pa[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (pa[i] > max)
//			max = pa[i];
//	}
//
//	return max;
//}
//
//void print_ary(int *pa, int size)
//{
//	printf("배열 : {");
//	for (int i= 0; i < size; i++)
//	{
//		printf("%d, ", pa[i]);
//	}
//	printf("}\n");
//}


//// 대문자를 소문자로 변경 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char small, cap = 'G';
//
//	if ((cap>='A')&&(cap<='Z'))
//	{
//		small = cap + ('a' - 'A');
//	}
//	printf("대문자 : %c %c", cap, '\n');
//	printf("소문자 : %c", small);
//	return 0;
//}


//// 공백 및 제어문자의 입출력 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char ch1, ch2;
//	
//	scanf("%c%c", &ch1, &ch2);
//	printf("[%c%c]", ch1, ch2);	
//	return 0;
//}


//// getchar, putchar 함수 사용 //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ch;
//
//	//ch = getchar();
//	//printf("입력한 문자 : ");
//	//putchar(ch);
//	//putchar('\n');
//
//	for (int i = 0; i < 10; i++)
//	{
//		ch = getchar();
//		putchar(ch);
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%c", &ch);
//		printf("%c", ch);
//	}
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		printf("%c", ch);
	}
	return 0;
}