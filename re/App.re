let component = ReasonReact.reducerComponent "AppRe";

let make () => {
  ...component,
  initialState: fun () => (
    {
      screen: [Home],
      tasks: [
        {
          id: "blah",
          title: "blah blah",
          due: Js.Date.make (),
          createdAt: Js.Date.make (),
          updatedAt: Js.Date.make (),
          points: 5
        }
      ]
    }: State.t
  ),
  reducer: fun (action: Actions.t) (state: State.t) =>
    switch action {
    | PushScreen screen => ReasonReact.Update {...state, screen: [screen, ...state.screen]}
    | PopScreen =>
      switch state.screen {
      | [] => failwith "stack empty"
      | [_] => ReasonReact.NoUpdate
      | [_, ...tail] => ReasonReact.Update {...state, screen: tail}
      }
    },
  render: fun self => {
    let {ReasonReact.state: state} = self;
    let {State.screen: screen} = state;
    ReasonReact.element @@
    Routes.Navigator.make
      navigationState::screen
      goBack::(self.reduce Actions.pop)
      getHeaderConfig::Navigation.headerTitle
      render::(
        Navigation.renderRoute
          ::self push::(self.reduce Actions.push) pop::(self.reduce Actions.pop)
      )
  }
};

let default = ReasonReact.wrapReasonForJs ::component (fun _ => make ());
