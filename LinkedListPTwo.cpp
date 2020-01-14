/*
Student List by Andrew Thomas Mr.Galbraith P5 C++. Resources: Mr.Galbraith and C++ website. This code has a point of a vector with student points. student is a structure and has cstring for first name and lastname, int for id and float for the gpa. One can input the ADD, PRINT, DELETE, QUIT functions to the console. the ADD function adds the student to the vector and promps for the student's properties. PRINT is a function that prints the student properties. DELETE deletes the student pointer from the vector and will prompt for the id of the student you want to remove. Finally, QUIT terminates the program. 
 */
#include <iostream> // initializes libraries
#include <cstring>
#include <vector>
#include <cmath>
#include "Node.h"
//#include "Student.h"
#include <iomanip>
using namespace std; // uses namespace std
void Add(Node* ListTail); // initializes the function
void Subtract(Node* ListTail, int* DeletedID, Node* previous, int* counterThree, int* counterFour, int* counterFive);
void Print(Node* ListTail, int* counterTwo);
Node* getEnd(Node* Current);
void Average(Node* ListFront, int* counterFive, float* sum, float* num);
void SortList(Node* ListFront, Node* SortedFront, int* counterSix, int* Least, Node* Beginning, int* counterSeven, Node* previous, int* counterThree, int* counterFour, int* counterFive, int* counterNine, int* counterTen, int* size, Node* Header, int* sizeTwo, int* LSize, int* counterThis);
Node* MatchGPA(Node* ListFront,int* Least, int* counterSeven);
void Ignore(Node* ListTail, int* DeleteID, Node* previous, int* counterThree, int* counterFour, int* counterFive, int* LSize);
void Duplicate(Node* Header, Node* DuplicateHeader, int* counterEight);
int* Size(Node* Header, int* counterTen, int* size);
int main() { // main function
  bool stop = false; // initializes the variables
  char stopChar;
  Student* temp = new Student;
  Student* tempTwo = new Student;
  Student* tempThree = new Student;
 Student* tempFour = new Student;
  Node* previous = new Node(NULL);
  Node* Header = new Node(temp);
  Node* SortedHeader = new Node(tempTwo);
  Node* DuplicateHeader = new Node(tempFour);
  Node* Beginning = new Node(tempThree);
  int* DeletedID = new int;
  int* LSize = new int;
  (*LSize) = 0;

  cout << "Welcome to StudentList. Here you can add, print, or delete sets of information about studnet. each set has the first name, last name, ID number, and GPA for the student. if you want to quit this app then type QUIT" << endl;
  char input[20];
  char quit[5];
  
  int* Least = new int;
  (*Least) = 0;
  int counter = 0;
  /*
  int* counterTwo = 0;
  //counterTwo = 0;
  int* counterThree = 0;
  */
  int* ResetCounterTwo = new int;
  (*ResetCounterTwo) = 0;
  int* counterTwo = new int;
  (*counterTwo) = 0;
  int* counterThree = new int;
  (*counterThree) = 0;
  int* ResetCounter = new int;
  (*ResetCounter) = 0;
  int* counterFour = new int;
  (*counterFour) = 0;
    int* counterFive = new int;
    (*counterFive) = 0;
        int* counterSix = new int;
    (*counterSix) = 0;
    int* counterSeven = new int;
    (*counterSeven) = 0;
    int* counterEight = new int;
    (*counterEight) = 0;
    int* counterNine = new int;
    (*counterNine) = 0;
   int* counterTen = new int;
    (*counterTen) = 0;
    int* size = new int;
    (*size) = 0;
   int* sizeTwo = new int;
    (*sizeTwo) = 0;
    int* counterThis = new int;
    (*counterThis) = 0;
    float* sum = new float;
    (*sum) = 0;
    float* num = new float;
    (*num) = 0;
    do{ // Continues running the programm until the QUIT funciton
      cout << "What would you like to do?" << endl;
	    cin.get(input, 20); // asks and gets input
	    cin.clear();
	    cin.ignore();
	    if(strcmp(input, "ADD") == 0){ // ADD function
	      Add(getEnd(Header));
	      //Add(getEnd(SortedHeader));
		//  }
		  } 
	    else if(strcmp(input, "DELETE") == 0){ // DELETE function
	      //  cout << "Delete" << endl;
	      //Subtract(v); // DELETES
	      if((*Header).getNext() != NULL){
	      cout << "Please Enter the ID of the student you want to delete" << endl;
	      cin >> (*DeletedID);
	      cin.clear();
	      cin.ignore();
	      //if(counter == 0){
	      //if((*Current).getStudent() != NULL){
	      Subtract(Header, DeletedID, previous, counterThree, counterFour, counterFive);
	      //cout << "Here3" << endl;
	      //  cout << counterFour << endl;
	      if((*counterFour) == 0){
		  cout << "That ID does not match any ID of the students" << endl;
		}
		(*counterFour) = 0;
		(*counterThree) = 0;
	      //  cout << "Here4" << endl;
	      }
	      else{
		cout << "You can't delete from an empty list." << endl;
		}
	      }
	      
	    else if(strcmp(input, "QUIT") == 0){ // QUIT function
	      stop = true; // sets the stop boolean to true
	    }
	    else if(strcmp(input, "AVERAGE") == 0){
	      Average(Header, counterFive, sum, num);
	      // cout << (*sum) << endl;
	      //cout << (*num) << endl;
	      (*sum) = (*sum) / (*num);
		  cout << "Average: ";
		  cout << fixed << setprecision(2) << (*sum) << endl;

	      (*counterFive) = 0;
	      (*sum) = 0;
	      (*num) = 0;
	    }
	    else if(strcmp(input, "PRINT") == 0){ // PRINT function
	      // cout << "Print" << endl;
	      //if(counter == 0){
	      // Print(ListTail); // prints
	      //}
	      //else{
	      if((*Header).getNext() != NULL){
		//cout << "empty list" << endl;
		//if((*ResetCounterTwo) == 0){
		//Duplicate(Header, DuplicateHeader,counterEight);
		// (*ResetCounterTwo)++;
		//}
		/*	if((*ResetCounter) == 0){
		  cout << "Here" << endl;
		  if((*ResetCounterTwo) == 0){\
		   cout << "Here4" << endl;
		  Duplicate(Header, DuplicateHeader,counterEight);
		  cout << "d1" << endl;
		Print(DuplicateHeader, counterTwo);
		(*counterTwo) = 0;
		cout << "d2" << endl;
		Print(Header, counterTwo);
		  (*ResetCounterTwo)++;
		}
		  else{
		    cout << "Here5" << endl;
		  Duplicate(DuplicateHeader, Header,counterEight);
		  }
	       	SortList(DuplicateHeader, SortedHeader, counterSix, Least, Beginning, counterSeven, previous, counterThree, counterFour,  counterFive, counterNine, counterTen, size, DuplicateHeader, sizeTwo, LSize, counterThis);
		(*ResetCounter) = 1;
		}
		else{
		  cout << "Here2" << endl;
 Duplicate(Header, DuplicateHeader,counterEight);
 cout << "Here3" << endl;
	       	SortList(Header, SortedHeader, counterSix, Least, Beginning, counterSeven, previous, counterThree, counterFour,  counterFive, counterNine, counterTen, size, Header, sizeTwo, LSize, counterThis);
		cout << "HereThis" << endl;
		(*ResetCounter) = 0;
		}
		*/
		//if((*ResetCounterTwo) == 0){
		//Duplicate(Header, DuplicateHeader,counterEight);
		//(*ResetCounterTwo)++;
		//}
		//Print(Header, counterTwo);
			(*SortedHeader).setNext(NULL);
			Print(Header, counterTwo);
			Print(SortedHeader, counterTwo);
			cout << "Size" << endl;
			cout << (*LSize) << endl;
		SortList(Header, SortedHeader, counterSix, Least, Beginning, counterSeven, previous, counterThree, counterFour,  counterFive, counterNine, counterTen, size, Header, sizeTwo, LSize, counterThis);
		//Duplicate(SortedHeader, DuplicateHeader,counterEight);
		cout << "Print" << endl;
		(*counterTwo) = 0;
		
		//cout << "d1" << endl;
		//Print(DuplicateHeader, counterTwo);
		//(*counterTwo) = 0;
		//	cout << "d2" << endl;
		//Print(Header, counterTwo);
		(*counterTwo) = 0;
		//  cout << "d3" << endl;
		
		  //Duplicate(SortedHeader, Header, counterEight);
		//cout << "Here" << endl;
		Print(SortedHeader, counterTwo);
		//(*counterTwo) = 0;
		//Print(Header, counterTwo);
		//(*counterTwo) = 0;
		Duplicate(SortedHeader, Header, counterEight);
		//Print(Header, counterTwo);
		(*counterTwo) = 0;
		(*counterEight) = 0;
		//cout << "Here2" << endl;
		//Print(Header, counterTwo);
		(*SortedHeader).setNext(NULL);
		(*counterSix) = 0;
		(*Least) = 0;
		(*counterSeven) = 0;
		(*counterThree) = 0;
		(*counterFour) = 0;
		(*counterFive) = 0;
		(*counterNine) = 0;
		(*Beginning).setNext(NULL);
		(*previous) = NULL;
		(*counterTen) = 0;
		(*size) = 0;
		(*sizeTwo) = 0;
		(*LSize) = 0;
		(*counterThis) = 0;
		//Print(DuplicateHeader, counterTwo);
		(*counterTwo) = 0;
		}
	        else{
		cout << "empty list" << endl;
		//Print(Current);
		}
		//}
	        }
	    else{
	      cout << "Command not recognized. Please check your spelling and make sure it is all capital letters." << endl; // input is not any of the commands
	    }
	    
	  }
    while(stop == false); // keeps going while stop is false
	  return 0;
}
void Add(Node* Current){ // creates the student pointer to add to vector
  // if(counterThree == 0){
  // counterThree++;
    
  //}
    Student *create = new Student(); // student created
  cout << "Please enter the student's name." << endl;
  char* Name = new char[20];
  cin.get(Name, 20); // firstname
  //(*create).firstName.add('\0');
  cin.clear();
  cin.ignore();
  (*create).setName(Name);
  int* ID = new int;
  cout << "Please enter the student's ID number." << endl;
  
  cin >> (*ID); //id
  cin.clear();
  cin.ignore();
  (*create).setID(ID);
  float* GPA = new float;
  cout << "Please enter the student's GPA." << endl;
  cin >> (*GPA); // gpa
    cin.clear();
    cin.ignore();
    (*create).setGPA(GPA);
    Node* newNode = new Node(create);
    //Current = newNode;
    //(*Current).setNext(newNode);
    //  Current = newNode;
    (*Current).setNext(newNode);
}
void Subtract(Node* ListTail, int* DeleteID, Node* previous, int* counterThree, int* counterFour, int* counterFive){ // deletes the student from the vector
  //  cout << "h" << endl; 
  //Student* temp = new Student;
  // Node* previous = new Node(temp);
  if((*counterThree) == 0){
    //cout << "Here" << endl;
    (*counterThree)++;
   previous = ListTail;
   Subtract((*ListTail).getNext(), DeleteID, previous, counterThree, counterFour, counterFive);
  }
  if((*(*(*ListTail).getStudent()).getID()) == (*DeleteID)){
    cout << "Deleted" << endl;
    (*counterFour)++;
     if((*ListTail).getNext() != NULL){
       //cout << "Middle" << endl;
	//delete ListTail;
	//(*previous).setNext(NULL);
	(*previous).setNext((*ListTail).getNext());
	delete ListTail;
	return;
      }
    else if(ListTail == NULL){
      return;
    }
      else{
	//cout << "End of List" << endl;
	
	(*previous).setNext(NULL);
	//cout << "Here1" << endl; 
	delete ListTail;
	//cout << "Here2" << endl;
	return;
	//cout << "Here5" << endl;
      }
  }
  else{
    // counterFour++;
    //cout << "That ID does not match any ID of the students" << endl;
  }
  
  if((*ListTail).getNext() != NULL){
    previous = ListTail; 
    Subtract((*ListTail).getNext(), DeleteID, previous, counterThree, counterFour, counterFive); 
	}
  else{
  }
  //  if(counterFour == 0){
  //cout << "That ID does not match any ID of the students" << endl;
  //}
}
void Print(Node* ListTail, int* counterTwo){ // prints all the students in the vector
  // cout << "here2" << endl;
  if((*counterTwo) == 0){
     //cout << "here" << endl;
    (*counterTwo)++;
    Print((*ListTail).getNext(), counterTwo);
  }
  else{
    //    return;
    //}
    //cout << "here1" << endl;
  for(int i = 0; i < strlen((*(*ListTail).getStudent()).getName()); i++){
    cout << (*(*ListTail).getStudent()).getName()[i];
    }
  //cout << "Here3"<< endl;
	cout << " ";
	cout << (*(*(*ListTail).getStudent()).getID());
      	cout << " ";
	cout << fixed << setprecision(2) << (*(*(*ListTail).getStudent()).getGPA());
	cout << endl;
	if((*ListTail).getNext() != NULL){
	  Print((*ListTail).getNext(), counterTwo); 
	}
	//cout << "here5" << endl;
  }
}
Node* getEnd(Node* Current){
  if((*Current).getNext() != NULL){
    getEnd((*Current).getNext());
  }
  else{
    return Current;
  }
}
void Average(Node* ListFront, int* counterFive, float* sum, float* num){
    if((*counterFive) == 0){
      //cout << "here" << endl;
    (*counterFive)++;
    Average((*ListFront).getNext(), counterFive, sum, num);
  }
    else{
      //cout << "here2" << endl;
    (*sum) = (*sum) + (*(*(*ListFront).getStudent()).getGPA());
    (*num)++;
    
    if((*ListFront).getNext() != NULL){
      //  cout << "here1" << endl;
      Average((*ListFront).getNext(), counterFive, sum, num);
    }
    //else{
    //return;
    }
    //}
    //cout << "here2" << endl;
  //(*sum) += (*(*(*ListFront).getStudent()).getGPA());
  //(*num)++;
    // (*sum) = (*sum) / (*num);
    //cout << "Average: ";
    // cout << (*sum) << endl;
}
void SortList(Node* ListFront, Node* SortedFront, int* counterSix, int* Least, Node* Beginning, int* counterSeven, Node* previous, int* counterThree, int* counterFour, int* counterFive, int* counterNine, int* counterTen, int* size, Node* Header, int* sizeTwo, int* LSize, int* counterThis){
  cout << "Here" << endl;
    if((*counterSix) == 0){
          cout << "Here1" << endl;
      cout << "here" << endl;
    (*counterSix)++;
    if((*counterThis) == 0){
    (*Beginning).setNext(ListFront);
    (*LSize) = (*Size(ListFront, counterTen, size));
    (*counterTen) = 0;
      }
    (*counterThis)++;
    cout << "Here2" << endl;
      SortList((*ListFront).getNext(), SortedFront, counterSix, Least, Beginning, counterSeven,  previous, counterThree, counterFour, counterFive, counterNine, counterTen, size, Header, sizeTwo, LSize, counterThis);
  }
    else{
      cout << "Here3" << endl;
      if((*counterNine) == 0){
	cout << "Here4" << endl;
	(*counterNine)++;
	(*Least) = (*(*(*ListFront).getStudent()).getID());
	cout << (*Least) << endl;
      }
      else{
    if((*Least) > (*(*(*ListFront).getStudent()).getID())){
      cout << "Here5" << endl;
      (*Least) = (*(*(*ListFront).getStudent()).getID());
      cout << (*Least) << endl;
    }
    else{
      cout << "wow" << endl;
    }
      }
      if((*ListFront).getNext() != NULL){
	cout << "Here6" << endl;
	cout << "here1" << endl;
	SortList((*ListFront).getNext(), SortedFront, counterSix, Least, Beginning, counterSeven,  previous, counterThree, counterFour, counterFive, counterNine, counterTen, size, ListFront, sizeTwo, LSize, counterThis);
    }
      else{
	cout << "Here7" << endl;
	cout << (*(*(*MatchGPA((*Beginning).getNext(), Least, counterSeven)).getStudent()).getID()) << endl;
	(*counterSeven) = 0;
	cout << (*Least) << endl;
	(*getEnd(SortedFront)).setNext(MatchGPA((*Beginning).getNext(), Least, counterSeven));
	//(*getEnd(SortedFront)).setNext(NULL);
	(*counterSeven) = 0;
	//Beginning = MatchGPA(Beginning, Least, counterSeven);
	(*previous) = NULL;
	(*counterThree) = 0;
	  (*counterFour) = 0;
	  (*counterFive) = 0;
	  //(*LSize) = 0;
	  cout << "LOL2" << endl;
	Ignore((*Beginning).getNext(), Least, previous, counterThree, counterFour, counterFive, LSize);
	(*previous) = NULL;
	cout << "LOL1" << endl;
	  (*counterThree) = 0;
	  (*counterFour) = 0;
	  (*counterFive) = 0;
	  //(*LSize) = 0;
	cout << "Here8" << endl;
	  (*counterTen) = 0;
	  (*size) = 0;
	  //cout << ((*Size((*Beginning).getNext(), counterTen, size))-1) << endl;
	  (*counterTen) = 0;
	  (*size) = 0;
	  cout << (*LSize) << endl;
	  
	  (*sizeTwo) = 0;
	  (*counterTen) = 0;
	  //Print(ListFront, counterTen);
	  //(*counterTen) = 0;
	  Print(SortedFront, counterTen);
	  (*counterTen) = 0;
	  cout << (*counterTen) << endl;
	  cout << (*sizeTwo) << endl;
	  cout << (*Size(SortedFront, counterTen, sizeTwo)) << endl;
	  (*counterTen) = 0;
	  (*sizeTwo) = 0;
	  cout << "There" << endl;
	  if((*LSize) != (*Size(SortedFront, counterTen, sizeTwo))){
	    cout << "Where" << endl;
	    (*counterTen) = 0;
	  (*sizeTwo) = 0;

	  cout << "Here9" << endl;
	    (*counterSix) = 0;
	    (*counterNine) = 0;
	    SortList((*Beginning).getNext(), SortedFront, counterSix, Least, Beginning, counterSeven,  previous, counterThree, counterFour, counterFive, counterNine, counterTen, size, ListFront, sizeTwo, LSize, counterThis);
	  }
	  (*counterTen) = 0;
	  cout << "LOL" << endl;
	  }
      }
    //(*ListFront).setNext(NULL);

}
Node* MatchGPA(Node* ListFront,int* Least, int* counterSeven){
    if((*counterSeven) == 0){
      //cout << "here" << endl;
    (*counterSeven)++;
    //Beginning = ListFront;
    MatchGPA((*ListFront).getNext(), Least, counterSeven);
  }
    else{
      if((*Least) == (*(*(*ListFront).getStudent()).getID())){
	return ListFront;
      }
      if((*ListFront).getNext() != NULL){	
     MatchGPA((*ListFront).getNext(), Least, counterSeven); 
      }
      }
    

}
void Duplicate(Node* Header, Node* DuplicateHeader, int* counterEight){
  //if((*counterEight) == 0){
      //cout << "here" << endl;
      //(*counterEight)++;
    //Beginning = ListFront;
    //Duplicate((*Header).getNext(), DuplicateHeader, counterEight);
    //}
  (*DuplicateHeader).setNext((*Header).getNext());
  //else{
            if((*Header).getNext() != NULL){	
	      Duplicate((*Header).getNext(), (*DuplicateHeader).getNext(), counterEight); 
      }

	    //}

}
int* Size(Node* Header, int* counterTen, int* size){
  //cout << "There" << endl;
  // (*counterTen) = 0;
  if((*counterTen) == 0){
    (*size) = 0;
    //cout << "This" << endl;
    (*counterTen)++;
    Size((*Header).getNext(), counterTen, size);
  }
  else{
    // cout << "Here" << endl;
  (*size)++;
      if((*Header).getNext() != NULL){
	//cout << "Where" << endl;
	Size((*Header).getNext(), counterTen, size);
      }
      else{
	//cout << "His" << endl;
      (*counterTen) = 0;
      return size;
      }
      //cout << (*size) << endl;
  }
  }
//else{
// counterTwo++;
//}
void Ignore(Node* ListTail, int* DeleteID, Node* previous, int* counterThree, int* counterFour, int* counterFive, int* LSize){ // deletes the student from the vector
  //  cout << "h" << endl;
  //cout << "HI" << endl;
  //Student* temp = new Student;
  // Node* previous = new Node(temp);
  if((*counterThree) == 0){
    //cout << "Here" << endl;
    (*counterThree)++;
   previous = ListTail;
   Ignore((*ListTail).getNext(), DeleteID, previous, counterThree, counterFour, counterFive, LSize);
  }
  if((*(*(*ListTail).getStudent()).getID()) == (*DeleteID)){
    //cout << "Ignored" << endl;
    (*counterFour)++;
     if((*ListTail).getNext() != NULL){
       //cout << "Middle" << endl;
	//delete ListTail;
	//(*previous).setNext(NULL);
	(*previous).setNext((*ListTail).getNext());
	(*ListTail).setNext(NULL);
	//delete ListTail;
	return;
      }
    else if(ListTail == NULL){
      return;
    }
      else{
	//cout << "End of List" << endl;
	
	(*previous).setNext(NULL);
	//cout << "Here1" << endl; 
	//delete ListTail;
	//cout << "Here2" << endl;
	return;
	//cout << "Here5" << endl;
      }
  }
  else{
    // counterFour++;
    //cout << "That ID does not match any ID of the students" << endl;
  }
  
  if((*ListTail).getNext() != NULL){
    previous = ListTail; 
    Ignore((*ListTail).getNext(), DeleteID, previous, counterThree, counterFour, counterFive, LSize); 
	}
  else{
  }
  //  if(counterFour == 0){
  //cout << "That ID does not match any ID of the students" << endl;
  //}
}
