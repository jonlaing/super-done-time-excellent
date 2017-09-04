type t =
  | PushScreen Routes.t
  | PopScreen;

let push screen => PushScreen screen;

let pop _screen => PopScreen;
