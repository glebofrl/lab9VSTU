#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");

	do
	{
		long long int n;
		scanf("%lld", &n);

		printf("Задание 1\n%d\n", t21(n));
		printf("Задание 2\n%d\n", t22(n));
		printf("Задание 3\n%d\n", t23(n));
		printf("Задание 4\n%d\n", t24(n));
		printf("Задание 5\n%d\n", t25(n));
		printf("Задание 6\n%d\n", t26(n));
		printf("Задание 7\n%d\n", t27(n));
		printf("Задание 8\n%d\n", t28(n));
		printf("Задание 9\n%d\n", t29(n));
		printf("Задание 10\n%d\n", t210(n));
		printf("Задание 11\n%d\n", t211(n));
		printf("Задание 12\n%d\n", t212(n));

		char a;
		printf("Нажмите кнопку \"n\" для выхода! ");
		if ((a = getchar()) == 'n') break;
	} while (1);

}

int t21(long long int n) {
	int temp;
	int count = 0;
	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp == 3)
			count++;
	}
	return count;
}

int t22(long long int n) {
	int temp;
	int count = 0;
	int ln = n % 10;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp == ln)
			count++;
	}
	return count;
}

int t23(long long int n) {
	int temp;
	int count = 0;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp % 2 == 0)
			count++;
	}
	return count;
}

int t24(long long int n) {
	int temp;
	int count = 0;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp > 5)
			count++;
	}
	return count;
}

int t25(long long int n) {
	int temp;
	int count = 0;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp % 2 != 0)
			count += temp;
	}
	return count;
}

int t26(long long int n) {
	int temp;
	int count = 0;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp >= 7)
			count+=temp;
	}
	return count;
}

int t27(long long int n) {
	int temp;
	int count = 1;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp != 0)
			count*=temp;
	}
	return count;
}

int t28(long long int n) {
	int temp;
	long long int varn = n;
	int res = 1;
	int counts = 0;
	int count = 0;

	while (n > 0) {
		count++;
		temp = n % 10;
		n /= 10;
		if (count == 2)
			res *= temp;
	}
	while (varn > 0) {
		counts++;
		temp = varn % 10;
		varn /= 10;
		if (count - 1 == counts)
			res *= temp;
	}
	return res;
}

int t29(long long int n) {
	int temp;
	int count = 0;
	n /= 10;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp % 2 == 0)
			count += temp;
	}
	return count;
}

int t210(long long int n) {
	int changr = 0;
	int temp = 0;
	int count = 0;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (temp == changr)
			count ++;
		changr = temp;
	}
	return count;
}

int t211(long long int n) {
	int temp;
	long long int varn = n;
	int res;
	int count = 0;
	int firstch = 0;
	int firstres;
	int secondch = 0;

	while (n > 0) {
		count++;
		temp = n % 10;
		n /= 10;
	}

	int step = pow(10, count/2);

	temp = varn / step;

	while (temp > 0)
	{
		firstres = temp % 10;
		temp /= 10;
		firstch += firstres;
	}

	temp = varn % step;

	while (temp > 0)
	{
		firstres = temp % 10;
		temp /= 10;
		secondch += firstres;
	}

	res = secondch == firstch;

	return res;
}

int t212(long long int n) {
	setlocale(LC_CTYPE, "RUS");
	int sumEven = 0;
	int sumOdd = 0;
	int temp = 0;
	int res;
	int changr = 1;

	while (n > 0) {
		temp = n % 10;
		n /= 10;

		if (changr == 1)
			sumOdd += temp;
		else sumEven += temp;
		changr *= -1;
	}
	res = sumEven * sumOdd;
	printf("Четные: %d\n", sumEven);
	printf("НеЧетные: %d\n", sumOdd);
	printf("res: %d\n", res);
	return res;

}