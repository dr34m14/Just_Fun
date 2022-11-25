let s="^&,*$,&),(%,^^,^*,!@#,*#,!!^,(&,!!$,(%,*&,(&,!!$,!!%,(%,&),!!!,!!$,(%,&^,!)%,!)@,!)!,!@%";

let s_len=s.length;
let res='';
let any1={
    '!':'1',
    '@':'2',
    '#':'3',
    '$':'4',
    '%':'5',
    '^':'6',
    '&':'7',
    '*':'8',
    '(':'9',
    ')':'0',
    ',':'<'
}

for(let i=0;i<s_len;i++){
    res+=any1[s[i]]
 
}
let new_res=res.split('<');
let ss_ff='';
for (let j = 0; j < new_res.length; j++) {
    ss_ff+=String.fromCharCode(new_res[j]);
}
console.log(ss_ff)