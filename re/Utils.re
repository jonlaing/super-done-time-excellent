let str = ReasonReact.stringToElement;

module ApplicativeMonad = {
    type t 'a = T 'a;
    
    let apply (T a) (T b) => T (a b);

    let (<.>) = apply;

    let bind (T a) f => f a;

    let (>>=) = bind;

    let return a => T a;

    let pure = return;

};

module BubbleEvent = {
    type t 'u 'a = Event 'u (ApplicativeMonad.t 'a);

    let popEvent (Event update a) => {
        ApplicativeMonad.bind a update;
        ();
    };

    let apply (Event u a) b => Event u (ApplicativeMonad.apply a b);

    let (<.>) = apply;

    let bind (Event _ a) f => ApplicativeMonad.bind a f;

    let (>>=) = bind;
}