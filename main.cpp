#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char **argv) {
  int n, *a;
  n = argc - 1;
  a = new int[n];  
  
  for (int i = 0; i < n; i++) {
      a[i] = atoi(argv[i + 1]);
      cout << "a[" << i << "]=" << a[i] << endl;
  }

  int *p = a;
  int *pb = a + n - 1;
  int temp;
  for (int i = 0; i < n / 2; i++) {
      temp = *p;
      *p = *pb;
      *pb = temp;
      p++;
      pb--;
  }

    p = a;

    cout << "Reversed " << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=" << a[i] << endl;
    }

    delete[] a;
    return 0;
}