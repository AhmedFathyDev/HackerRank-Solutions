
class Polygon {

    constructor(nums) {
        this.nums = nums;
    }

    perimeter() {

        let perimeter = 0;

        for (let side of this.nums) {
            perimeter += side;
        }

        return perimeter;
    }
}