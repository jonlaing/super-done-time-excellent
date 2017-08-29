type t 'u 'a = Event 'u (ApplicativeMonad.t 'a);

let make update f => Event update (ApplicativeMonad.T f);

let popEvent (Event update a) => {
    (ApplicativeMonad.bind a update) ();
    ();
};

let apply (Event u a) b => Event u (ApplicativeMonad.apply a b);

let (<.>) = apply;

/* applies an arbitrary value to the applicative monad, no need to */
/* box it first */
let mApply (Event u a) b =>
    Event u (ApplicativeMonad.apply a (ApplicativeMonad.T b));

let (<..>) = mApply;

let bind (Event _ a) f => ApplicativeMonad.bind a f;

let (>>=) = bind;