#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

// int average(std::vector<int> v) {
// 	for(int i = 0; int.size(); i++) {
// 		if(int[i] == NULL) {
// 			throw error "This is error"
// 		}else if(int[i] == 0) {
// 			throw error "unsigned int"
// 		} else if(typeid(int[i] == typeid(long)){
// 			throw error "this is long type data"
// 		}
// 	}
// }

// int main(){
// 	average(1,2,30000,NULL);
// 	return 0;
// }

/////////////


double average (int a, int b) {
	return (double)(a+b)/2;
}

class AverageClass {
public:
	double operator() (int a, int b) {
		return (double)(a+b)/2;
	}
};

// AverageClass::functionAvg() {
// 	int a = 0;
// 	int b = 0;
// }

int main() {
	double(*functionAvg)(int, int) = average; // this is pointer to call average function
	auto lambdaAvg = [] (int a, int b) { return (double)(a+b)/2 };
	AverageClass functorAvg;

	std::cout << functionAvg(10, 11) << std::endl;
	std::cout << lambdaAvg(10, 11) << std::endl;
	std::cout << functorAvg(30, 11) << std::endl;

	std::function<double(int, int)> f1 = functionAvg;
	std::function<double(int, int)> f2 = lambdaAvg;
	std::function<double(int, int)> f3 = functorAvg;

	std::cout << f1(110, 111) << std::endl;
	std::cout << f2(210, 222) << std::endl;
	std::cout << f3(310, 333) << std::endl;

	int val = 10;
	std::vector<std::reference_wrapper<int> > v;
	v.push_back(val);

	std::cout << val << std::endl;
	std::cout << v[0] << std::endl;

	val = 20;

	std::cout << val << std::endl;
	std::cout << v[0] << std::endl;

	auto boundValue = std::bind(functionAvg, 3, 4);
	std::cout << boundValue() << std::endl;
	return 0;
}///////////////////////////////////////


int main() {
	double(*functionAvg)(int, int) = average; // this is pointer to call average function
	auto lambdaAvg = [] (int a, int b) { return (double)(a+b)/2 };
	AverageClass functorAvg;

	// std::cout << functionAvg(10, 11) << std::endl;
	// std::cout << lambdaAvg(10, 11) << std::endl;
	// std::cout << functorAvg(30, 11) << std::endl;

	int a[] = { 43, 76, 2, 9, 53 };
	std::cout << std::count_if(a + 1, a + 5, [](int i) { return i > 10.1 }) << std::endl;

	std::vector<std::string> str1 = { "Hello", "World", "from", "C++" };
	std::vector<std::string> str2(5);
	std::copy_if(str1.begin(), str1.end(), str2.begin(), [](std::string item) { return item.size() == 4; });


	for (auto item ) {

	}
	return 0;
}


//////////////////////////////////////////////////////////////////////////

int main() {
	double(*functionAvg)(int, int) = average; // this is pointer to call average function
	auto lambdaAvg = [] (int a, int b) { return (double)(a+b)/2 };
	AverageClass functorAvg;

	std::cout << functionAvg(int, int) << std::endl;
	std::cout << lambdaAvg(int, int) << std::endl;
	std::cout << functorAvg(int, int) << std::endl;

	std::vector<double> v = {432.1, 65.2, -1.1 };

	std::accumulate(v.begin(), v.end(), []() {});
	return 0;
}