let component = ReasonReact.statelessComponent("Container");

let make = (children) => {
  ...component,
  render: (self) =>
    <div className="Container">
      {children}
    </div>
};