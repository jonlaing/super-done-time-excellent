type t 'a = T 'a;

let apply (T a) (T b) => T (a b);

let (<.>) = apply;

let bind (T a) f => f a;

let (>>=) = bind;

let return a => T a;

let pure = return;