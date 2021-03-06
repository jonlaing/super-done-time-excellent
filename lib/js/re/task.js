// Generated by BUCKLESCRIPT VERSION 1.9.1, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");

function timeToPoints(minutes) {
  if (minutes >= 60) {
    if (minutes >= 150) {
      if (minutes !== 240) {
        if (minutes >= 151) {
          return /* None */0;
        } else {
          return /* Some */[13];
        }
      } else {
        return /* Some */[21];
      }
    } else if (minutes !== 90) {
      if (minutes >= 61) {
        return /* None */0;
      } else {
        return /* Some */[5];
      }
    } else {
      return /* Some */[8];
    }
  } else if (minutes !== 10) {
    if (minutes !== 20) {
      if (minutes !== 30) {
        return /* None */0;
      } else {
        return /* Some */[3];
      }
    } else {
      return /* Some */[2];
    }
  } else {
    return /* Some */[1];
  }
}

function pointsToTime(p) {
  var switcher = p - 1 | 0;
  if (switcher > 20 || switcher < 0) {
    return /* None */0;
  } else {
    switch (switcher) {
      case 0 : 
          return /* Some */[10];
      case 1 : 
          return /* Some */[20];
      case 2 : 
          return /* Some */[30];
      case 4 : 
          return /* Some */[60];
      case 7 : 
          return /* Some */[90];
      case 12 : 
          return /* Some */[150];
      case 3 : 
      case 5 : 
      case 6 : 
      case 8 : 
      case 9 : 
      case 10 : 
      case 11 : 
      case 13 : 
      case 14 : 
      case 15 : 
      case 16 : 
      case 17 : 
      case 18 : 
      case 19 : 
          return /* None */0;
      case 20 : 
          return /* Some */[240];
      
    }
  }
}

function getById(id) {
  return (function (param) {
      return List.fold_left((function (acc, task) {
                    var match = +(task[/* id */0] === id);
                    if (match !== 0) {
                      return /* Some */[task];
                    } else {
                      return acc;
                    }
                  }), /* None */0, param);
    });
}

exports.timeToPoints = timeToPoints;
exports.pointsToTime = pointsToTime;
exports.getById      = getById;
/* No side effect */
