let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: (self) =>
    <div className="Header">
      <Container>
        <img
          src="/img/react.svg"
          className="Header-logo"
          alt="hatch-react"
          width="80"
        />
        <h1 className="Header-title">(ReasonReact.stringToElement("hatch-react"))</h1>
        <p className="Header-subTitle">(ReasonReact.stringToElement("A React starter kit"))</p>
        <nav className="Header-navigation">
          <a
            href="/"
            className="Header-navigation-item"
          >(ReasonReact.stringToElement("Counter"))</a>
        </nav>
      </Container>
    </div>
};