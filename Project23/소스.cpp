#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main() {
	float a, b, c;
	float d, e, f;

	printf("섭씨온도를 소수로 3개 입력하시오: \n");
	scanf_s("%f %f %f", &a, &b, &c);
	d = (9.0 / 5.0) * a + 32.0;
	e = (9.0 / 5.0) * b + 32.0;
	f = (9.0 / 5.0) * c + 32.0;
	printf("화씨온도는: %.4f\n", d);
	printf("화씨온도는: %.4f\n", e);
	printf("화씨온도는: %.4f\n", f);
}



