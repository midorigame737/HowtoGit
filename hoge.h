void Stair(int n);//n段の*の階段を出力する関数
void Square(int n);//n段の*の正方形
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("*");
		}
		printf("\n");
	}
}