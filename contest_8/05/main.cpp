#include <algorithm> 

class IntSharedPointer { 
private: 
int* ptr; 
int* refCount; 

public: 
IntSharedPointer(int* p) : ptr(p), refCount(new int(1)) {} 

IntSharedPointer(const IntSharedPointer& other) : ptr(other.ptr), refCount(other.refCount) { 
++*refCount; 
} 

~IntSharedPointer() { 
if (--*refCount == 0) { 
delete ptr; 
delete refCount; 
} 
} 

IntSharedPointer& operator=(IntSharedPointer other) { 
std::swap(ptr, other.ptr); 
std::swap(refCount, other.refCount); 
return *this; 
} 

int& operator*() { 
return *ptr; 
} 

int* operator->() { 
return ptr; 
} 
};
