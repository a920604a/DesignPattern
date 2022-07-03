#include <iostream>

// 該系統可以顯示各類型的圖表，如柱狀圖和圓餅圖等
class AbstractChart
{
    // 抽象類
public:
    //抽象類，子類實現
    virtual void display() = 0;
};

class PieChart : public AbstractChart
{
public:
    void display()
    {
        std::cout << "display PieChart" << std::endl;
    }
};
class BarChart : public AbstractChart
{
public:
    void display()
    {
        std::cout << "display BarChart" << std::endl;
    }
};
class ChartDisplay
{
    // 接口類、客戶端
private:
    AbstractChart *chart;

public:
    void setChart(AbstractChart *chart) // 避免 object slice
    {
        this->chart = chart;
    }

    virtual void display()
    {
        this->chart->display();
    }
};
int main()
{
    ChartDisplay chart = ChartDisplay();
    PieChart pie;
    chart.setChart(&pie);
    chart.display();
    // display PieChart
    BarChart bar;
    chart.setChart(&bar);
    chart.display();
    // display BarChart
    return 0;
}
