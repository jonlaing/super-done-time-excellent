open Jest;
open Expect;
open BubbleEvent;

describe "BubbleEvent" (fun () => {
    let id x => x;
    let add x y => x + y;
    let multBy3 x => x * 3;

    test "make" (fun () => {
        let e = make multBy3 id;
        let e2 = Event multBy3 (ApplicativeMonad.T id);

        expect e |> toEqual e2;
    });

    test "apply" (fun () => {
        let e = make id add;
        let e1 = apply e (ApplicativeMonad.T 1);
        let e2 = apply e1 (ApplicativeMonad.T 2);
        
        switch(e2) {
        | Event _ (ApplicativeMonad.T a) => expect a |> toBe 3
        }
    });

    test "mApply" (fun () => {
        let e = make id add;
        let e1 = mApply e 1;
        let e2 = mApply e1 2;
        
        switch(e2) {
        | Event _ (ApplicativeMonad.T a) => expect a |> toBe 3
        }
    });

    test "bind" (fun () => {
        let e = make id add;
        let e1 = mApply e 1;
        let e2 = mApply e1 2;

        let res = bind e2 multBy3;

        expect res |> toEqual 9;
    });

    test "popEvent" (fun () => {
        let x = ref 0;
        let setState () => x := 5;
        let update f () => f ();

        let e = make update setState;

        popEvent e;

        expect !x |> toEqual 5;
    });
});