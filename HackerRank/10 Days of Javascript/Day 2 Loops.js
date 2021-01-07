
function vowelsAndConsonants(s) {

    let str = '';

    for (let ch of s) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                console.log(ch);
                break;
            default:
                str += ch;
                break;
        }
    }

    for (let ch of str) {
        console.log(ch);
    }
}