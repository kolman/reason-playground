print_endline "hello!";

let twice_more = fun x => x * 2;

/* notice that call of twice_more gets inlined in js */
let print_twice_more = fun x => print_int (twice_more x);

/* notice compiler evaluates the inner functions and produces just log 20 */
print_twice_more 10;

