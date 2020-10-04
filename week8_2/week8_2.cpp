#include<stdio.h>
int main()
{
	char count[999];
	scanf_s("%s", &count, 999);
	int last = 0;
	int check = 0;
	for (int i = 0; i <= last; i++)
	{
		if (last == 0) //เช็คค่าสุดท้ายตอนเริ่มต้นเมื่อตัวสุดท้ายยังไม่โดนเปลี่ยนค่า
		{
			for (int i = 0; i < 999; i++)
			{
				if (count[i] == '\0')
				{
					last = i - 1;
				}
			}
		}
		if (count[i] != count[last])
		{
			check++;
		}
		last--;
	}
	if (check == 0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}