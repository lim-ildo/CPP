////1. mystrcat
//#include <iostream>
//#include <string>
//using namespace std;
//
//char* mystrcat(const char* str1, const char* str2);
//
////int length(const char* str) {
////    int len = 0;
////    for (int i = 0; str[i] != '\0'; i++) len++;
////    return len;
////}
//
//char* mystrcat(const char* str1, const char* str2)
//{
//    int l1 = 0;
//    for (int i = 0; str1[i] != '\0'; i++) l1++;
//
//    int l2 = 0;
//    for (int i = 0; str2[i] != '\0'; i++) l2++;
//
//    int l = l1 + l2;
//
//    char* str = new char[l]; // 동적할당 l크기만큼
//
//    for (int i = 0; i < l1; i++)
//        str[i] = str1[i];
//
//    for (int j = 0; j < l2; j++)
//        str[l1 + j] = str2[j];
//
//    str[l] = '\0';
//
//    return str;
//    delete str;
//    str = nullptr;
//
//    /*int l1 = length(str1);
//    int l2 = length(str2);
//    int l = l1 + l2;
//    char* strr = new char[l];
//
//    for (int i = 0; i < l1; i++)
//        strr[i] = str1[i];
//    for (int j = 0; j < l2; j++)
//        strr[l1 + j] = str2[j];
//
//    strr[l] = '\0';
//
//    return strr;
//    delete strr;
//    strr = 0;*/
//}
//
//int main()
//{
//    char* str = mystrcat("Hello!", "World!");
//    cout << str << endl;
//}


