
#if 0
//  B8. 소수 인쇄하기
//  1부터 입력 받은 값 n(n > 1) 까지의 소수를 모두 인쇄하는 함수를 설계하라.
//  - 리턴은 없고 int를 받으면 그 사이에 있는 소수는 모두 인쇄하는 함수를 설계한다.
//  - 소수(prime number): 1과 자기 자신으로만 나누어지는 수
//  - 2부터 (자기-1)까지 값으로 계속 나누어가면서 나머지 0인 값이 나오면 소수가 아니다.

#include <stdio.h>

int Prime_num(int num)
{
    int i,j,k;

    for (i = 2; i <= num; i++)
    {
        k=0;
        for (j = 2; j < i; j++)
        {
            if((i%j)==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("%d ",i);
        }
    }
}

int main(void)
{
        int n;

    scanf("%d", &n);
    Prime_num(n);
}

#endif

#if 0

// B9. 두 수를 입력 받아서 그사이에 존재하는 소수를 인쇄하는 프로그램
// 양의 정수만 입력 값으로 사용

#include <stdio.h>

void Print_Prime(int min, int max)
{
    int i,j,k;

    for(i=min;i<=max;i++)
    {
        k=0;

        for(j=2;j<i;j++)
        {
            if((i%j)==0)
            {
                k=1;
                break;
            }
        }
        if (k==0)
        {
            printf("%d\n",i);
        }
    }

}

void main(void)
{
	int i, a, b;

	scanf(" %d", &a);
	scanf(" %d", &b);

	if ((a <= 0) || (b <= 0))
	{
		printf("Error!!\n");
	}

	else
	{
		if(a>b)
        {
            i=a;
            a=b;
            b=i;
        }
		
		Print_Prime(a, b);
	}
}

#endif

#if 0

// C0. 팩토리얼을 구하는 함수
// 입력 받은 양의 정수의 팩토리얼을 구하는 함수
// parameter, return 모두  int

#include <stdio.h>

unsigned long long int Factorial(int num)
{
    int i;
    unsigned long long int fac = 1;
    for(i=1;i<=num;i++)
    {
        fac *= i;
    }
    return fac;
}

void main(void)
{
	int value;
	scanf("%d", &value);
	printf("%llu\n", Factorial(value));
}

#endif

#if 0
// C1. 두 정수의 중간 값을 구하는 함수
// 정수 2개를 입력 받으면 두 수의 중간 값을 리턴하는 함수
// 입력값은 0과 음의 정수, 양의 정수 모두 가능
// 10과 20의 중간은 15 이나 1과 6 사이일 경우 3이나 4나 모두 중간 값이 될 수 있다
// 따라서 중간 값이 2개가 되는 값들은 입력되지 않는다
// 또한 두 수가 서로 같은 경우도 입력되지 않는다.
#include <stdio.h>
 
int Search_Middle(int num1, int num2)
{
    while (++num1 < --num2);
    return num1;
}
 
void main(void)
{
    int min = 0, max = 0, temp;
 
    scanf("%d %d", &min, &max);
 
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }
    printf("%d\n", Search_Middle(min, max));
}

#endif

#if 0
// C2. 반복문을 활용한 별만들기 - 사각별

#include <stdio.h>

void Make_Star(void)
{
    int i, star;
    for(i=0;i<3;i++)
    {
        for(star=0;star<5;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main(void)
{
    Make_Star();
}
#endif

#if 0
// C3. 반복문을 활용한 별만들기 - 역삼각별

#include <stdio.h>

void Make_Triangle_Star(void)
{
    int line, star;

    for (line = 0; line <= 5; line++)
    {
        for (star = 0; star < 5 - line; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main(void)
{
    Make_Triangle_Star();
}

#endif

#if 0
// C4. 마지막 정수 찾기
// 1개의 정수 n을 입력받아 1+2+3..+x의 합계가 n이상이 되면 마지막 더한 수 x를 구하여 인쇄
// ( 1+2+3… +x >= n 의 조건이며 n은 양의 정수임 )

#include <stdio.h>

int LastNumFind(int num)
{
    int i;
    int lastnum = 0;
    
    for(i=1;i<num;i++)
    {
        lastnum += i;
        if(lastnum>=num) break;
    }
    return i;
}

void main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d",LastNumFind(a));
}

#endif

#if 0
// C5. 3개의 주사위를 던졌을 때 나올 수 있는 모든 경우의 수를 출력

#include <stdio.h>

void main(void)
{
    int i,j,k;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            for (k=1;k<=6;k++)
            {
                printf("%d %d %d \n",i,j,k);
            }
            
        }
    }
}

#endif

#if 0
// C6. 3의 배수의 합
// 3부터 값을 증가시키며 3의 배수의 합을 구할 때 합이 1000을 넘지 않은 3의 배수를 구하는 프로그램
// (즉, 3+6+9+12+...+N < 1000 을 만족하는 가장 큰 N을 인쇄)

#include <stdio.h>

void main(void)
{
    int i;
    int num=0;
    for(i=3;i<1000;i+=3)
    {
        num+=i;
        if(num>1000) break;
    }
    printf("%d",i-3);
}

#endif

#if 0
// C7. 약수 출력
// 1개의 정수를 n을 입력 받아 2부터 n까지 각 수들의 약수를 모두 인쇄하시오. (1<n<1000)

#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);

    for (int j = 2; j <= i; j++)
    {
        for (int k = 1; k <=j; k++)
        {
            if (j % k == 0)
                printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}

#endif


#if 0
// C8. 정수 역순 인쇄
// 1개의 양의 정수 n을 입력 받아 n정수값을 역순으로 인쇄

#include <stdio.h>

void Reverse_num(int num)
{
    int i=0;
    while(num)
    {
        printf("%d", num%10);
        num/=10;
    }
}

void main(void)
{
    int a;
    scanf("%d",&a);
    Reverse_num(a);
}

#endif


#if 0
// C9. 두 수의 거리
// 두 정수를 입력 받아, 두 수의 차이를 절대값으로 인쇄하라.

#include <stdio.h>

int ABS (int x)
{
    return (x < 0) ? -x : x;
}
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", ABS(a-b));
    return 0;
}

#endif


#if 1
// D0. 4명의 성적을 입력 받아 1등
// 3과목씩 4명의 점수를 입력 받아 배열에 저장한 후 성적이 1등인 학생이 몇 번째 학생인지 해당 요소번호를 인쇄한다. 요소번호는 0번부터이다.
// 성적이 같은 경우는 낮은 번호를 출력한다.

#endif