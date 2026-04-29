#include <iostream>

using namespace std;

struct {
  string title;
  char author[50];
  union {
    float dollars;
    int yen;
  };
} book;

main(){
	
	getline(cin, book.title);
	return 0;
}
