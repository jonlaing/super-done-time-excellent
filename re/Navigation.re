let headerTitle screen =>
  switch screen {
  | Routes.Home => "Tasks"
  | Routes.Task task => task.title
  | _ => "Other screen"
  };

let renderRoute self::(self: ReasonReact.self State.t 'b 'c) ::push ::pop screen =>
  switch screen {
  | Routes.Home => <TaskList tasks=self.state.tasks push pop />
  | Routes.Task task => <TaskView task push pop />
  | _ => Utils.str "Not here yet!"
  };
