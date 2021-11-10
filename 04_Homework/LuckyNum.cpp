class LuckyNum
{
private:
	int num;
public:
	void PrintAddress(void)
	{
		printf("Function address :%p\n", &LuckyNum::PrintAddress);
		printf("Data address :%p\n", &num);
	}
};

int main()
{
	LuckyNum r1;
	r1.PrintAddress();

	LuckyNum r2;
	r2.PrintAddress();
	return 0;
}
