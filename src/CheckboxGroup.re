[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~defaultValue: list(string)=?,
    ~name: string=?,
    ~value: string=?,
    ~inline: bool=?,
    ~onChange: (string, ReactEvent.Synthetic.t) => unit=?
  ) =>
  React.element =
  "CheckboxGroup";
