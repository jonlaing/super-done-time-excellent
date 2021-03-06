// Generated by BUCKLESCRIPT VERSION 1.9.1, PLEASE EDIT WITH CARE
'use strict';

var Block              = require("bs-platform/lib/js/block.js");
var Curry              = require("bs-platform/lib/js/curry.js");
var Utils              = require("./utils.js");
var TextRe             = require("bs-react-native/lib/js/src/components/textRe.js");
var ReasonReact        = require("reason-react/lib/js/src/reasonReact.js");
var TouchableOpacityRe = require("bs-react-native/lib/js/src/components/touchableOpacityRe.js");

var component = ReasonReact.statelessComponent("TaskItem");

function make(push, _, task, _$1) {
  var handlePress = function () {
    return Curry._1(push, /* Task */Block.__(0, [task]));
  };
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return ReasonReact.element(/* None */0, /* None */0, TouchableOpacityRe.make(/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* Some */[handlePress], /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0)(/* array */[ReasonReact.element(/* None */0, /* None */0, TextRe.Text[/* make */0](/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* array */[Utils.str(task[/* title */1])]))]));
    });
  return newrecord;
}

exports.component = component;
exports.make      = make;
/* component Not a pure module */
