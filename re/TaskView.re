open ReactNative;

open Task;

open Utils;

let component = ReasonReact.statelessComponent "TaskView";

let make ::task ::push ::pop _children => {
  let handlePress _event => push (Routes.EditTask task);
  {
    ...component,
    render: fun _self =>
      <View>
        <Text> (Utils.str task.title) </Text>
        <TouchableOpacity onPress=handlePress> <Text> (str "Edit") </Text> </TouchableOpacity>
      </View>
  }
};
