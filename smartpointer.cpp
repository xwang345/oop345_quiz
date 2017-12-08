void print(){};

int main(){
	short arr[] = { 12, 13, 14, 15 };
	char* p = (char*) arr;
	//char* pStr2 = new char [11];

	ofstream out("data.bin",ios::out | ios::binary);

	for (int i = 0; i < 11; ++i) 
		cout << (void*)(pStr + i) << *(pStr + i) << endl;

	return 0;
}