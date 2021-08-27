//
//  input_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/09.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//int main()
//{
//    ofstream os{"temp.txt"};
//
//    if(!os)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
//
//    double temperature;
//
//    for (int i =1; i <= 4; i++)
//    {
//        os << i << " ";
//        cout << "온도를 입력하시오." << endl;
//        cin >> temperature;
//        os << temperature << endl;
//
//    }
//    class TempData {
//    public:
//        int hour;
//        double temperature;
//    };
//
//    ifstream is{"temp.txt"};
//
//    if(!is) {
//        cerr << "파일 오픈에 실패하였습니다" << endl;
//        exit(1);
//    }
//
//    vector<TempData> temp;
//
//    int hour;
//    double temperature;
//
//    while (is >> hour >> temperature) {
//        temp.push_back(TempData{hour, temperature});
//
//    }
//    for(TempData t: temp) {
//        cout << t.hour << "시: 온도 " << t.temperature << endl;
//    }
//
//    return 0;
//}

//class BioData
//{
//public:
//    int idx;
//    float height;
//    float weight;
//
//    BioData(int i, float h, float w) : idx(i), height(h), weight(w) { }
//
//    void printData();
//};
//
//void BioData::printData()
//{
//    cout << idx << "번은 키가" << height << "cm이고, 체중은 " << weight << "kg입니다." << endl;
//}
//
//vector<BioData> db;
//int main() {
//    ifstream input_file ("data.txt");
//
//    if(!input_file)
//    {
//        std::cout << "Unable to open" << endl;
//        exit(1);
//    }
//
//    int idx;
//    float height;
//    float weight;
//
//    while(!input_file.eof())
//    {
//        input_file >> idx >> height >> weight;
//        db.push_back(BioData(idx, height, weight));
//    }
//
//    double mean_h = 0.0;
//    double mean_w = 0.0;
//
//    for(auto& e : db)
//    {
//        mean_h += e.height;
//        mean_w += e.weight;
//        e.printData();
//    }
//
//    cout << "평균 키는 " << mean_h / db.size() << endl;
//    cout << "평균 체중은 " << mean_w / db.size() << endl;
//    return 0;
//}


//int main() {
//    ifstream input_file("data.txt");
//    ofstream output_file("data_copy.txt");
//
//    if(input_file.fail() == true)
//    {
//        cout << "Unable to open data.txt" << endl;
//        exit(0);
//    }
//
//    if(output_file.fail() == true)
//    {
//        cout << "Unable to open data.txt" << endl;
//        exit(0);
//    }
//
//    char c;
//
//    while(!input_file.eof())
//    {
//        input_file.get(c);
//        output_file.put(c);
//        cout << c;
//    }
//}
