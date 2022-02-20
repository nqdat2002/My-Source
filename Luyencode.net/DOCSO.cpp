#include<iostream>
using namespace std;
void hangtram( int a);
void hangchuc(int b);
void hangdonvi(int c);
int main(){
    int a,b,c,n;
    do{
        cin>> n;
                               
    }while (n<1||n>1000);
    a = n/100;
	b = (n-(a*100))/10;
    c = (n-((a*100)+(b*10)));  
    hangtram(a);
    hangchuc(b);
    hangdonvi(c);
    return 0;
}
void hangtram(int a){
    switch(a){
                       
	case 1: cout<< "mot tram linh";break;
	case 2: cout<< "hai tram linh";break;
	case 3: cout<< "ba  tram linh";break;
	case 4: cout<< "bon tram linh";break;
	case 5: cout<< "nam tram linh"; break;
	case 6:	cout<< "sau tram linh"; break;
	case 7: cout<< "bay tram linh" ; break;
	case 8: cout<< "tam tram linh" ; break;
	case 9: cout<< "chin tram linh"; break;
    }
}
void hangchuc(int b){
    switch(b){
    case 1: cout<<"muoi";break;
    case 2: cout<<" hai muoi "; break;
	case 3: cout<< " ba muoi "; break;
	case 4: cout<< " bon muoi "; break;
	case 5: cout<< " nam muoi "; break;
	case 6: cout<<" sau muoi "; break;
	case 7: cout<<" bay muoi "; break;
	case 8: cout<<" tam muoi "; break;
	case 9: cout<< " chin muoi"; break;
    }
}
void hangdonvi(int c){
    switch(c){
	case 1:cout<< " mot"; break;
	case 2:cout<< " hai";break;
	case 3:cout<< " ba ";break;
	case 4:cout<< " bon";break;
	case 5:cout<<" nam";break;
	case 6:cout<< " sau "; break;
	case 7:cout<< " bay";break;
	case 8:cout<< " tam"; break;
	case 9: cout<<" chin"; break;
    }
}
