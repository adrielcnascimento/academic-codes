#include <iostream>

using namespace std;

struct book{
	string title;
	string author;
  union {
    float dollars;
    int yen;
  }price;
};

main(){
	
	book a;
	
	getline(cin, (a.title));
	
	cout << a.title;
	
	return 0;
}
