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
//	printf("1���� %d������ �� : %d\n", a, temp);
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
//	printf("�� ���ڿ� �Է� : ");
//	scantf(" %s %s", str1, str2);
//	printf("�ٲٱ� �� : $s, %s\n", str1, str2);
//	strcpy(temp, "banana");
//	strcpy(str2, "apple");
// 	strcpy(str1, temp); // blocking���� ����Ǳ� ������, call by value�� �ϸ�, apple apple�� ��µȴ�.
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
//	printf(" ���� �Է�\n : ");
//	scanf("%s", str);
//	while (str[cnt])
//	{
//		if (str[cnt] >= 'A' && str[cnt] <= 'Z')
//		{
//			str[cnt] += 32;
//		}
//		cnt++;
//	}
//	printf("���� ��� : %s \n", str);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int w; // ������ ���� ����
//    double h_cm; // Ű ���� ����
//    double BMI;
//
//
//    printf("������(kg)�� Ű(cm)�� �Է� : ");
//    scanf("%d %lf", &w, &h_cm);
//
//    double h_m = (double)h_cm / 100;
//    BMI = (double)w / (h_m * h_m);
//
//    printf("%8.2lf\n", BMI);
//
//    if ((BMI >= 20.0) && (BMI < 25.0))
//        printf("ǥ���Դϴ�.");
//    else
//        printf("ü�� ������ �ʿ��մϴ�.");
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
//	printf("��Ģ���� �Է�(����) : ");
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
//		printf("����\n");
//		return;
//	}
//	printf("��� : %d %c %d = %.2lf\n\n", num1, cal, num2, result);
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
//	printf("p = %8d [0x%08x]\n", *(int*)p, &p); // �������� �� ��ȯ
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
//	int num, pt; // num�� 2~(num-1)���� ������ ��, �ƹ� �͵� ������������ �ʴ´ٸ� �� ���� �Ҽ�
//	int cnt = 0;
//
//	printf("2 �̻��� ���� �Է� : ");
//	scanf("%d", &num);
//
//	for (int i = 2; i < (num - 1); i++)
//	{
//		pt = 1; // pt�� 1�� ���� ��µǰԲ� �����ϱ� ���� ���� ����
//		for (int j = 2; j < i; j++)
//		{
//			if ((i % j) == 0) // ������ �������ٸ�? pt=0�� �ǰ� �ݺ��� Ż��
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
//void MemoryDump(int start, int length); // �Լ� ������Ÿ�� ����
//
//int main(int argc, char *argv[])
//{
//	int start = 0x09000000; // ��ŸƮ ������
//	int length = 500; // length(ũ��)�� �־����� ��,
//
//	int i = 1;
//	double d = 3.14;
//	void *p = malloc(100);
//
//	*(double *)p = d;
//	
//	MemoryDump((int)buf, length); // buf�� ���� array�̱� ������ int�� ĳ����
//
//	free(p);
//
//	return 0;
//}
//
//void MemoryDump(int start, int length) // �޸� ������ ����?
//{
//	//void *vp = (void *)start; // void ������ ���� vp ����
//	char *cp = buf;
//
//	int i = 0; // index ������ �ʱⰪ�� 0
//
//	// length��ŭ �R�R�� ������ �Ѵ�.
//	while (i<length) // ���� ���� : i < length
//	{
//		//char *cp = (char *)vp; // void Ÿ���̸� char���� ��� �Ұ��ϹǷ� char * ������ ĳ����(����ȯ)���ش�.
//		//char c = *cp;
//		//char c = *((char *)vp); // ���� �� ���� ����ȭ�� ��
//		unsigned char c = *((char *)cp+i);
//		i++;
//		printf("0x%02x  ", c); // 2�ڸ��� 16������ ���, 2nibble(16���� 2��)
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
//	printf("1���� n������ �� : %d\n", temp);
//	//
//	return temp;
//}



//#include <stdio.h>
//#include <stdlib.h> 
//
//int main()
//{
//    void *ptr1 = malloc(4); // heap ������ ���� �Ҵ��� ���� malloc �Լ�
//    void *ptr2 = malloc(20);
//
//    printf("%#x \n", ptr1);
//    printf("%#x \n", ptr2);
//
//    free(ptr1); // heap������ �Ҵ�Ǿ��� �޸� ���� �Ҹ��� ���� free()�Լ�
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
//    // �޸� ������ ������ �޸� �ּҿ� ����
//    uint32_t startAddress = 0x09000000;
//    size_t length = 500;
//
//    // �޸� ���� ����
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
//        printf("0x%02X ", ptr[i]); // ����Ʈ ���� 16������ ���
//
//        if ((i + 1) % 16 == 0)
//        {
//            printf("\n"); // �� 16����Ʈ���� �ٹٲ�
//        }
//    }
//}
//
//int main()
//{
//    // �޸� ������ ������ �޸� �ּҿ� ����
//    uint32_t startAddress = 0x09000000;
//    size_t length = 500;
//
//    // �޸� ���� ����
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
//	printf("�� ���ڿ� �Է� : ");
//	scanf("%s %s", &str1, &str2);
//	printf("�ٲٱ� �� : %s, %s\n", str1, str2);
//
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//
//	printf("�ٲ� �� : %s, %s\n", str1, str2);
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
//	printf("���� �Է� : ");
//	//scanf("%s", &str); // ���⳪ �ٹٲ��� �ִٸ�, �Է� ����
//	gets(str);
//
//	size = sizeof(str) / (sizeof(str[0]));
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = str[i] + ('a' - 'A'); // �ƽ�Ű�ڵ��, A���� a�� �� �ڿ� ��ġ�ϹǷ� ���� ũ��.
//			cnt++;
//		}
//	}
//
//	printf(" �ٲ� ���� : %s\n", str);
//	printf(" �ٲ� ���� �� : %d", cnt);
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
//// �̴� ���� ���α׷� //
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
//	printf("�Ǽ��� 3�� �Է� : ");
//	scanf("%lf %lf %lf", &max, &mid, &min); // 2.7, 1.5, 3.4
//	line_up(&max, &mid, &min);
//	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
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
//	printf("�� ���� �迭 ��ҿ� Ű���� �Է� :");
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
//	printf("pa : %u\n", pa); // �ּҰ�
//	printf("pb : %u\n", pb); // �ּҰ� + 12(3 * 4bit)
//
//	pa++;
//	printf("pb - pa : %u\n", pb - pa); // pb - pa = (40 - 32) / sizeof(int) = 8/4 = 2
//
//	printf("�տ� �ִ� �迭 ����� �� ��� :"); 
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



//// �ζ� ��ȣ ���� ���α׷� //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void input_nums(int *lotto_nums); // �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
//void print_nums(int *lotto_nums); // �迭�� ����� ���� ����ϴ� �Լ�
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
//void input_nums(int *lotto_nums) // 1 ~ 45 �� 6���� ���� �ٸ� ���� �迭�� �Է�
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
//				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
//				lotto_nums[j] = rand() % 46;
//			}
//		}
//		printf("��ȣ �Է� : %d\n", lotto_nums[i]);
//	}
//	printf("�ζ� ��ȣ : %d, %d, %d, %d, %d, %d",
//		lotto_nums[0], lotto_nums[1], lotto_nums[2], lotto_nums[3], lotto_nums[4], lotto_nums[5]);
//}





// �迭�� ó���ϴ� �Լ� //

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


//// ũ�Ⱑ �ٸ� �迭�� ����ϴ� �Լ� //
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


//// �迭�� ���� �Է��ϴ� �Լ� //
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
//	printf("�迭�� �ִ� : %.1lf\n", max);
//
//	return 0;
//}
//
//void input_ary(int *pa, int size)
//{
//	printf("%d���� �Ǽ��� �Է� : ", size);
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i); // &pa[i] �� ����, �Է��� �迭 ����� �ּҸ� ����
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
//	printf("�迭 : {");
//	for (int i= 0; i < size; i++)
//	{
//		printf("%d, ", pa[i]);
//	}
//	printf("}\n");
//}


//// �빮�ڸ� �ҹ��ڷ� ���� //
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
//	printf("�빮�� : %c %c", cap, '\n');
//	printf("�ҹ��� : %c", small);
//	return 0;
//}


//// ���� �� ������� ����� //
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


//// getchar, putchar �Լ� ��� //
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ch;
//
//	//ch = getchar();
//	//printf("�Է��� ���� : ");
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