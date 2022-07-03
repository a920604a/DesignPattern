#include <iostream>

class AbstractSubject
{
public:
    virtual void display() = 0;
};
class Theme1 : public AbstractSubject
{
    void display()
    {
        std::cout << "主題一設置\n";
        // 主題一設置
    }
};
class Theme2 : public AbstractSubject
{
    void display()
    {
        std::cout << "主題二設置\n";
        // 主題二設置
    }
};

// windows的主題是桌面背景圖片、窗口顏色、聲音元素等。用戶可以根據自己的喜好更換自己的桌面主題
class Windows
{
private:
    AbstractSubject *subject;

public:
    Windows(AbstractSubject *subject) : subject(subject) {}
    void display()
    {
        this->subject->display();
    }
};
int main()
{
    Theme1 theme1;
    Windows window(&theme1);
    window.display();
    return 0;
}