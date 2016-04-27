/*
*David Anderson, CS 202, Assignment 6
*Description: Implement and test two funstions added to a class that represents a linked list.  The functions will be tested by creating an empty linked list, inserting elements, and calling the isSortedList and sortList functions.
*Input: List elements.
*Output: List elements and 1/0 for true/false if list is sorted.
*/
#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
  
  //create object, inset emelemt, call functions to display, test if sorted, and sort.
  
  LinkedList<int> list1;
  list1.insert(1);
  list1.insert(2);
  list1.insert(3);
  list1.insert(5);
  list1.insert(15);
  cout << list1.isSortedList() << endl;
  list1.print(); cout << endl;
  list1.sortList();
  cout << list1.isSortedList() << endl;
  
  LinkedList<int> list2;
  list2.insert(140);
  list2.insert(89);
  list2.insert(-999);
  list2.insert(3);
  list2.insert(-19);
  list2.insert(900);
  cout << list2.isSortedList() << endl;
  list2.print(); cout << endl;
  list2.sortList();
  cout << list2.isSortedList() << endl;
  
  LinkedList<char> list3;
  list3.insert('A');
  list3.insert('a');
  list3.insert('b');
  list3.insert('B');
  list3.insert('x');
  list3.insert('Z');
  cout << list3.isSortedList() << endl;
  list3.print(); cout << endl;
  list3.sortList();
  cout << list3.isSortedList() << endl;
  
  LinkedList<char> list4;
  list4.insert('h');
  list4.insert('i');
  list4.insert('j');
  list4.insert('k');
  list4.insert('l');
  list4.insert('m');
  cout << list4.isSortedList() << endl;
  list4.print(); cout << endl;
  list4.sortList();
  cout << list4.isSortedList() << endl;
  return 0;
}
