open ReactNative;
open Task;
open Utils;
open BubbleEvent;

let component = ReasonReact.statelessComponent "TaskItem";

let make ::onPress ::task _children => {
    let handlePress () => popEvent (onPress <..> task.id);

    {
        ...component,
        render: fun _self => 
            <TouchableOpacity onPress=(handlePress)>
                <Text>(str task.title)</Text>
            </TouchableOpacity>
    }

};