/**
  * Encode a string using given key. The string can only be decoded by using the same exact key
  * toE The string to encrypt
  * pw The secret key to encrypt the string
  */
function encode(toE, pw){
  let result = '';
  for (let index = 0, vi=0; index < toE.length; index++) {
      result += String.fromCharCode( toE.charCodeAt(index) + pw.charCodeAt(vi) );
      vi = (vi + 1)%pw.length;
  }
  return result;
}

/**
  * Decode a string using given key. The string can only be decoded by using the same exact key that was using by encoding it
  * toD The string to decrypt
  * pw The secret key to encrypt the string
  */
function decode(toD, pw){
  let result = '';
  for (let index = 0, vi=0; index < toD.length; index++) {
      result += String.fromCharCode( toD.charCodeAt(index) - pw.charCodeAt(vi) );
      vi = (vi + 1)%pw.length;
  }
  return result;
}
