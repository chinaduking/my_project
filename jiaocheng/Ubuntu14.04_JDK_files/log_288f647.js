define("common-jquery:widget/js/logic/log/log.js",function(e,n,t){function o(e){var n="explog_"+(new Date).getTime(),t=window[n]=new Image;t.onload=t.onerror=function(){window[n]=null},t.src=e,t=null}function r(e){for(var n=e.split(","),t={},o=0;o<n.length;o++){var r=n[o].split(":");t[i.string.trim(r[0])]=i.string.trim(r[1])}return t}var i=e("common-jquery:widget/lib/jquery/jquery.js");e("common-jquery:widget/lib/jquery.plugins/string.js");var a={};t.exports.init=function(e){var n={query:"a",evtType:"mousedown"};for(var o in e)n[o]=e[o];var u=i(n.query);delete n.query,i.extend(a,n),i.each(u,function(e,o){i(o).attr("log")&&i(document).delegate(o,n.evtType,function(){var e=i(o).attr("log"),a=location.href;"a"==o.tagName.toLowerCase()&&(a=encodeURIComponent(o.href)),i.extend(n,r(e));var u=n.type;return delete n.type,t.exports.send(a,u,n),n})})},n.addKey=function(e){i.extend(a,e)},t.exports.send=function(e,n,t){var r="http://nsclick.baidu.com/v.gif?",u="http://kstj.baidu.com/v.gif?",d={pid:180,url:encodeURIComponent(e),type:n,t:(new Date).getTime()};i.extend(d,a),i.extend(d,t);var c=[];return i.each(d,function(e,n){c.push(e+"="+n)}),o(r+c.join("&")),o(u+c.join("&")),e+c.join("&").replace(/&t=\d+/,"")},n.imageReq=o});