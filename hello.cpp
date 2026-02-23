


#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Course{
      string course;
      double grade;
      int ECTS;
};


int main(){
   cout<<"Welcome Student!"<<endl;
   
   string first_name; 
   cout<<"Please put your First name"<<endl;
   cin>>first_name;
   
   string second_name;   
   cout<<"Please insert your second name"<<endl;
   cin>>second_name;

   int age;
   cout<<"Please insert your age"<<endl;
   cin>>age;

   cout<<"Welcome "<<first_name<<" "<<second_name<<endl;
   cout<<"Your age is "<<age<<endl;
  

   vector<Course> courses ={
       {"Mathematics analysis", 0,0},
       {"Statitics", 0,0 },
       {"Electrical application",0,0},
       {"Machine Learning",0,0}
   };

   for (int i = 0; i < courses.size(); i++) {
    cout << "Course " << i << ": " << courses[i].course << endl;
    cout << "Please put the grade of the student: ";
    cin >> courses[i].grade;
    cout << "Please put the ECTS of the course: ";
    cin >> courses[i].ECTS;
   }
   
   double totalPoints = 0;
   int totalECTS = 0;

   for (int i = 0; i < courses.size(); i++) {
       totalPoints += courses[i].grade * courses[i].ECTS;
       totalECTS += courses[i].ECTS;
    }

    double GPA = totalPoints / totalECTS;
    cout << "Your GPA for the semester is: " << GPA << endl;  
       
return 0;
}

