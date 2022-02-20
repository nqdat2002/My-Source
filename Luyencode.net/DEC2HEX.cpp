#include<stdio.h>
const char CHAR_55 = 55;
const char CHAR_48 = 48;
int convertNumber(long long int n, int b) {
 //   if (n < 0 || b < 2 || b > 16 ) {
 //       printf("He co so hoac gia tri chuyen doi khong hop le!");
 //       return 0;
 // }
    long long int i;
    char arr[200];
    long long int count = 0;
    long long int m;
    long long int remainder = n;
    while (remainder > 0) {
        if (b > 10) {
            m = remainder % b;
            if (m >= 10) {
                arr[count] = (char) (m + CHAR_55);
                count++;
            } else {
                arr[count] = (char) (m + CHAR_48);
                count++;
            }
        } else {
            arr[count] = (char) ((remainder % b) + CHAR_48);
            count++;
        }
        remainder = remainder / b;
    }
    for (i = count - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n ;
	    scanf("%lli",&n);
	   
	 	convertNumber(n, 16);
	printf("\n");
	}
	return 0;
}