#include <iostream>

// 該系統可以顯示各類型的圖表，如柱狀圖和圓餅圖等
class BarChart{
public:
    void display(){
        std::cout<<"display BarChart"<<std::endl;
    }
};
class PieChart{
public:
    void display(){
        std::cout<<"display PieChart"<<std::endl;
    }
};

class ChartDisplay{
public:
    void display(std::string type){
        if(type == "pie"){
            PieChart chart = PieChart();
            chart.display();
            }
        else if(type == "bar"){
            BarChart chart = BarChart();
            chart.display();
            }
        }
        
};


int main(){
    ChartDisplay chart = ChartDisplay(); // chart為物件 不是指標
    chart.display("pie");
    chart.display("bar");
    return 0;
}