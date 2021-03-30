#ifndef MAP_TEST_H
#define MAP_TEST_H
#include "CMap.h"

#include <gtest/include/gtest/gtest.h>
using namespace std;

TEST(test037, test_CMap)
{
      Map a;
      CString k1(1); CString b("Zero");
      a.add_pair(k1, b);

      CString k2(2); CString c("WALKYRIE");
      a.add_pair(k2, c);

      CString k3(3); CString d("New");
      a.add_pair(k3, d);

      CString k4(4); CString e("X-men");
      a.add_pair(k4, e);

      CString k5(5); CString g("developer");
      a.add_pair(k5, g);

      CString k6(6); CString h("match");
      a.add_pair(k6, h);

      CString k7(7); CString i("view");
      a.add_pair(k7, i);

      CString k8(8); CString j("hero");
      a.add_pair(k8, j);

      CString k9(9); CString m("big_boss");
      a.add_pair(k9, m);

      CString k10(10); CString n("Titan");
      a.add_pair(k10, n);

      CString k11(11); CString p("Sub-zero");
      a.add_pair(k11, p);

      CString l("hello");
      a.add_pair(k8, l);

      CString f("Warkraft");
      a.add_pair(k2, f);

      a.search(k4);
      a.delete_key(k5);
      a.delete_key(k2);
      cout << "Something" << endl;
//    bool res = a.search("Zero"); //что такое тип б
//    ASSERT_TRUE(res);
}
#endif // MAP_TEST_H
