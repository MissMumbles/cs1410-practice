#include <iostream>
#include <vector>

using namespace std;

class Animal {
   public:
    virtual void speak(){
        cout << "A sound of some kind\n";
    } 
    virtual ~Animal(){
        cout<< "Animal cleaning\n";
    }
};

class Dog : public Animal {
   public:
    void speak(){
        cout << "Woof! :D\n";
    } 
    ~Dog(){
        cout<< "Dog cleaning\n";
    }
};

class Cat : public Animal {
   public:
    void speak(){
        cout << "Meow. >:3 \n";
    } 
    ~Cat(){
        cout<< "Cat cleaning\n";
    }
};

int main(){
    vector <Animal*> pets;
    pets.push_back(new Dog());
    pets.push_back(new Cat());

    for(Animal* pet : pets){
        pet ->speak();
    }

    Animal& d=*pets[0];
    Animal& c=*pets[1];
    d.speak();
    c.speak();

    Animal d2=*pets[0];
    Animal c2=*pets[1];
    d2.speak();
    c2.speak();


    for (Animal* pet :pets){
        delete pet;
    }
    
    return 0;
}