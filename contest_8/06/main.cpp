std::ostream& operator<<(std::ostream& out, const Any& o) { 
switch (o.type) { 
case Any::Type::INT: 
out << *((int*)o.data); 
break; 
case Any::Type::DOUBLE: 
out << *((double*)o.data); 
break; 
case Any::Type::STRING: 
out << *((std::string*)o.data); 
break; 
case Any::Type::VECTOR_ANY_PTR: 
for (auto elem : *((std::vector<Any*>*)o.data)) { 
out << *elem << " "; 
} 
break; 
} 
return out; 
} 

Any::Any(int* data) : data(data), type(Type::INT) {} 
Any::Any(double* data) : data(data), type(Type::DOUBLE) {} 
Any::Any(std::string* data) : data(data), type(Type::STRING) {} 
Any::Any(std::vector<Any*>* data) : data(data), type(Type::VECTOR_ANY_PTR) {} 

Any::~Any() { 
switch (type) { 
case Type::INT: 
case Type::DOUBLE: 
case Type::STRING: 
delete data; 
break; 
case Type::VECTOR_ANY_PTR: 
for (auto elem : *((std::vector<Any*>*)data)) { 
delete elem; 
} 
delete (std::vector<Any*>*)data; 
break; 
} 
} 

Any::operator int() { 
if (type != Type::INT) { 
throw ""; 
} 
return *((int*)data); 
} 

Any::operator double() { 
if (type != Type::DOUBLE) { 
throw ""; 
} 
return *((double*)data); 
} 

Any::operator std::string() { 
if (type != Type::STRING) { 
throw ""; 
} 
return *((std::string*)data); 
} 

Any::operator std::vector<Any*>*() { 
if (type != Type::VECTOR_ANY_PTR) { 
throw ""; 
} 
return (std::vector<Any*>*)data; 
}