open Jest;
open Expect;
open ApplicativeMonad;

describe "ApplicativeMonad" (fun () => {
    let id x => x;
    let add x y => x + y;

    test "return" (fun () => {
        let m = T 3;        
        expect (return 3) |> toEqual m;
    });

    test "bind" (fun () => {
        let m = T id;
        expect ((bind m id) 5) |> toBe 5;
    });

    test "apply" (fun () => {
        let m = T add;
        let m1 = apply m (T 1);
        let m2 = apply m1 (T 2);

        expect (bind m2 id) |> toBe 3;
    });
});