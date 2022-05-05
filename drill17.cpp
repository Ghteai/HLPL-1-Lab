#include "std_lib_facilities.h"

//4. 
ostream& print_array10(ostream& os, int* a)
{
    for (int i = 0; i < 10; ++i)
        os << a[i] << "  ";
    os << endl;
    return os;
}

//7. 
ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i)
        os << a[i] << "  ";
    os << endl;
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (auto e : v)
        os << e << "  ";
    os << endl;
    return os;
}

int main()
try {
    //1.
    int* array = new int[10];
    for (int i = 0; i < 10; ++i)
        array[i] = i;

    //2. 
    for (int i = 0; i < 10; ++i)
        cout << array[i] << "  ";
    cout << endl;

    //3. 
    delete[] array;

    //5. 
    int* array5 = new int[10];
    int x = 100;
    for (int i = 0; i < 10; ++i)
    {
        array5[i] = x;
        ++x;
    }
    print_array10(cout, array5);
    delete[] array5;

    //6. 
    int* array6 = new int[11];
    x = 100;
    for (int i = 0; i < 11; ++i)
    {
        array6[i] = x;
        ++x;
        cout << array6[i] << "  ";
    }
    cout << endl;
    delete[] array6;

    //8.

    int* array8 = new int[20];
    x = 100;
    for (int i = 0; i < 20; ++i)
    {
        array8[i] = x;
        ++x;
    }
    print_array(cout, array8, 20);
    delete[] array8;

    //10. 
    vector<int> v5(10);
    int y = 100;
    for (int i = 0; i < 10; ++i)
    {
        v5[i] = y;
        ++y;
    }
    print_vector(cout, v5);

    vector<int> v6(11);
    y = 100;
    for (int i = 0; i < 11; ++i)
    {
        v6[i] = y;
        ++y;
    }
    print_vector(cout, v6);

    vector<int> v8(20);
    y = 100;
    for (int i = 0; i < 20; ++i)
    {
        v8[i] = y;
        ++y;
    }
    print_vector(cout, v8);
    return 0;

}
catch (exception& e)
{
    cerr << "Exception! " << e.what() << endl;
    return 1;
}
catch (...)
{
    cerr << "Some exceptions! " << endl;
    return 2;
}
