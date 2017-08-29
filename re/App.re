open ReactNative;
external alert: string => unit = "alert" [@@bs.val];

type stateType = {
    screen: Routes.t,
    tasks: list Task.t,
};

let component = ReasonReact.statefulComponent "AppRe";

let make () => {
    let handlePress id _event { ReasonReact.state } => {
        Js.log("clicked!!");
            ReasonReact.Update {
                ...state,
                screen: Task id
            };
        };

    let handleEdit id _event { ReasonReact.state } =>
            ReasonReact.Update {
                ...state,
                screen: EditTask id
            };

    let renderTaskList self =>
        <TaskList
            tasks=self.ReasonReact.state.tasks
            onPress=(BubbleEvent.make self.ReasonReact.update handlePress)
            />;

    let renderTaskView id { tasks } update =>
        switch(Task.getById id tasks) {
        | Some task => <TaskView task=task onEdit=(update (handleEdit id)) />
        | None => Utils.str "Nothing here!"
        };

    let renderRoute self state update =>
        switch (state.screen) {
        | Home => renderTaskList self
        | Task id => renderTaskView id state update
        | _ => Utils.str "Not here yet!";
        };

    {
        ...component,

        initialState: fun () => {
            screen: Home,
            tasks: [{
                id: "blah",
                title: "blah blah",
                due: Js.Date.make (),
                createdAt: Js.Date.make (),
                updatedAt: Js.Date.make (),
                points: 5
            }]
        },


        render: fun self =>
            <View style=Style.(style [flex 1., justifyContent `center, alignItems `center])>
                (renderRoute self self.state self.update)
            </View>
    };
};

let default =
    ReasonReact.wrapReasonForJs
    ::component
    (fun _ => make ());