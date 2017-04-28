module Page = {
  include ReactRe.Component;
  type props = {message: string};
  let name = "Page";
  let render {props} =>
    <h1> (ReactRe.stringToElement props.message) </h1>;
};

include ReactRe.CreateComponent Page;

let createElement ::message => wrapProps {message: message};

