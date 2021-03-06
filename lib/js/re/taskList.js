// Generated by BUCKLESCRIPT VERSION 1.9.1, PLEASE EDIT WITH CARE
'use strict';

var List        = require("bs-platform/lib/js/list.js");
var $$Array     = require("bs-platform/lib/js/array.js");
var Curry       = require("bs-platform/lib/js/curry.js");
var Utils       = require("./utils.js");
var TextRe      = require("bs-react-native/lib/js/src/components/textRe.js");
var StyleRe     = require("bs-react-native/lib/js/src/styleRe.js");
var TaskItem    = require("./taskItem.js");
var ReactNative = require("bs-react-native/lib/js/src/reactNative.js");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

var component = ReasonReact.statelessComponent("TaskList");

function taskItem(push, pop, task) {
  return ReasonReact.element(/* Some */[task[/* id */0]], /* None */0, TaskItem.make(push, pop, task, /* array */[]));
}

function make(tasks, push, pop, _) {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      var taskList = $$Array.of_list(List.map((function (param) {
                  return taskItem(push, pop, param);
                }), tasks));
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
                      /* array */[
                        ReasonReact.element(/* None */0, /* None */0, TextRe.Text[/* make */0](/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* array */[Utils.str("Task List")])),
                        taskList
                      ]
                    ]));
    });
  return newrecord;
}

exports.component = component;
exports.taskItem  = taskItem;
exports.make      = make;
/* component Not a pure module */
