#include <iostream>
#include "p2.h"

using namespace std;

int
main()
{
    int i;
    list_t listA;
    list_t listB;

    listA = list_make();
    listB = list_make();

    for (i = 5; i>0; i--) {
	listA = list_make(i, listA);
	listB = list_make(i+10, listB);
    }

    list_print(listA);
    cout << endl;
    list_print(listB);
    cout << endl;

    list_print(reverse(listA));
    cout << endl;
    list_print(filter_even(append(listA, listB)));
    cout << endl;
    list_print(rotate(filter_odd(append(listA,listB)),0));
    cout << endl;
    list_print(insert_list(listA,listB,4));
    cout << endl;
    list_print(chop(listB,2));
    cout << endl;
    cout << sum(listB);
    cout << endl;
    cout << product(listA);
    cout << endl;
    cout << fib_tail(0)<< fib_tail(1)<<fib(3)<<fib_tail(6)<<fib(8);
    cout << endl;
}
