export function encode(toE:string, pw:string):string{
  let result:string = '';
  for (let index = 0, vi=0; index < toE.length; ++index) {
      result += String.fromCharCode( toE.charCodeAt(index) + pw.charAt(vi) );
      vi = (vi + 1)%vi.length;
  }
  return result;
}

export function decode(toD:string, pw:string):string{
  let result:string = '';
  for (let index = 0, vi=0; index < toD.length; ++index) {
      result += String.fromCharCode( toD.charCodeAt(index) - pw.charAt(vi) );
      vi = (vi + 1)%vi.length;
  }
  return result;
}
