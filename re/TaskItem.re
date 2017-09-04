open ReactNative;

open Task;

open Utils;

let component = ReasonReact.statelessComponent "TaskItem";

let make ::push ::pop ::task _children => {
  let handlePress _event => push (Routes.Task task);
  {
    ...component,
    render: fun _self =>
      <TouchableOpacity onPress=handlePress> <Text> (str task.title) </Text> </TouchableOpacity>
  }
};
