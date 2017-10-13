#include <stdio.h>
#define scanf scanf_s
int main(void){

	int W, H, C;
	int i;
	int sasaki;
	int j;
	int keishu;

	scanf("%d %d %d", &W, &H, &C);

	/*if (W % 2 == 0 && H % 2 == 0){
		if (W > H){

			printf("%d\n", W/H*C);
		}
		else if (W < H){

			printf("%d\n", H/W*C);
		}
		else if (W == H)
		{
			printf("1\n");
		}
		
	}*/
	//if{
		if (W > H){
			for (i = H; 0<i; i--){
				if (W%i == 0 && H%i == 0){
					sasaki=i;
					//printf("%d", sasaki);
					printf("%d\n",(W / sasaki)*(H / sasaki)*C);
					return 0;
				}
				/*else{
					printf("0hello");
					//return 0;
				}*/

			}
		}
		else if (W < H){
			for (j = W; 0<j; j--){
				if (W%j == 0 && H%j == 0){
					keishu = j;
					//printf("%d", keishu);
					printf("%d\n",(W / keishu)*(H / keishu)*C);
					return 0;
				}
				/*else{
					printf("0heloo");
					return 0;
				}*/
			}
		}
		else if (W == H){

			printf("%d\n",C);
		}
	//}
	return 0;
}