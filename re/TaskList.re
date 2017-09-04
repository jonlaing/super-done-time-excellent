open ReactNative;

open Task;

let component = ReasonReact.statelessComponent "TaskList";

let taskItem ::push ::pop task => <TaskItem key=task.id task push pop />;

let make ::tasks ::push ::pop _children => {
  ...component,
  render: fun _self => {
    let taskList =
      tasks |> List.map (taskItem ::push ::pop) |> Array.of_list |> ReasonReact.arrayToElement;
    <View style=Style.(style [flex 1., justifyContent `center, alignItems `center])>
      <Text> (Utils.str "Task List") </Text>
      taskList
    </View>
  }
};
