let component = ReasonReact.statelessComponent("Greetings");

[@genType]
let make = (~message, _children) => {
  ...component,
  render: _self => {
    <p> {ReasonReact.string("Message from ReasonReact " ++ message)} </p>;
  },
};
