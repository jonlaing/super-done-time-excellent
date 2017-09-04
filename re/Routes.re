type t =
  | Home
  | Task Task.t
  | EditTask Task.t
  | Settings;

let compare a b =>
  switch (a, b) {
  | (Home, Home)
  | (Settings, Settings) => true
  | (Task a, Task b) => a == b
  | (EditTask a, EditTask b) => a == b
  | _ => false
  };

module Navigator =
  StackNavigator.Make {
    type navigationState = t;
    let compare = compare;
  };
