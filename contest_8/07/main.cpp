class GreaterAdapter: public IComparator{ 
using func = void (*)(int a, int b, bool& verdict); 
func cmp; 
public: 
GreaterAdapter(func cmp): cmp(cmp){ 
} 

bool compare(int a, int b) const override { 
bool verdict; 
cmp(a, b, verdict); 
return verdict; 
} 
}; 

class KeyFuncLessAdapter: public IComparator{ 
using key_func = double (*)(int value); 
key_func key; 
public: 
KeyFuncLessAdapter(key_func key): key(key){ 
} 

bool compare(int a, int b) const override { 
return key(a) < key(b); 
} 
};