//
//  vector_1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/19.
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void)
//{
//    vector<int> v1;
//
//    for(int i=0; i < 10; ++i) {
//        v1.push_back(i);
//    }
//
//    cout << "현재의 v1 = ";
//    for(auto& e : v1)
//        cout << e << " ";
//    cout << endl;
//    cout << "삭제 요소 = ";
//    // 벡터가 공백이 될 때까지 pop_back() 호출
//    while(v1.empty() != true) {
//        cout << v1.back() << " ";
//        v1.pop_back();
//    }
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    vector<int> v1 { 1, 2, 3, 4, 5};
//    vector<int> v2(v1); // v1을 복사하여 v2를 생성한다.
//
//    if(v1 == v2) {
//        cout << "2개의 벡터가 일치합니다. " << endl;
//    }
//
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//    vector<string> vec; // 벡터 생성
//
//    vec.push_back("MILK");
//    vec.push_back("BREAD");
//    vec.push_back("BUTTER");
//    for(auto e: vec)
//    {
//        cout << " " << e;
//    }
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Circle
//{
//public:
//    int x,y;    // 원의 중심
//    int radius; // 원의 반지름
//
//    // Circle 클래스의 생성자
//    Circle() : x {0}, y{0}, radius{0} { }
//    Circle(int x, int y, int r) : x{ x }, y{ y }, radius{ r } { }
//
//    void print() {
//        cout << "반지름: " << radius << " @(" << x << ", " << y << ")" << endl;
//    }
//};
//
//int main(void)
//{
//    vector<Circle> objArray;
//
//    for(int i=0; i < 10; i++) {
//        Circle obj{ rand()%300, rand()%300, rand()%300};
//        objArray.push_back(obj);
//    }
//
//    for(Circle c : objArray)
//        c.print();
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Person
//{
//private:
//    string name;
//    int age;
//public:
//    Person(string n, int a)
//    {
//        name = n;
//        age =a;
//    }
//    string get_name() {return name;}
//    int get_age() {return age;}
//    void print() {
//        cout << name << " " << age << endl;
//    }
//};
//
//bool compare(Person &p, Person &q);
//
//int main()
//{
//    vector<Person> list;
//
//    list.push_back(Person("kim", 30));
//    list.push_back(Person("Park", 22));
//    list.push_back(Person("Lee", 26));
//
//    sort(list.begin(), list.end(), compare);
//
//    for(auto& e : list) {
//        e.print();
//    }
//
//    return 0;
//}
//
//bool compare(Person &p, Person &q)
//{
//    return p.get_age() < q.get_age();
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector< vector <int> > vec; // 벡터의 벡터로 선언
//
//    for(int i=0; i < 3; i++) {
//        vector<int> row;    // 하나의 행을 나타내는 공백 벡터를 생성한다.
//        for(int j =0; i < 5; j++) {
//            row.push_back((i + 1) * (j+1)); // 원소를 공백 벡터에 추가한다.
//        }
//        vec.push_back(row); // 하나의 행을 벡터에 추가한다.
//    }
//}

// 학생들의 평균 성적을 계산
/* 1. 학생들의 성적을 저장할 배열 생성(학생 수는 유동적이므로 동적 배열 사용)
   2. 학생들의 성적을 입력받도록 함
   2-1. -1을 입력하면 성적 입력을 멈춤
   3. 입력이 종료될 때 성적 평균을 구함*/

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    vector<int> score;
//
//    int sum=0; // 성적 합계
//
//    while(true)
//    {
//        int user_score=0; // 사용자로부터 성적을 입력받는 변수
//        cout << "성적을 입력하시오. (종료는 -1) : ";
//        cin >> user_score;
//
//        if(user_score == -1)
//            break;
//
//        score.push_back(user_score);
//    }
//
//    for(auto& value : score)
//    {
//        sum += value;
//    }
//    double score_avg = sum / score.size();
//    cout << "성적 평균= " << score_avg << endl;
//
//}

// 영화에 대한 정보(영화 이름, 평점)을 저장했다가 출력하는 프로그램
/* 1. 영화 정보에 대한 클래스 설정
   2. 영화 클래스 - 데이터(멤버 변수): title, rating
                 메소드(기능): Movie(string, double), print_movie()
   3. movie 클래스를 자료형으로 각 movie를 입력받아 해당 자료에 맞게 저장(vector)
   4. movie를 각 vector 인덱스별로 출력*/

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Movie
//{
//    string title;
//    double rating;
//
//public:
//    Movie(string t="", double r=0) : title {t}, rating {r} {}
//    void print_movie();
//};
//
//void Movie::print_movie()
//{
//    cout << title << " : " << rating << endl;
//}
//
//int main()
//{
//    vector<Movie> movie;
//
//    while(true)
//    {
//        string movie_name; double score; // 사용자로부터 영화 이름 및 평점을 받는 변수
//        cout << movie_name;
//        cout << "영화 제목을 입력하시오.";
//        getline(cin, movie_name, '\n');
//        cout << "영화 평점을 입력하시오.";
//        cin >> score;
//
//        Movie obj {movie_name, score};  // Movie 클래스 형식에 맞춰 후에 vector로 삽입할 때 인수전달로 사용
//
//        movie.push_back(obj);
//        if(score == 0)
//            break;
//    }
//
//    for(Movie m: movie)
//        m.print_movie();
//
//}
