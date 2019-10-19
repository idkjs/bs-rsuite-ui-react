[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~separator: React.element=?
  ) =>
  React.element =
  "Breadcrumb";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "Breadcrumb"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~active: bool=?,
      ~componentClass: unit => React.element=?
    ) =>
    React.element =
    "Item";
};
