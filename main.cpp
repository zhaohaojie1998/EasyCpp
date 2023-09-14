#include "cpython.hpp"
using namespace cpython;





int main() {
    print("\nNumber:");
    int num = 666;
    print(num);

    print("\nC Style Array:");
    int arr[][3] = {{1,2,3},{4,5,6}};
    print(arr);

    print("\nVector:");
    std::vector<int> myVec = { 1, 2, 3 };
    print(myVec);

    print("\nVector 2D:");
    std::vector<std::vector<int>> myVec2 = { myVec, myVec };
    print(myVec2);

    print("\nC++ List:");
    std::list<int> myLis = { 1, 2, 3 };
    print(myLis);

    print("\nDeque:");
    std::deque<int> myDeq = { 1, 2, 3 };
    print(myDeq);

    print("\nArray[Vector]:");
    std::array<std::vector<int>, 2> myArr1 = { { {1, 2}, {3, 4, 5} } };
    print(myArr1);

    print("\nArray 2D:");
    std::array<std::array<int, 3>, 2> myArr2{};
    myArr2[0] = { 1, 2, 3 };
    myArr2[1] = { 3, 2, 1 };
    print(myArr2);

    print("\nSet:");
    std::set<int> mySet = { 1, 2, 3 };
    print(mySet);

    print("\nMap:");
    std::map<int, std::string> myMap = { {1, "one"}, {2, "two"}, {3, "three"} };
    print(myMap);

    print("\nPair:");
    std::pair<int, std::string> myPair = {666, "six six six"};
    print(myPair);

    print("\nStr:");
    std::string myStr = "Hello World";
    print(myStr);

    print("\nChar List:");
    char myChar[] = "World Hello";
    print(myChar);

    print("\nTuple:");
    std::tuple<int, double, std::string> myTuple1 = std::make_tuple(1, 3.14, "hello");
    print(myTuple1);

    print("\nTuple[Tuple, Other]:");
    std::tuple<std::tuple<int, std::string>, double> myTuple2 = std::make_tuple(std::make_tuple(1, "hello"), 3.14);
    print(myTuple2);

    print("\nTuple[Tuple, Vector, Map]:");
    std::tuple<std::tuple<int, std::string>, std::vector<int>, std::map<int, std::string>> myTuple3 = std::make_tuple(std::make_tuple(1, "hello"), myVec, myMap);
    print(myTuple3);
    
    print("\nMulti Input:");
    print("Pair:", myPair, " Char:", myChar, " Tuple:", myTuple2);

    print("\nlen函数:");
    print("len(Vec) =", len(myVec2), ", len(Vec[0]) =", len(myVec2[0]));

    print("\nid函数:");
    print("id(arr) =", id(arr), ", id(arr[0]) =", id(arr[0]));

    print("\nbool_函数:");
/*    const char cstr[] = "";
    int* nullp = nullptr;
    std::vector<int> nullvec;
    std::cout << bool_(true) << " ";                
    std::cout << bool_(false) << " ";                 
    std::cout << bool_(0.0) << " ";                  
    std::cout << bool_(0.0001) << " ";               
    std::cout << bool_(cstr) << " ";                 
    std::cout << bool_(nullvec) << " ";   
    std::cout << bool_(myMap) << " ";                 
    std::cout << bool_(nullp) << std::endl;   */     


    print("\nrange迭代器:");
    int N = 10;
    for (auto i : range(N)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (auto i : range(5, 20, 2)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (auto i : range(N - 1, -1, -1)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}