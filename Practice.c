
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

#if 1
// C1. 두 정수의 중간 값을 구하는 함수
// 정수 2개를 입력 받으면 두 수의 중간 값을 리턴하는 함수
// 입력값은 0과 음의 정수, 양의 정수 모두 가능
// 10과 20의 중간은 15 이나 1과 6 사이일 경우 3이나 4나 모두 중간 값이 될 수 있다
// 따라서 중간 값이 2개가 되는 값들은 입력되지 않는다
// 또한 두 수가 서로 같은 경우도 입력되지 않는다.

#include <stdio.h>

int Midle_num(int num1, int num2)
{
    int i;
    i = num1 + num2;
    if(i%2) return scanf("%d %d",&num1, &num2);
    else if(num1==num2) return scanf("%d %d",&num1, &num2);
    return i/2;
}

void main(void)
{
    int a ,b;
    scanf("%d %d",&a,&b);
    printf("%d",Midle_num(a,b));
}

#endif