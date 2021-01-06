
function main() {

    const PI = Math.PI;

    let r = readLine();

    console.log(PI * r * r);

    console.log(2 * PI * r);

    try {
        PI = 0;
        console.log(PI);
    } catch (error) {
        console.error("You correctly declared 'PI' as a constant.");
    }

}