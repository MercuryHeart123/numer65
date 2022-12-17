let result = 13
let l = 1.5
let r = 2.0
let mid = (l + r) / 2.0
while (Math.abs(result - mid ** 4) > 0.0000001) {
    if (mid ** 4 > result) {
        r = mid
    } else {
        l = mid
    }
    mid = (l + r) / 2.0
}
console.log(mid)