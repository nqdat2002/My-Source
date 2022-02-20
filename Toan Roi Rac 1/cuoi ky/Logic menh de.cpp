#include <bits/stdc++.h>
using namespace std;
char phu_dinh(char a){
    return(a == 'T' ? 'F' : 'T');
}

// a, b cung co gia tri True thi menh de True
// ^
char hoi(char a, char b){
    if(a == 'T' && b == 'T') return 'T';
    return 'F';
}

// a, b cung co gia tri False thi menh de False;
// v
char tuyen(char a, char b){
    if(a == 'F' && b == 'F') return 'F';
    return 'T';
}

// a True, b False thi menh de False
char suy_ra(char a, char b){
    if(a == 'T' && b == 'F') return 'F';
    return 'T';
}

// a, b cung gia tri thi menh de True
char tuong_duong(char a, char b){
    if(a == 'F' && b == 'F' || a == 'T' && b == 'T') return 'T';
    return 'F';
}

// a, b cung gia tri thi menh de False
char tuyenloai(char a, char b){
    if((a == 'T' && b == 'T' ) || (a == 'F' && b == 'F')) 
        return 'F';
    return 'T';
}

int main(){
    int skt; // so ki tu xuat hien; 
    cin >> skt;
    int len = pow(2, skt);
    for(int i = 0; i < len; i ++){
        char p, q, r;
        cin >> p >> q >> r;
        // nhap cac menh de can tinh;
        //
        char x = tuyen(p, q);
        char y = hoi(q, r);
        char z = suy_ra(x, y);
        cout << suy_ra(z, r) << endl;
    }
    return 0;
}