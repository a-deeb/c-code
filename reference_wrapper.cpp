 // Functional - reference wrapper
 // reference_wrapper.cpp

 #include <iostream>
 #include <functional>

 int main() {
     long v1 = 10L, v2 = 20L, v3 = 30L;

     std::reference_wrapper<long> r1 = v1;
     std::reference_wrapper<long> r2 = v2;
     std::reference_wrapper<long> r3 = v3;

     std::cout << "r1 = " << r1 << std::endl; 
     std::cout << "r2 = " << r2 << std::endl;
     std::cout << "r3 = " << r3 << std::endl;

     v1++, v2++, v3++;
     std::cout << "r1 = " << r1 << std::endl; 
     std::cout << "r2 = " << r2 << std::endl;
     std::cout << "r3 = " << r3 << std::endl;

     r1++, r2++, r3++;
     std::cout << "r1 = " << r1 << std::endl; 
     std::cout << "r2 = " << r2 << std::endl;
     std::cout << "r3 = " << r3 << std::endl;
 }
