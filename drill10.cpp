#include "std_lib_facilities.h"

//1. 
class Point {
public:
    int x;
    int y;
};

ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

int main()
try {
    //2.
    cout << "Please input seven(x,y) pairs:" << endl;
    vector<Point> original_points;
    int i = 1;
    for (i = 1; i <= 7; i++)
    {
        char ch1, ch2, ch3;
        int xx, yy;
        cin >> ch1 >> xx >> ch2 >> yy >> ch3;
        original_points.push_back(Point{xx, yy});
    }

    //3.
    cout << "Print out the original points:" << endl;
    for (auto e : original_points)
        cout << e << " ";
    cout << endl;

    //4.
    string fname = "mydata.txt";
    ofstream opp{ fname };
    if (!opp) error("Cannot open file: ", fname);
    for (Point p : original_points)
        opp << p;

    //5.
    opp.close();
    vector<Point> processed_points;
    ifstream ipp{ fname };
    if (!ipp) error("Cannot open input file: ", fname);
    for (i = 1; i <= 7; i++)
    {
        int xx, yy;
        char ch1, ch2, ch3;
        ipp >> ch1 >> xx >> ch2 >> yy >> ch3;
        processed_points.push_back(Point{ xx,yy });
    }

    //6. 
    cout << "Print out the processed points:" << endl;
    for (auto e : processed_points)
        cout << e << " ";
    cout << endl;

    //7. 
    if (original_points.size() != processed_points.size())
        cout << "Something's wrong! " << endl;
}
catch (exception& e) {
    cerr << e.what() << endl;
    return 1;
}
catch (...) {
    cerr << "An error occured!" << endl;
    return 2;
}
