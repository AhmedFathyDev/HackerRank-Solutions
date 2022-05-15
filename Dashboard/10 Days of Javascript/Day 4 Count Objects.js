
function getCount(objects) {

    let count = 0;

    for (let obj of objects) {
        if (obj.x == obj.y) {
            count++;
        }
    }
    
    return count;
}