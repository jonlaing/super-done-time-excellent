open ReactNative;
open Task;
open Utils;
open BubbleEvent;

let component = ReasonReact.statelessComponent "TaskView";

let make ::task ::onEdit _children => {
    let handlePress () => popEvent (onEdit <..> task.id);
    {
        ...component,
        render: fun _self =>
            <View>
                <Text>(Utils.str task.title)</Text>
                <TouchableOpacity onPress=(handlePress)>
                    <Text>(str "Edit")</Text>
                </TouchableOpacity>
            </View>
    }
};