#include<iostream>
using namespace std;
class Cuboid {         
private:
    double length;       
    double width;       
    double height;       
public:
    void inputData() {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }
    double calculateVolume() {
        return length * width * height;
    }
    void outputVolume(int index) {
        cout << "第" << index << "个长方柱的体积：" << calculateVolume() << endl;
    }
};
int main()
{
    Cuboid cubs[3];      
    for (int i = 0; i < 3; i++) {
        cout << "\n输入第" << i + 1 << "个长方柱数据：" << endl;
        cubs[i].inputData();
    }
    cout << "\n===== 长方柱体积结果 =====" << endl;
    for (int i = 0; i < 3; i++) {
        cubs[i].outputVolume(i + 1);
    }
    return 0;
}