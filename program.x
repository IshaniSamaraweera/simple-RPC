struct numbers{
	int num1;
	int num2;
};

program PROGRAM{
	version VERSION{
		int ADDITION(numbers) = 1;
		int SUBTRACTION(numbers) = 2;
		int MULTIPLICATION(numbers) = 3;
		int DIVISION(numbers) = 4;
		
	} = 1;
} = 0x23451111; 