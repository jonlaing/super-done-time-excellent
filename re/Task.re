type t = {
    id: string,
    title: string,
    due: Js.Date.t,
    createdAt: Js.Date.t,
    updatedAt: Js.Date.t,
    points: int
};

let timeToPoints minutes =>
    switch(minutes) {
    | 10 => Some 1
    | 20 => Some 2
    | 30 => Some 3
    | 60 => Some 5
    | 90 => Some 8
    | 150 => Some 13
    | 240 => Some 21
    | _ => None
    };

let pointsToTime p =>
    switch(p) {
    | 1 => Some 10
    | 2 => Some 20
    | 3 => Some 30
    | 5 => Some 60
    | 8 => Some 90
    | 13 => Some 150
    | 21 => Some 240
    | _ => None
    };