void foo(int, int) {}
/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": 2747674671862363334,
      "short_name": "foo",
      "detailed_name": "void foo(int, int)",
      "kind": 12,
      "declarations": [],
      "definition_spelling": "1:6-1:9",
      "definition_extent": "1:1-1:22",
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": []
    }],
  "vars": []
}
*/
