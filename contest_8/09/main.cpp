class Label : public Leaf { 
std::string text; 
public: 
Label(const std::string& text) : text(text) {} 

Canvas render() override { 
Canvas c; 
c.draw(text); 
return c; 
} 
std::string click(int x, int y) override { 
return "Label(" + text + ")"; 
} 
}; 

class CheckBox : public Leaf { 
std::string text; 
bool state; 
public: 
CheckBox(const std::string& text, bool state) : text(text), state(state) {} 

Canvas render() override { 
Canvas c; 
std::string checkbox = std::string("[") + (state ? "x" : " ") + "] " + text; 
c.draw(checkbox); 
return c; 
} 

std::string click(int x, int y) override { 
if (x >= 0 && x <= 4 && y == 0) { 
state = !state; 
return "CheckBox(" + text + ") "; 
} 
return "Empty"; 
} 
}; 

class VLayout : public Composite { 
public: 
Canvas render() override { 
Canvas c; 
int totalHeight = 0; 
for (auto i : components) { 
Canvas t = i->render(); 
c.draw(t, 0, totalHeight); 
totalHeight += t.height(); 
if (i != components.back()) totalHeight++; 
} 
return c; 
} 

std::string click(int x, int y) override { 
int curY = 0; 

for (auto i : components) { 
Canvas t = i->render(); 
if (curY <= y && y < curY + t.height()) { 
return i->click(x, y - curY); 
} 
curY += t.height() + 1; 
} 
return "Empty"; 
} 
};