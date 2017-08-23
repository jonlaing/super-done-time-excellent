open ReactNative;
open Task;

let component = ReasonReact.statelessComponent "TaskView";

let make ::task ::onEdit _children => {
    ...component,
    render: fun _self =>
        <View>
            <Text>(Utils.str task.title)</Text>
        </View>
}