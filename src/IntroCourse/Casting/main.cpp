#include <iostream>

struct A
{
  int basedata{1};

  A()
  {
    basedata = 11;
  }
  virtual void Do()
  {
    std::cout << "BaseA::Do()\t" << basedata << "\n";
  }
};

struct B : A
{
  int deriveddata{2};
  B() : deriveddata{22}
  {
  }
  void Do()
  {
    std::cout << "DerivedB::Do()\t" << deriveddata << "\n";
  }
};
struct C : A
{
  int deriveddata{2};
  C() : deriveddata{22}
  {
  }
  C(const A &x) : deriveddata{33}
  {

    basedata = x.basedata;
  }
  void Do()
  {
    std::cout << "DerivedC::Do()\t" << deriveddata << "\n";
  }
  void CSpecificDo(){
    std::cout << "DerivedC::CSpecificDo()\t" << deriveddata << "\n";
  }
};

int main()
{
  A baseGuy;
  baseGuy.Do();
  B derivedChild{};
  A baseTwin = static_cast<A>(derivedChild);

  // Cannot convert from base to derived without a specific constructor.
  // B derivedTwin = static_cast<B>(baseGuy);

  baseTwin.Do();
  derivedChild.Do();

  static_cast<A>(derivedChild).Do();

  // We can do this, as a specific constructor exists.
  baseGuy.basedata = 4;
  C derivedTwin = static_cast<C>(baseGuy);
  derivedTwin.Do();

  static_cast<A>(derivedTwin).Do();
  baseGuy.basedata = 2;
  static_cast<A>(derivedTwin).Do();

  C derivedTriplet = (C)baseGuy;
  derivedTriplet.Do();
  static_cast<A>(derivedTriplet).Do();

  A* basePointer = new A;
  B* childPointer = new B;
  C* twinPointer = new C;
/*
  Again, can't do this, as no upconversion constructor, but that doesn't matter anyway.  The pointer is always pointing to 
  the base object.  It has no access to the child object.
*/
  if (dynamic_cast<B*>(basePointer))
  {
    std::cout<<"treating basePointer like derived object\n";
  }

  //The next attempt fails and returns null even though a contructor exists
  if (dynamic_cast<C *>(basePointer))
  {
    std::cout << "treating basePointer like derived object\n";
  }
  //This calls derived Do() even though cast does work.
  if (dynamic_cast<A*>(childPointer))
  {
    std::cout << "treating childPointerB like base object\n";
    dynamic_cast<A*>(childPointer)->Do();
  }
  //This calls correct base Do() and cast works, but A:: must be there.
  if (dynamic_cast<A *>(twinPointer))
  {
    std::cout << "treating childPointerC like base object\n";
    dynamic_cast<A *>(twinPointer)->A::Do();
  }
  //This works, but you must call derived function explicitly
  if(static_cast<C*>(basePointer))
  {
    static_cast<C *>(basePointer)->C::Do();
    std::cout << "works\n";
    static_cast<C *>(basePointer)->C::CSpecificDo();
    
  }

  return 0;
}