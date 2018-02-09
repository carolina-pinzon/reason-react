let component = ReasonReact.statelessComponent("AppView");

let make = (_children) => {
  ...component,
  render: (self) =>
    <div>
      <Header />
    </div>
};