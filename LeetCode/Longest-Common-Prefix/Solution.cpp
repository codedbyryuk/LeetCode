// strs = ["ab", "ac"]
// first="ab", last="ac"

i=0: 'a' == 'a', so ans.insert(0, 1, 'a') → ans="a" ✓
i=1: 'b' != 'c', so NO insertion

// Now try next test case with no prefix match...
// strs = ["ba", "ca"]
// first="ba", last="ca"

i=0: 'b' != 'c', NO insertion → ans is still ""
i=1: tries ans.insert(1, ...) but ans.size() = 0 ✗ → CRASH!