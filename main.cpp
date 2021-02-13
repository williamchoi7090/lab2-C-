#include <iostream>

class Main{
  public:
  virtual void speak()= 0;
  virtual void eat()= 0;
  virtual void sleep()= 0;
  virtual void mate(Mammal *x)= 0;
};

class Feline: public Main{
  public:
  void Feline::speak(){
    cout<<"Meow";
  }
  void Feline::eat(){
    cout<<"Felines are carnivores.";
  }
  void Feline:: sleep(){
    cout<<"The average feline sleep about 15 hours daily.";
  }
  void Feline::mate(Mammal *x){
    if (dynamic_cast<Feline*>(x) != nullptr){
      cout << x <<" is a mate of " << this
      }
      else{
        cout<< x <<" is not a mate of " << this 
    }
  }
};

class Canine: public Main{
  public:
  void Canine:: speak(){
    cout<<"Woof";
  }
  void Canine:: eat(){
    cout<<"Canines are omnivores.";
  }
  void Canine:: sleep{
    cout<<"The average feline sleep about 15 hours daily.";
  }
  void Canine::mate(Mammal *x){
    if (dynamic_cast<Canine*>(x) != nullptr){
      cout << x <<" is a mate of " << this
      }
      else{
        cout<< x <<" is not a mate of " << this 
    }
  }
};

class Bovine: public Main{
  public:
  void Bovine:: speak(){
    cout<<"Moo";
  }
  void Bovine:: eat(){
    cout<<"Bovines are herbivores.";
  }
  void Bovine:: sleep(){
    cout<<"The average feline sleep about 12-14 hours daily.";
  }
      void Bovine::mate(Mammal *x){
    if (dynamic_cast<Bovine*>(x) != nullptr){
      cout << x <<" is a mate of " << this
      }
      else{
        cout<< x <<" is not a mate of " << this 
    }
  }
};

class Tiger: public Feline{
  public:
  void setTiger(int t){
    tiger= t;
  }
};

class Lion: public Feline{
  public:
  void setLion(int l){
    lion= l;
  }
};

class Wolf: public Canine{
  public:
  void setWolf(int w){
    wolf= w;
  }
};

class Bull: public Bovine{
  public:
  void setBull(int b){
    bull= b;
  }
};

int main(void){
	t1->speak();
	t1->eat();
	t1->sleep();
	t1->mate(w1);

	l1->speak();
	l1->eat();
	l1->sleep();
	l1->mate(l1);

	w1->speak();
	w1->eat();
	w1->sleep();
	w1->mate(b1);

	b1->speak();
	b1->eat();
	b1->sleep();
	b1->mate(l1);

  return 0;
}