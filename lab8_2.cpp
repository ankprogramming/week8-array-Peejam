#include <iostream>

using namespace std;

int main () {
    // char city[] = {'A','B','c','\O'};
     //char city2[] = ["ABC","DEF"];

        char name[] = {"Anukul"};
        int nameLength = 6;
        cout << name <<endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

char revname[namelength+1];
for (int i =0; i <namelength; i++){
    revname [i] = name[5-i];
}
    revname[namelength] = '\0';
      cout << revname <<endl;
      for (int i =0; i <namelength; i++){
            revname [i] = rename[i]+1;
}

}

        return 0;
}
