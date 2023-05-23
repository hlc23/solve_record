/**
 * @param {any} object
 * @return {string}
 */
var jsonStringify = function(object) {
    
    if (object === null) {
      return "null";
    }
  
    if (Array.isArray(object)) {
      let result = "[";
      for (let i = 0; i < object.length; i++) {
        result += jsonStringify(object[i]);
        if (i < object.length - 1) {
          result += ",";
        }
      }
      result += "]";
      return result;
    }
  
    if (typeof object === "object") {
      let result = "{";
      const keys = Object.keys(object);
      for (let i = 0; i < keys.length; i++) {
        const key = keys[i];
        result += '"' + key + '":' + jsonStringify(object[key]);
        if (i < keys.length - 1) {
          result += ",";
        }
      }
      result += "}";
      return result;
    }
  
    if (typeof object === "string") {
      return '"' + object + '"';
    }
  
    return String(object);
  }
  