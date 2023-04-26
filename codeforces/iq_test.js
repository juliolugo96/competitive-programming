// const { readline, print } = require('@ip-algorithmics/codeforces-io');

var n = parseInt(readline());
var integers = new Array(101).fill(0);
var odd = [0, 0];
var even = [0, 0];
var integers = readline().split(" ").map(x => parseInt(x))

for (var i = 0; i < n; i++) {
  if (integers[i] % 2 !== 0) {
    odd[0]++;
    odd[1] = i + 1;
  } else {
    even[0]++;
    even[1] = i + 1;
  }
}

print(odd[0] == 1 ? odd[1] : even[1]);
