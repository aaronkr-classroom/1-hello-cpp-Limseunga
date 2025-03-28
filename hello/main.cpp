#include <iostream> // 헤더파일을 포함시키는 문장
void main() {
	/*
	cout은 출력을 담당하는 객체로써,
	스트림 삽입 연산자 (stream insertion operator)인
	<<를 이용해서 " "안에 있는 문자열을 출력한다.
	*/
	int age = 44;
	std::cout << "Hello, World!" << std::endl;
	std::cout << "I am " << age << " years old!" << std::endl;
}