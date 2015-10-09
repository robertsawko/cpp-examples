class Animal {
 public:
  virtual void sound();
  virtual ~Animal();
};

class Bird : public Animal{
 public:
  void sound();
  virtual ~Bird(); 
};

class Dog : public Animal{
 public:
  void sound();
  virtual ~Dog();
};

