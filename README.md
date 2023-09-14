# Easy C++

###### 狗头保命

###### 狗头保命

###### 狗头保命

## 1.Hello World

```c++
#include "cpython.hpp"
using namespace cpython;

int main() {
    print("Hello World !");
    print("Hello", "World", "!"); // NOTE: sep = ' ', end = '\n'
    return 0;
}
```

## 2.for

```c++
#include "cpython.hpp"
using namespace cpython;

int main() {
    // for i in range(10):
    for (auto i : range(10)) {
        print("i =", i);
    }
    // for i in range(2, 20, 2):
    for (auto i : range(2, 20, 2)) {
        print("i =", i);
    }
    // for i in range(len(arr))
    std::vector<int> myList = {1, 2, 3};
    for (auto i : range(len(myList)) {
        print("myList[i] =", myList[i]);
    }
    return 0;
}
```

## 3.print Containers

```c++
#include "cpython.hpp"
using namespace cpython;

int main() {
    // Set
    std::set<int> mySet = {1, 2, 3};
    print("mySet =", mySet); // mySet = {1, 2, 3}
    // Dict
    std::map<str, int> myDict = {{"a", 1}, {"b", 2}, {"c", 3}};
    print("myDict =", myDict); // myDict = {a: 1, b: 2, c: 3}
    // Pair
    std::pair<int, str> myPair = {666, "six six six"};
    print("myPair =", myPair); // myPair = <666, six six six>
    // Tuple
    std::tuple<int, double, str> myTuple = std::make_tuple(1, 3.14, "hello");
    print("myTuple =", myTuple); // myTuple = (1, 3.14, "hello")
    // ArrayLike:  c-array、array、vector、deque、list
    int myArray[][3] = {{1,2,3},{4,5,6}};
    print("myArray =", myArray); // myArray = [[1, 2, 3], [4, 5, 6]]
    // C String
    char myChar[] = "Hello World";
    print(myChar); // "Hello World"
    return 0;
}
```

## 4.transform

```c++
#include "cpython.hpp"
using namespace cpython;

int main() {
    // ascii
	auto ord('A'); // 65
    auto chr(65); // 'A'
    // dec -> base
    auto hex(66); // "0x42"
    auto oct(66); // "0o102"
    auto bin(66); // "0b1000010"
    // base -> dec
    auto int_("1000010", 2); // 66
    auto int_("102", 8); // 66
    auto int_("42", 16); // 66
    auto int_("0x42", 16); // 66
    return 0;
}
```







## Requirement：

C++ >= 17 (×)

python (√)