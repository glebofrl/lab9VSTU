#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");

	while (1)
	{


		long long int n;
		scanf("%lld", &n);

		int _t22 = t22(n);
		int _t23 = t23(n);
		int _t24 = t24(n);
		int _t25 = t25(n);
		int _t26 = t26(n);
		int _t27 = t27(n);
		int _t28 = t28(n);
		int _t29 = t29(n);
		int _t210 = t210(n);
		int _t211 = t211(n);
		int _t212 = t212(n);

		int temp;
		int count = 0;
		while (n > 0) {
			temp = n % 10;
			n /= 10;

			if (temp == 3)
				count++;
		}
		printf("Задание 1\n%d\n", count);
		printf("Задание 2\n%d\n", _t22);
		printf("Задание 3\n%d\n", _t23);
		printf("Задание 4\n%d\n", _t24);
		printf("Задание 5\n%d\n", _t25);
		printf("Задание 6\n%d\n", _t26);
		printf("Задание 7\n%d\n", _t27);
		printf("Задание 8\n%d\n", _t28);
		printf("Задание 9\n%d\n", _t29);
		printf("Задание 10\n%d\n", _t210);
		printf("Задание 11\n%d\n", _t211);
		printf("Задание 12\n%d\n", _t212);

		char a;
		printf("Нажмите кнопку \"n\" для выхода! ");
		if ((a = getchar()) == 'n') break;
	}

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