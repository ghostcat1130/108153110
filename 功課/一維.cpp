#include <iostream>

using namespace std;

int a[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

int get(int i, int j){
    i--;
    j--;
    return (a+(i*3)+j);
}

void set(int i, int j, int o){
    i--;
    j--;
    *r = o;
    int r = &(a+(i3)+j);
}

void dump(){
        cout << "已知二維陣列 轉 一維陣列";
        for(int i=0; i<sizeof(a)/sizeof(int); i++){
            cout << (a+i) << " ";
            cout << *(a+i) << " ";
        }
        cout << endl;
    }

int main(){
    dump();
    cout << "get(3, 2) 第3列 第2行 = " << get(3, 2) << endl;
    set(2, 2, 100);
    cout << "set(2, 2, 100) 變更第3列 第2行 = " << get(3, 2) << endl;
}
