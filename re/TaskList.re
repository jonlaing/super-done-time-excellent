open ReactNative;
open Task;

let component = ReasonReact.statelessComponent "TaskList";

let make ::tasks ::onPress _children => {
    ...component,

    render: fun _self => {
        let taskItem task => {
            <TaskItem key=task.id task=task onPress=onPress />
        };

        let taskList = tasks
            |> List.map taskItem
            |> Array.of_list
            |> ReasonReact.arrayToElement;

        <View style=Style.(style [flex 1., justifyContent `center, alignItems `center])>
            (taskList)
        </View>
    }
};