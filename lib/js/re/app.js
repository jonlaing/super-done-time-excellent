// Generated by BUCKLESCRIPT VERSION 1.8.2, PLEASE EDIT WITH CARE
'use strict';

var Block       = require("bs-platform/lib/js/block.js");
var Curry       = require("bs-platform/lib/js/curry.js");
var StyleRe     = require("bs-react-native/lib/js/src/styleRe.js");
var TaskList    = require("./taskList.js");
var ReactNative = require("bs-react-native/lib/js/src/reactNative.js");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

var component = ReasonReact.statefulComponent("AppRe");

function make() {
  var handlePress = function (id, _, param) {
    return /* Update */Block.__(0, [/* record */[
                /* screen : Task */[id],
                /* tasks */param[/* state */3][/* tasks */1]
              ]]);
  };
  var newrecord = component.slice();
  newrecord[/* render */9] = (function (param) {
      return ReasonReact.element(/* None */0, /* None */0, Curry.app(ReactNative.View[/* make */0], [
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* Some */[StyleRe.style(/* :: */[
                              StyleRe.flex(1),
                              /* :: */[
                                StyleRe.justifyContent(/* center */98248149),
                                /* :: */[
                                  StyleRe.alignItems(/* center */98248149),
                                  /* [] */0
                                ]
                              ]
                            ])],
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* None */0,
                      /* array */[ReasonReact.element(/* None */0, /* None */0, TaskList.make(param[/* state */3][/* tasks */1], /* Event */[
                                  param[/* update */2],
                                  /* T */[handlePress]
                                ], /* array */[]))]
                    ]));
    });
  newrecord[/* initialState */10] = (function () {
      return /* record */[
              /* screen : Home */0,
              /* tasks : [] */0
            ];
    });
  return newrecord;
}

var $$default = ReasonReact.wrapReasonForJs(component, (function () {
        return make(/* () */0);
      }));

exports.component = component;
exports.make      = make;
exports.$$default = $$default;
exports.default   = $$default;
/* component Not a pure module */