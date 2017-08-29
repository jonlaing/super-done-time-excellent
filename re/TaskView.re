open ReactNative;
open Task;
open Utils;

let component = ReasonReact.statelessComponent "TaskView";

let make ::task ::onEdit _children => {
    {
        ...component,
        render: fun _self =>
            <View>
                <Text>(Utils.str task.title)</Text>
                <TouchableOpacity onPress=(onEdit)>
                    <Text>(str "Edit")</Text>
                </TouchableOpacity>
            </View>
    }
};