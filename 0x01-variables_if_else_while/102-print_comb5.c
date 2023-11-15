#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Alway (0)
 */

int main(void)
{
	int n1, n2, n3, n4, x, y/*, z*/;

	for (n1 = '0'; n1 <= '9'; n1++){
		x = 1;
		y = 1;
		/*z = 1;*/
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			x = 1;

			for (n3 = '0'; n3 <= '9'; n3++){ 

				for (n4 = '0'; n4 <= '9'; n4++){
					if (n1 == '0' && n2 == '0' && n3 == '0' && n4 == '0'){
						n4 = '1';
					}
					if (n1 >= '0' && n2 >= '0' && n3 == '0' && n4 == '0'/*&& z != 0*/){
						/*z = 0;*/
						if (n2 == '9' && n3 >= '0'){
							n3 = n1 + 1;
							goto sk_ip3;
						}
						n4 = n2 + 1;
					}
sk_ip3:

					if (n1 >= '1' && n1 <= '9' && n3 == '0'){
						n3 = n1;
						if (n1 >= '1' && n2 == '0' && n4 == '0' && y != 0){
							y = y - 1;
							n4 = '1';
						}
					}
					if (n1 >= '1' && n2 >= '0' && n2 <= '9' && n4 == '0' && x !=0){
						x = 0;
						if (n2 == '9' && n3 >= '1'){
							n3 = n1 + 1;
							goto sk_ip1;
						}
						if (n1 >= '2'){
							if (n2 >= '1' && n4 == '0'){
								goto sk_ip2;
							}
							goto sk_ip1;
						}
/*sk_ip3:*/
sk_ip2:
						n4 = n2 + 1;
sk_ip1:
						x = 0;
					}
				putchar(n1);
				putchar(n2);
				putchar(' ');

				putchar(n3);
				putchar(n4);
				
				if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'){
					goto end_of_file;
				}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
end_of_file:

	putchar('\n');

	return (0);
}
