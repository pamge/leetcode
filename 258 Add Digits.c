int addDigits(int num) {
	return (num % 9 == 0 && num / 9 >= 1) ? 9 : num % 9;
}
