enum class Foo {
  A,
  B = 20
};

Foo x = Foo::A;

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 16985894625255407295,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 5,
      "definition_spelling": "1:12-1:15",
      "definition_extent": "1:1-4:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0, 1],
      "instances": [2],
      "uses": ["1:12-1:15", "6:1-6:4", "6:9-6:12"]
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 439339022761937396,
      "short_name": "A",
      "detailed_name": "Foo::A",
      "definition_spelling": "2:3-2:4",
      "definition_extent": "2:3-2:4",
      "variable_type": 0,
      "declaring_type": 0,
      "kind": 15,
      "uses": ["2:3-2:4", "6:14-6:15"]
    }, {
      "id": 1,
      "usr": 15962370213938840720,
      "short_name": "B",
      "detailed_name": "Foo::B",
      "definition_spelling": "3:3-3:4",
      "definition_extent": "3:3-3:9",
      "variable_type": 0,
      "declaring_type": 0,
      "kind": 15,
      "uses": ["3:3-3:4"]
    }, {
      "id": 2,
      "usr": 10677751717622394455,
      "short_name": "x",
      "detailed_name": "Foo x",
      "definition_spelling": "6:5-6:6",
      "definition_extent": "6:1-6:15",
      "variable_type": 0,
      "kind": 13,
      "uses": ["6:5-6:6"]
    }]
}
*/
