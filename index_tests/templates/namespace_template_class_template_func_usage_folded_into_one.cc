namespace ns {
  template<typename T>
  struct Foo {
    template<typename R>
    static int foo() {
      return 3;
    }
  };

  int a = Foo<int>::foo<float>();
  int b = Foo<bool>::foo<double>();
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 14042997404480181958,
      "short_name": "Foo",
      "detailed_name": "ns::Foo",
      "kind": 7,
      "definition_spelling": "3:10-3:13",
      "definition_extent": "3:3-8:4",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [0],
      "vars": [],
      "instances": [],
      "uses": ["3:10-3:13", "10:11-10:14", "11:11-11:14"]
    }],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": 8221803074608342407,
      "short_name": "foo",
      "detailed_name": "int ns::Foo::foo()",
      "kind": 18,
      "declarations": [],
      "definition_spelling": "5:16-5:19",
      "definition_extent": "5:5-7:6",
      "declaring_type": 0,
      "base": [],
      "derived": [],
      "locals": [],
      "callers": ["-1@10:21-10:24", "-1@11:22-11:25"],
      "callees": []
    }],
  "vars": [{
      "id": 0,
      "usr": 15768138241775955040,
      "short_name": "a",
      "detailed_name": "int ns::a",
      "definition_spelling": "10:7-10:8",
      "definition_extent": "10:3-10:33",
      "kind": 13,
      "uses": ["10:7-10:8"]
    }, {
      "id": 1,
      "usr": 3182917058194750998,
      "short_name": "b",
      "detailed_name": "int ns::b",
      "definition_spelling": "11:7-11:8",
      "definition_extent": "11:3-11:35",
      "kind": 13,
      "uses": ["11:7-11:8"]
    }]
}
*/
