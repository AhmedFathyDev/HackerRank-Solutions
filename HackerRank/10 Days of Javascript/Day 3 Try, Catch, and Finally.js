
function reverseString(s) {

    try {
        s = s.split("");
        s = s.reverse();
        s = s.join("");
    } catch (error) {
        console.log(error.message);
    }
    finally {
        console.log(s);
    }
}