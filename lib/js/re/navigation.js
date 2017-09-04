// Generated by BUCKLESCRIPT VERSION 1.9.1, PLEASE EDIT WITH CARE
'use strict';

var Utils       = require("./utils.js");
var TaskList    = require("./taskList.js");
var TaskView    = require("./taskView.js");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

function headerTitle(screen) {
  if (typeof screen === "number") {
    if (screen) {
      return "Other screen";
    } else {
      return "Tasks";
    }
  } else if (screen.tag) {
    return "Other screen";
  } else {
    return screen[0][/* title */1];
  }
}

function renderRoute(self, push, pop, screen) {
  if (typeof screen === "number") {
    if (screen) {
      return Utils.str("Not here yet!");
    } else {
      return ReasonReact.element(/* None */0, /* None */0, TaskList.make(self[/* state */4][/* tasks */1], push, pop, /* array */[]));
    }
  } else if (screen.tag) {
    return Utils.str("Not here yet!");
  } else {
    return ReasonReact.element(/* None */0, /* None */0, TaskView.make(screen[0], push, pop, /* array */[]));
  }
}

exports.headerTitle = headerTitle;
exports.renderRoute = renderRoute;
/* TaskList Not a pure module */