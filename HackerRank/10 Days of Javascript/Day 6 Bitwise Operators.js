
function getMaxLessThanK(n, k) {

    let ans = 0;

    for (let a = 1; a < n; a++) {
        for (let b = a + 1; b <= n; b++) {
            if (Number(a & b) < k) {
                ans = Math.max(a & b, ans);
            }
        }
    }

    return ans;
}