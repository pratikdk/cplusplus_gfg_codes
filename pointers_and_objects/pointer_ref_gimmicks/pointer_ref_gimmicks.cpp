#include<iostream> 
using namespace std; 
  
// *** Question (Compiles)
// int &fun() 
// { 
//     static int x = 10; 
//     return x; 
// } 
// int main() 
// { 
//     fun() = 30; 
//     cout << fun(); 
//     return 0; 
// }



// **** Question ****
// int fun(int &x) 
// { 
//     return x; 
// } 
// int main() 
// { 
//     cout << fun(10); 
//     return 0; 
// }

// *** Solution ***
// int fun(int &x) 
// { 
// 	return x; 
// } 
// int main() 
// { 
//  int x = 10;
// 	cout << fun(x); 
// 	return 0; 
// }


// **** Question **** 
// #include<iostream> 
// using namespace std; 
  
// void swap(char * &str1, char * &str2) 
// { 
//   char *temp = str1; 
//   str1 = str2; 
//   str2 = temp; 
// } 
  
// int main() 
// { 
//   char *str1 = "GEEKS"; 
//   char *str2 = "FOR GEEKS"; 
//   swap(str1, str2); 
//   cout<<"str1 is "<<str1<<endl; 
//   cout<<"str2 is "<<str2<<endl; 
//   return 0; 
// } 
// **** Answer ****
// void swap(char *str1, char *str2) 
// { 
// char *temp = str1; 
// str1 = str2; 
// str2 = temp; 
// } 

// int main() 
// { 
// const char *str1 = "GEEKS"; 
// const char *str2 = "FOR GEEKS"; 
// swap(str1, str2); 
// cout<<"str1 is "<<str1<<endl; 
// cout<<"str2 is "<<str2<<endl; 
// return 0; 
// }



// **** Question ****
// int main() 
// { 
//    int x = 10; 
//    int *ptr = &x; 
//    int &*ptr1 = ptr; 
// } 
// **** Answer ****
// int main() 
// { 
//     int x = 10; 
//     int *ptr = &x; 
//     int **ptr1 = &ptr;
//     const int &ref = 10;
// }



// **** Invalid **** (Segmentation fault)
// int main() 
// { 
//     int *ptr = NULL; 
//     int &ref = *ptr; 
//     cout << ref; 
// }



// **** Question ****
// int &fun() 
// { 
// 	int x = 10; 
// 	return x; 
// } 
// int main() 
// { 
// 	//fun() = 30; 
// 	cout << fun(); 
// 	return 0; 
// }
// **** Answer ****
// int &fun() 
// { 
// 	static int x = 10; 
// 	return x; 
// } 
// int main() 
// { 
// 	//fun() = 30; 
// 	cout << fun(); 
// 	return 0; 
// } 