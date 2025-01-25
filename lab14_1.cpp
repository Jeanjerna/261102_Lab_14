#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	double x;
    int j;
    
    for (int i = 1 ;  i < N ; i++)
    {
        x = d[i];
        
        for (j = i-1 ; j >= 0 ; j--)
        {
            if ( x > d[j])
            {
                d[j+1] = d[j];
                // if (j == 0) d[j] = x;
            }
            else break;
        }
        d[j+1] = x; //ถ้าเช็คจนถึงตัวที่ 0 แล้ว x ยังมากกว่า d[j] จะไม่มีการ break เกิดขึ้นแล้วทำให้ค่าสุดท้ายของ j = -1 ทำให้ d[j+1] = d[0]
        
        //====================================//
        cout << "Pass " << i << ":";
        
        for (int l = 0 ; l < N ; l++)
        {
            cout << d[l] << " ";
        }
        
        cout << "\n";
        //====================================//
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
