class Animal {
 public:
  virtual void sound();
  virtual ~Animal();
};

class Pig : public Animal{
 public:
  void sound();
  virtual ~Pig(); 
};

class Dog : public Animal{
 public:
  void sound();
  virtual ~Dog();
};

