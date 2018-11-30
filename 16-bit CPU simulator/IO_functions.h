
int l;

void gotoxy(int x,int y)
{
	COORD coord = {0,0};
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void print_mem(unsigned short int memory[])
{
    gotoxy(25,l+5);printf("\n");l++;
	for (int i = 0; i < 255; i+=2 )
	{
		gotoxy(25,l+5);printf("%X\t%X\n",memory[i], memory[i+1] );l++;
	}
}

void print_mem_range(int i, int j, unsigned short int memory[])
{
    gotoxy(25,l+5);printf("\n");l++;
	for (; i < j+4; i+=2 )
	{
		gotoxy(25,l+5);printf("%X\t%X\n",memory[i], memory[i+1] );l++;
	}
}

int BinToDec(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

long long DecToBin(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

void window()
{
    l = 0;
    gotoxy(15,1);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 16-bit CPU simulator \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(28,2);
    printf(" CCE Term 5, 2018-2019 ");
    gotoxy(5,3);
    printf("_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*");
    gotoxy(34,l+5);;printf("%s\n","op-codes" );l++;
	gotoxy(15,l+5);printf("\n");l++;
	gotoxy(15,l+5);printf("%s\t%s\t%s\t\n", "MOVE -> 0000"," ADD -> 0001","SUB -> 0010");l++;
	gotoxy(15,l+5);printf("%s\t%s\t%s\t\n", "BRA -> 0011"," CMP -> 0100","BEQ -> 0101");l++;
	gotoxy(15,l+5);printf("%s\t%s\t%s\t\n", "BNE -> 0110"," EXG -> 0111","--- -> 1000");l++;
	gotoxy(15,l+5);printf("%s\t%s\t%s\t\n", "--- -> 1001"," --- -> 1010","STOP -> 1111");l++;
	gotoxy(15,l+5);printf("\n");l++;
	gotoxy(32,l+5);printf("%s\n"," direction");l++;
	gotoxy(15,l+5);printf("\n");l++;
	gotoxy(18,l+5);printf("%s\t%s\n", "reg to mem -> X0"," mem to reg -> X1");l++;
    gotoxy(18,l+5);printf("\n");l++;
	gotoxy(30,l+5);printf("%s\n","addressing modes	");l++;
	gotoxy(15,l+5);printf("\n");l++;
	gotoxy(18,l+5);printf("%s\t%s\n", "absolute -> 00"," literal ->  01");l++;
	gotoxy(18,l+5);printf("%s\t%s\n", "indexed ->  10"," relative -> 11");l++;
	gotoxy(18,l+5);printf("\n");l++;

    gotoxy(5,l+5);printf("_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*");l++;

}

