open ReactNative;
open Utils;

type stateType = {
    screen: Routes.t,
    tasks: list Task.t,
};

let component = ReasonReact.statefulComponent "AppRe";

let make () => {
    let handlePress id _event { ReasonReact.state } =>
            ReasonReact.Update {
                ...state,
                screen: Task id
            };

    {
        ...component,

        initialState: fun () => {
            screen: Home,
            tasks: []
        },

        render: fun { state, update } =>
            <View style=Style.(style [flex 1., justifyContent `center, alignItems `center])>
                <TaskList
                    tasks=state.tasks
                    onPress=(BubbleEvent.Event update (ApplicativeMonad.T handlePress))
                />
            </View>
    };
};

let default =
ReasonReact.wrapReasonForJs
  ::component
  (fun _ => make ());