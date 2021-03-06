// { dg-options -std=c++0x }

template <class T> struct A
{
  constexpr T f ();
};

int g();

// We should complain about this.
template<> constexpr int A<int>::f()
{ return g(); }			// { dg-error "non-constexpr" }

// But not about this.
struct B
{
  int i;
  constexpr B(int i = g()):i(i) { }
};
struct C: B { };
C c;
