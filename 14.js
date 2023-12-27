
function collatz_num(num) {
    if(num % 2 == 0) {
      return num / 2;
    }
    else {
      return (num * 3) + 1;
    }
  }
  
  function collatz_sequence(num) {
    var counter = 1;
    while(num != 1) {
      num = collatz_num(num);
      counter++;
    }
    return counter;
  }
  
  function longest_chain(num) {
    var max = 0;
    var max_index;
      
    for(var i=1; i<num; i++) {
      var sequence = collatz_sequence(i);
      if(sequence > max) {
        max = sequence;
        max_index = i;
      }
    }
    return max_index;
  }
  
  console.log(longest_chain(1000000));

  //ans : 